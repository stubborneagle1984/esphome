#include <AsyncTCP.h>
#include <ESPAsyncWebServer.h>
#include "icons.h" // File che contiene le immagini delle icone in formato binario

#define LOG_LOCAL_LEVEL ESP_LOG_VERBOSE
#include "esp_log.h"
#include <WiFiUdp.h>

class CustomWebServer : public Component {
 public:
  AsyncWebServer server;
  WiFiUDP udp_multicast;  // Socket per ricevere pacchetti multicast
  WiFiUDP udp_unicast;    // Socket dedicato per risposte unicast
  bool server_started = false;
  unsigned long last_ssdp_announcement = 0;  // Timer per SSDP
  const unsigned long SSDP_INTERVAL = 60000; // 60 secondi

  // Buffer per i log personalizzati
  String log_buffer;
  
  CustomWebServer() : server(80) {}

  void setup() override {
    ESP_LOGI("CustomWebServer", "Setup avviato...");
	custom_log("CustomWebServer: Setup avviato...");

    // Endpoint per servire la pagina HTML
    server.on("/", HTTP_GET, [&](AsyncWebServerRequest *request) {
      String html = generate_html();
      request->send(200, "text/html", html);
    });
	
    // Endpoint per servire i dati in formato JSON
    server.on("/data", HTTP_GET, [&](AsyncWebServerRequest *request) {
      String json = "{";
      json += "\"perc_riemp\":" + String(id(template_perc_riemp).state, 2) + ",";
      json += "\"livello_acqua\":" + String(id(sens_livello_acqua).state, 2) + ",";
      json += "\"litri_disp\":" + String(id(template_litri_disp).state, 1);
      json += "}";
      request->send(200, "application/json", json);
    });
	
    // Endpoint per servire lo stato della liveness
    server.on("/liveness", HTTP_GET, [&](AsyncWebServerRequest *request) {
      bool liveness = id(ultrasonic_liveness).state;
      String response = liveness ? "connected" : "disconnected";
      request->send(200, "text/plain", response);
    });
	
	// Endpoint per servire il manifest JSON
	server.on("/manifest.json", HTTP_GET, [&](AsyncWebServerRequest *request) {
		AsyncWebServerResponse *response = request->beginResponse(200, "application/json", R"rawliteral({
			"name": "Livello Acqua Cisterna",
			"short_name": "Cisterna",
			"start_url": "/",
			"display": "standalone",
			"background_color": "#f5f5f5",
			"theme_color": "#ffffff",
			"icons": [
				{
					"src": "/icon-192x192.png",
					"sizes": "192x192",
					"type": "image/png"
				},
				{
					"src": "/icon-512x512.png",
					"sizes": "512x512",
					"type": "image/png"
				}
			]
		})rawliteral");
		response->addHeader("Content-Type", "application/json");
		request->send(response);
	});

	server.on("/sw.js", HTTP_GET, [&](AsyncWebServerRequest *request) {
		AsyncWebServerResponse *response = request->beginResponse(200, "application/javascript", R"rawliteral(
			self.addEventListener('install', event => {
				event.waitUntil(
					caches.open('cisterna-cache').then(cache => {
						return cache.addAll(['/', '/manifest.json', '/icon-192x192.png', '/icon-512x512.png']);
					})
				);
			});
	
			self.addEventListener('fetch', event => {
				event.respondWith(
					caches.match(event.request).then(response => response || fetch(event.request))
				);
			});
		)rawliteral");
		response->addHeader("Content-Type", "application/javascript");
		request->send(response);
	});		

	// Endpoint per l'icona 192x192
	server.on("/icon-192x192.png", HTTP_GET, [&](AsyncWebServerRequest *request) {
		AsyncWebServerResponse *response = request->beginResponse_P(200, "image/png", icon_192x192, sizeof(icon_192x192));
		request->send(response);
	});

	// Endpoint per l'icona 512x512
	server.on("/icon-512x512.png", HTTP_GET, [&](AsyncWebServerRequest *request) {
		AsyncWebServerResponse *response = request->beginResponse_P(200, "image/png", icon_512x512, sizeof(icon_512x512));
		request->send(response);
	});

	// Serve description.xml
	server.on("/description.xml", HTTP_GET, [&](AsyncWebServerRequest *request) {
		String xml = R"rawliteral(<?xml version="1.0"?>
			<root xmlns="urn:schemas-upnp-org:device-1-0">
                <specVersion>
                    <major>1</major>
                    <minor>0</minor>
                </specVersion>			
				<device>
					<deviceType>urn:schemas-upnp-org:device:Thermostat:1</deviceType>
					<friendlyName>Livello Acqua Cisterna</friendlyName>
					<manufacturer>ESP32</manufacturer>
					<modelName>ESP32 Water Monitor</modelName>
				    <serialNumber>12345678</serialNumber>					
					<UDN>uuid:esp32-water-level</UDN>
					<presentationURL>http://)rawliteral" + WiFi.localIP().toString() + R"rawliteral(/</presentationURL>					
					<serviceList>
					<service>
						<serviceType>urn:schemas-upnp-org:service:WaterLevel:1</serviceType>
						<controlURL>/state</controlURL>
					</service>
					</serviceList>
				</device>
			</root>)rawliteral"; 
		request->send(200, "application/xml", xml);
	});

    // Serve lo stato della cisterna ad Amazon Echo (come termostato)
    server.on("/state", HTTP_GET, [&](AsyncWebServerRequest *request) {
        float perc_riemp = id(template_perc_riemp).state;  // Percentuale riempimento
        float current_temp = perc_riemp * 0.5;            // Esempio: calcola una temperatura fittizia basata sul riempimento
    
        String json = "{";
        json += "\"status\":\"OK\",";
        json += "\"currentTemperature\":" + String(current_temp, 2) + ",";
        json += "\"targetTemperature\":" + String(25.0, 1) + ","; // Valore fisso come esempio (25°C)
        json += "\"temperatureUnit\":\"C\",";                     // Unità di misura in Celsius
        json += "\"operationMode\":\"Heating\",";                  // Simula un termostato in modalità riscaldamento
		json += "\"fillperc\":" + String(perc_riemp, 2) + ",";
		json += "\"fillpercUnit\":\"%\"";
        json += "}";
    
        request->send(200, "application/json", json);
    });
    

	server.on("/custom_logs", HTTP_GET, [&](AsyncWebServerRequest *request) {
		String html = R"rawliteral(
		<!DOCTYPE html>
		<html>
		<head>
			<title>Custom Logs</title>
			<meta charset="UTF-8">
			<script>
			function updateLogs() {
				fetch('/get_logs')  // Richiesta al nuovo endpoint per i log
				.then(response => response.text())
				.then(data => {
					document.getElementById("log-container").innerHTML = data; // Aggiorna il contenitore
				})
				.catch(error => console.error('Errore aggiornamento log:', error));
			}
			setInterval(updateLogs, 1000); // Aggiorna ogni 2 secondi
			window.onload = updateLogs;    // Aggiorna al caricamento iniziale
			</script>
		</head>
		<body>
			<h1>Custom Logs</h1>
			<div id="log-container" style="white-space: pre-wrap;"></div>
		</body>
		</html>
		)rawliteral";
	
		request->send(200, "text/html", html);
	});

	server.on("/get_logs", HTTP_GET, [&](AsyncWebServerRequest *request) {
	  AsyncWebServerResponse *response = request->beginResponse(200, "text/plain", log_buffer);
	  response->addHeader("Cache-Control", "no-store, no-cache, must-revalidate, max-age=0");
	  response->addHeader("Pragma", "no-cache");
	  response->addHeader("Expires", "-1");
	  request->send(response);
	});
  }

  void loop() override {
    // Controllo connessione Wi-Fi e avvio server se necessario 
    if (!server_started && WiFi.isConnected()) {
        ESP_LOGI("CustomWebServer", "Wi-Fi connesso, avvio server...");
        custom_log("CustomWebServer: Wi-Fi connesso, avvio server...");

		// Inizializza unicast UDP per invio risposta a M-SEARCH 
  	    // udp_unicast.begin(12345); // Usa una porta diversa, ad esempio 12345

        // Inizializza multicast UDP per ricezione
		udp_multicast.beginMulticast(IPAddress(239, 255, 255, 250), 1900); 
		ESP_LOGI("CustomWebServer", "Iscritto al gruppo multicast 239.255.255.250 sulla porta 1900.");
		custom_log("CustomWebServer: Iscritto al gruppo multicast 239.255.255.250 sulla porta 1900."); 		

        server.begin();   // Avvia il server
        start_notify();     // Primo annuncio SSDP (NOTIFY per Alexa)
        server_started = true;
    }
	
    if (server_started){
	  // Rispondere alle richieste M-SEARCH di Alexa
      int packetSize = udp_multicast.parsePacket();
      //custom_log("CustomWebServer: packetSize: %d", packetSize);
      if (packetSize) {
          char incomingPacket[2048]; 
          int len = udp_multicast.read(incomingPacket, 2048);
          if (len > 0) {
			  incomingPacket[len] = 0;
			  //custom_log("CustomWebServer: packet=%s", incomingPacket);
		  }
  
          // Verifica se è una richiesta M-SEARCH
          if (strstr(incomingPacket, "M-SEARCH")) {// && 
		     //(strstr(incomingPacket, "ssdp:discover") || strstr(incomingPacket, "ssdp:all"))) {
                ESP_LOGI("CustomWebServer", "Ricevuta richiesta M-SEARCH, invio risposta SSDP...");
			    custom_log("CustomWebServer: Ricevuta richiesta M-SEARCH, invio risposta SSDP...");
                respond_to_msearch(udp_multicast.remoteIP(), udp_multicast.remotePort());
          }
      }
	  
	  // Invio periodico di NOTIFY (per Alexa)
	  if(millis() - last_ssdp_announcement >= SSDP_INTERVAL) {
  	    start_notify();
  	    last_ssdp_announcement = millis();
      }
	}
  }

 private:
  void custom_log(const char* format, ...) {
    char buffer[256];  // Buffer locale con dimensione fissa, adatta ai tuoi messaggi
    va_list args;

    va_start(args, format);
    int len = vsnprintf(buffer, sizeof(buffer), format, args);  // Formatta il messaggio nel buffer
    va_end(args);
	
    // Controlla se il messaggio è stato troncato
    if (len >= sizeof(buffer)) {
        ESP_LOGW("CustomWebServer", "Messaggio troncato per buffer troppo piccolo!");
    }	
	
    String log_entry = "[" + String(millis()) + "ms] " + buffer; // Aggiunge il timestamp	
	
    log_buffer += log_entry;
    log_buffer += "<br>";
	
    // Limita la dimensione massima del buffer a 8KB
    if (log_buffer.length() > 8192) {  // 8KB come limite
        log_buffer.remove(0, log_buffer.indexOf("<br>") + 4);  // Rimuove la prima riga di log
    }
	
    ESP_LOGI("CustomWebServer", "%s", log_entry.c_str());
  }

  void respond_to_msearch(IPAddress clientIP, int clientPort) {
      String localIP = WiFi.localIP().toString();   
	  String ssdp_response = "HTTP/1.1 200 OK\r\n"
		"CACHE-CONTROL: max-age=100\r\n"
		"EXT:\r\n"
		"LOCATION: http://" + localIP + "/description.xml\r\n"
        "SERVER: ESP32/1.0 UPnP/1.1\r\n"
        "ST: urn:schemas-upnp-org:device:Thermostat:1\r\n"
        "USN: uuid:esp32-water-level::urn:schemas-upnp-org:device:Thermostat:1\r\n\r\n";

      udp_multicast.beginPacket(clientIP, clientPort);  // Risposta unicast
      udp_multicast.print(ssdp_response);  
      int result = udp_multicast.endPacket();
   
      // Log per debug
      if (result) {
          ESP_LOGI("CustomWebServer", "Risposta M-SEARCH inviata a %s:%d", clientIP.toString().c_str(), clientPort);
          custom_log("CustomWebServer: Risposta M-SEARCH inviata a %s:%d", clientIP.toString().c_str(), clientPort);
      } else {
          ESP_LOGW("CustomWebServer", "Invio fallito a %s:%d", clientIP.toString().c_str(), clientPort);
          custom_log("CustomWebServer: Invio fallito a %s:%d", clientIP.toString().c_str(), clientPort);
      }
  }
  
  void start_notify() {
      String localIP = WiFi.localIP().toString();	  
      String ssdp_notify = "NOTIFY * HTTP/1.1\r\n"
		"HOST: 239.255.255.250:1900\r\n"
		"CACHE-CONTROL: max-age=100\r\n"
		"LOCATION: http://" + localIP + "/description.xml\r\n"
        "NT: urn:schemas-upnp-org:device:Thermostat:1\r\n"		
		"NTS: ssdp:alive\r\n"
		"SERVER: ESP32/1.0 UPnP/1.1\r\n"
        "USN: uuid:esp32-water-level::urn:schemas-upnp-org:device:Thermostat:1\r\n\r\n";
  
      udp_multicast.beginPacket(IPAddress(239, 255, 255, 250), 1900);  // Multicast
      udp_multicast.print(ssdp_notify);
      int result = udp_multicast.endPacket();

      // Log per debug
      if (result) {
		ESP_LOGI("CustomWebServer", "Pacchetto NOTIFY inviato.");
		custom_log("CustomWebServer: Pacchetto NOTIFY inviato.");	 
      } else {
        ESP_LOGW("CustomWebServer", "Invio fallito di NOTIFY");
        custom_log("CustomWebServer: Invio fallito di NOTIFY");
      } 
  }

  String generate_html() {
    String favicon = R"rawliteral(
      <link rel="manifest" href="/manifest.json">
      <link rel="apple-touch-icon" href="/icon-192x192.png">
	  <link rel="icon" type="image/png" href="/icon-192x192.png">	  
	  <meta name="description" content="Webapp per monitorare il livello della cisterna.">	  
      <meta name="theme-color" content="#ffffff">
      <meta name="apple-mobile-web-app-capable" content="yes">
      <meta name="apple-mobile-web-app-status-bar-style" content="default">
      <meta name="apple-mobile-web-app-title" content="Livello Acqua Cisterna">
    )rawliteral";

    String html = R"rawliteral(
      <!DOCTYPE html>
      <html lang="en">
      <head>
          <meta charset="UTF-8">
          <meta name="viewport" content="width=device-width, initial-scale=1.0">
          <title>Livello Acqua Cisterna</title>
          )rawliteral" +
                   favicon +
                   R"rawliteral(
          <style>
              body {
                  font-family: Arial, sans-serif;
                  margin: 0;
                  padding: 0;
                  display: flex;
                  justify-content: center;
                  align-items: center;
                  height: 100vh;
                  background-color: #f5f5f5;
              }
              .container {
                  display: flex;
                  flex-direction: column;
                  align-items: center;
                  background: white;
                  border-radius: 10px;
                  box-shadow: 0px 4px 10px rgba(0, 0, 0, 0.1);
                  padding: 20px;
				  transform: translateY(-10%);
              }
              .sensor-info {
                  margin-top: 10px;
                  font-size: 1.2rem;
              }
              .status-icon {
				  position: fixed; /* Usa 'fixed' per mantenerlo visibile anche durante lo scrolling */				  
                  top: 10px;
                  left: 10px;
                  width: 50px;
                  height: 50px;
				  z-index: 1000; /* Assicurati che sia sopra altri elementi */				  
              }
          </style>
          <script>
			document.addEventListener('DOMContentLoaded', () => {
				async function updateData() {
					try {
						const response = await fetch('/data');
						const data = await response.json();
	
						document.getElementById('percentuale-riempimento').innerText = `Percentuale Riempimento: ${data.perc_riemp} %`;
						document.getElementById('distanza').innerText = `Distanza: ${data.livello_acqua} m`;
	
						const svgRect = document.querySelector('rect:nth-child(2)');
						svgRect.setAttribute('y', `${290 - data.perc_riemp * 2.8}`);
						svgRect.setAttribute('height', `${data.perc_riemp * 2.8}`);

						// Aggiorna il testo con i litri disponibili
						const svgText = document.querySelector('text');
						svgText.textContent = `${data.litri_disp.toLocaleString('it-IT', { minimumFractionDigits: 1 })} (L)`;

					} catch (error) {
						console.error('Errore durante l\'aggiornamento dei dati:', error);
					}
				}

				async function updateLiveness() {
					try {
						const response = await fetch('/liveness');
						const status = await response.text();
						const icon = document.getElementById('status-icon');
						icon.src = status === 'connected' ? 'data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAIAAAACACAYAAADDPmHLAAAECUlEQVR4nO2c25LjIAxE5a3976n5cu+Tq1LZ2OEmqUX3eQ42QQcMMvg4z9MEL3+yKyBykQDkSAByJAA5EoAcCUCOBCBHApAjAciRAORIAHIkADkSgBwJQI4EIEcCkCMByJEA5EgAciQAORKAHAlAjgQgRwKQIwHIkQDkSAByJAA5f7MrEMnxezSfhD1/zsOzLigcu54O7gl2KztKsZ0AHoF/ZycRthAgIuh3VJehtAC9ge8Jlue1kSgrQEuAVgYl+n5RlBPgWyAigoBQh1WUEuCp4TMaHa0+I5QR4K6xERoauW7fKJEJRG/gu3pkrk5agR8BPjXiTOC9J3Or6+sNtAArGnNFL1xxT1QJYAWYbcTsVHAVCSAFmGk8pFRwBQngBBhttNbAI1wLSQIoAbyC7zlprC4BtAAzwfdo4Jl7jfy3CGDyACPP7uj8wMr1PkqOAGIEGBkis4fVinX+BMwI8EqFhvx0v4ovidJHgN5geieHvJM+CPK+AieAV+ONPHO91vtIE0LIR0ArrbPv0QlXa1nEob2VVAFme3/v9UdZfe/3/5m5Iih7LmBkothS9q7c8XucT+XOn/NAWdr1kDYC9DRW7zPzKT/wrezTb3pn+TP/MQqYOcCq5+jdhKz3+ndlVgUKZd4AI8Ads71otqFnJUB/LMAL8E5PQFf1sox7RlFOgDuiexp6z24lRYCIRMjqa0bUMUMq6BEAKWPWA0JgW4EWoJUoUSoFtpUtBBDjSAByJAA5EoAcCUCOBCBnCwGilmdV8xJPQAtQdd1dSZQUASICu/qaEXXMEAV6BOgBYVt4RcoJkPEufqf3/+/ACzD7Ln42ILObTNBHChgBPLdajWwNvyvjuXUtgzQBZnrR6BGsFhGeftO7GbXCSFF2W/jMNm2PU0IoPbqX1EdAT88e6SEZewJbyiAs/y5g5gAjtB7bGm3g1rJVe78Z4OFQM50OjiRdALM1J39QvhXsOVH0APIRMDLLR9gWXnGiCDECmK1tUM9etWqJ2FImApgRYOVMO+p18Ld6PIEQfDOgEcBM3wnMAEoAM30pNBo4AczivwXUi9e3gzKAFMBsvvE8RJi9P1rwzYAFMPNP+rTinRzKBFoAs/WN6f3Vr0rBNysggFnOer+XCnX8BEwe4Ino9X4vVYNvVmQEuFj9ungWtPqMUEoAM9+kT6U6rKKcABfRn3Dd9ZOxZQUw658DeOYRKgbfrLgAF5mTwaqBv9hCgFeQUsEV2E6Ai+xUcBW2FeATPVLsGOxPUAkg/qdEJlD4IQHIkQDkSAByJAA5EoAcCUCOBCBHApAjAciRAORIAHIkADkSgBwJQI4EIEcCkCMByJEA5EgAciQAORKAHAlAjgQgRwKQIwHIkQDk/ANkCkwewS1exgAAAABJRU5ErkJggg==' : 'data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAIAAAACACAYAAADDPmHLAAAE10lEQVR4nO2d247kIAxEK6v9/1/OvmykqJULF2OX4zqv00nT4WDAQGbb9x2iLn+iCyBikQDFkQDFkQDFkQDFkQDFkQDFkQDFkQDFkQDFkQDFkQDFmRdg27SalJg5AY7KlwRpGRfgt9IlQUrGBLirbEmQjjEB9n27/ZskSMV4FyAJPsHcIFASpGd+GigJUmOTCJIEabHLBEqClNimgiVBOuzXAiRBKtYsBkmCNKxbDZQEKVi7HCwJ6Fm/H0ASULO5HQ59quwnSbzK8ItXmYLxEwDwlWBFdPmgFL4CAOsl8OhWPiSCvwCAvQSRY4nkMsQIANhI0FvxPZW18t5ExAkAzEnQUkGWleL9fU7ECgD0S/BWER6VwFAGI+IFANolYJhKnmErzwAcAgDvD/Pu7wwPmrlsL/CcDBrJGLI84LtyJMh08kSAg9WDrYj7s4h6AZ8AgG3fatEKLb6TVAJOAYB5CaJTwUkk4BRgJkwzpYITSMAnwOiKXet1ltFj9F5EEnAJcPewRqeI589Ylqn33sQScAsw0sKvrrViZjr69NsC4ckDWLbiVQ/XctxBkiPgiAA9IZIl/ToS1gm7Ap4IcObpobDsMWRdqOokPgL0tgqLTN7qRFNv+QPF4BPAqoX/3mckOqya7xMNCDm7gFZaHvK27cNdQ+u1hKG9lVgBLFq/x5jAepRvEZ2M+Bv1xdOcH2JLMuju2l+eXoD1Njglmdr1EBcBeh5WS6RoCcP7vr1+7ukzvaP8md/oBM8YwKIfteyL70SwqiiScQOPAHdYtiKrmUCClt0KvwC/zLacldPB3s8SkE+AO7xbJXnLbiVGAI9EyNuAj2F1kWA6yB0BLESJWDsgqNhWuAVo5U0UpvQyGd8QoAWWVUQy6ggASIILagkASIIf6gkASIITNQUAJMF/6goASAJ8RYCZ6VmPBEQ7eazgFsBr3m0dCRKJEiOAR8VapnpntpU9QSAKdwTowXs/AXGr7iGfAKtX/SKWmwPhF2C2Va6Q4EORgkeAlVutrPvwD+0niBNgphWNHsFqEaFVlqvPzAzqgiJF3m3hM9u0Lc8LHGUgadG9xHYBPS3bejOI1X0sDqzoaNggrce2Rh/w+dqPpo35DocC60/XzkSa2bOCOh18VYrOkBj9EC0F0gsiLhgZ5Ue/HKKlHIRdBUcEAOxeudJy3Qyjr5CLjlo38EQAy1H+qpZmmYYmqHyASYArZgZcR0JnVoa3+7S+pIIUni7gYDRUjoZmq3tZbUJxhk8AYK6/9GhtM10PUeUDrAIA84OmFSLMRg+yygeYBQDWJ31a8Uw0OcMtAGA/fVodppN1A/wCADHz/V4YjpsPwD0NPPCe7/cS+Qq7SXJEgAO2vrW1PGzlPpFLAIAjw2a9VlF+NXAE78GWxfcRSpBXAGDtwGvVvckkyC3AQeSAaqTSiCT4hgBnIlPBPZBI8D0BDqJSwT0QSPBdAa5gXLELlqCWAKwESpAjE/h1AjOGEoCFIAkkABMBEkgANpwlkACMOEogAVhxkkACMOMggQRgZ7EEEiADCyWQAFlYJIEEyMQCCSRANowlkAAZMZRAAmTlToLO1UMJkJme/452gwTITstbzB6QAF9gYtOIBCiOBCiOBCiOBCiOBCiOBCiOBCiOBCiOBCiOBCjOP+h3XKLqiTQrAAAAAElFTkSuQmCC';
					} catch (error) {
						console.error('Errore durante l\'aggiornamento dello stato:', error);
					}
				}

				if ('serviceWorker' in navigator) {
					navigator.serviceWorker.register('/sw.js').then(() => {
						console.log('Service Worker registrato');
					}).catch(err => {
						console.error('Service Worker non registrato:', err);
					});
				}				
	
				// Aggiorna i dati e la liveness ogni secondo
				setInterval(() => {
					updateData();
					updateLiveness();
				}, 1000);
			});
          </script>
      </head>
      <body>
          <img id="status-icon" class="status-icon" alt="Stato Sensore">  
          <div class="container">
              <h1>Stato della Cisterna</h1>
              <svg viewBox="0 0 200 300" width="200" height="300" xmlns="http://www.w3.org/2000/svg">
                  <rect x="10" y="10" width="180" height="280" fill="none" stroke="black" stroke-width="2"></rect>
                  <rect x="10" y="16.33" width="180" height="273.67" fill="lightblue"></rect>
                  <text x="100" y="150" text-anchor="middle" font-size="20" fill="black">0 (L)</text>
              </svg>
              <div id="percentuale-riempimento" class="sensor-info">Percentuale Riempimento: 0 %</div>
              <div id="distanza" class="sensor-info">Distanza: 0,00 m</div>
          </div>
      </body>
      </html>
    )rawliteral";

    return html;
  }
};
