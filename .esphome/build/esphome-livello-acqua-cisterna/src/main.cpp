// Auto generated code by esphome
// ========== AUTO GENERATED INCLUDE BLOCK BEGIN ===========
#include "esphome.h"
using namespace esphome;
using std::isnan;
using std::min;
using std::max;
using namespace sensor;
using namespace text_sensor;
using namespace binary_sensor;
logger::Logger *logger_logger_id;
web_server_base::WebServerBase *web_server_base_webserverbase_id;
captive_portal::CaptivePortal *captive_portal_captiveportal_id;
wifi::WiFiComponent *wifi_wificomponent_id;
mdns::MDNSComponent *mdns_mdnscomponent_id;
esphome::ESPHomeOTAComponent *esphome_esphomeotacomponent_id;
safe_mode::SafeModeComponent *safe_mode_safemodecomponent_id;
web_server::WebServer *web_server_webserver_id;
const uint8_t ESPHOME_WEBSERVER_INDEX_HTML[174] PROGMEM = {60, 33, 68, 79, 67, 84, 89, 80, 69, 32, 104, 116, 109, 108, 62, 60, 104, 116, 109, 108, 62, 60, 104, 101, 97, 100, 62, 60, 109, 101, 116, 97, 32, 99, 104, 97, 114, 115, 101, 116, 61, 85, 84, 70, 45, 56, 62, 60, 108, 105, 110, 107, 32, 114, 101, 108, 61, 105, 99, 111, 110, 32, 104, 114, 101, 102, 61, 100, 97, 116, 97, 58, 62, 60, 47, 104, 101, 97, 100, 62, 60, 98, 111, 100, 121, 62, 60, 101, 115, 112, 45, 97, 112, 112, 62, 60, 47, 101, 115, 112, 45, 97, 112, 112, 62, 60, 115, 99, 114, 105, 112, 116, 32, 115, 114, 99, 61, 34, 104, 116, 116, 112, 115, 58, 47, 47, 111, 105, 46, 101, 115, 112, 104, 111, 109, 101, 46, 105, 111, 47, 118, 50, 47, 119, 119, 119, 46, 106, 115, 34, 62, 60, 47, 115, 99, 114, 105, 112, 116, 62, 60, 47, 98, 111, 100, 121, 62, 60, 47, 104, 116, 109, 108, 62};
const size_t ESPHOME_WEBSERVER_INDEX_HTML_SIZE = 174;
using namespace json;
preferences::IntervalSyncer *preferences_intervalsyncer_id;
ultrasonic::UltrasonicSensorComponent *sens_livello_acqua;
sensor::SlidingWindowMovingAverageFilter *sensor_slidingwindowmovingaveragefilter_id;
sensor::LambdaFilter *sensor_lambdafilter_id;
sensor::SensorRawStateTrigger *sensor_sensorrawstatetrigger_id;
Automation<float> *automation_id;
template_::TemplateSensor *template_litri_disp;
template_::TemplateSensor *template_perc_riemp;
wifi_info::SSIDWiFiInfo *wifi_info_ssidwifiinfo_id;
wifi_info::BSSIDWiFiInfo *wifi_info_bssidwifiinfo_id;
wifi_info::IPAddressWiFiInfo *wifi_info_ipaddresswifiinfo_id;
template_::TemplateBinarySensor *ultrasonic_liveness;
globals::GlobalsComponent<long> *ultrasonic_last_update;
LambdaAction<float> *lambdaaction_id;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id_2;
#define yield() esphome::yield()
#define millis() esphome::millis()
#define micros() esphome::micros()
#define delay(x) esphome::delay(x)
#define delayMicroseconds(x) esphome::delayMicroseconds(x)
#include "custom_web_server.h"
#include "icons.h"
// ========== AUTO GENERATED INCLUDE BLOCK END ==========="

void setup() {
  // ========== AUTO GENERATED CODE BEGIN ===========
  // async_tcp:
  //   {}
  // esphome:
  //   name: esphome-livello-acqua-cisterna
  //   friendly_name: esphome-livello-acqua-cisterna
  //   includes:
  //   - custom_web_server.h
  //   - icons.h
  //   min_version: 2024.11.1
  //   build_path: build/esphome-livello-acqua-cisterna
  //   area: ''
  //   platformio_options: {}
  //   libraries: []
  //   name_add_mac_suffix: false
  App.pre_setup("esphome-livello-acqua-cisterna", "esphome-livello-acqua-cisterna", "", "", __DATE__ ", " __TIME__, false);
  // sensor:
  // text_sensor:
  // binary_sensor:
  // logger:
  //   id: logger_logger_id
  //   baud_rate: 115200
  //   tx_buffer_size: 512
  //   deassert_rts_dtr: false
  //   hardware_uart: UART0
  //   level: DEBUG
  //   logs: {}
  logger_logger_id = new logger::Logger(115200, 512);
  logger_logger_id->set_uart_selection(logger::UART_SELECTION_UART0);
  logger_logger_id->pre_setup();
  logger_logger_id->set_component_source("logger");
  App.register_component(logger_logger_id);
  // web_server_base:
  //   id: web_server_base_webserverbase_id
  web_server_base_webserverbase_id = new web_server_base::WebServerBase();
  web_server_base_webserverbase_id->set_component_source("web_server_base");
  App.register_component(web_server_base_webserverbase_id);
  // captive_portal:
  //   id: captive_portal_captiveportal_id
  //   web_server_base_id: web_server_base_webserverbase_id
  captive_portal_captiveportal_id = new captive_portal::CaptivePortal(web_server_base_webserverbase_id);
  captive_portal_captiveportal_id->set_component_source("captive_portal");
  App.register_component(captive_portal_captiveportal_id);
  // wifi:
  //   fast_connect: true
  //   manual_ip:
  //     static_ip: 192.168.1.200
  //     gateway: 192.168.1.1
  //     subnet: 255.255.255.0
  //     dns1: 0.0.0.0
  //     dns2: 0.0.0.0
  //   ap:
  //     ssid: LivelloCisterna
  //     password: !secret 'esphome-livello-acqua-cisterna-ap-password'
  //     id: wifi_wifiap_id
  //     ap_timeout: 1min
  //   id: wifi_wificomponent_id
  //   domain: .local
  //   reboot_timeout: 15min
  //   power_save_mode: LIGHT
  //   passive_scan: false
  //   enable_on_boot: true
  //   networks:
  //   - ssid: !secret 'wifi_ssid_casa_alcamo'
  //     password: !secret 'wifi_password_casa_alcamo'
  //     id: wifi_wifiap_id_2
  //     priority: 0.0
  //   use_address: 192.168.1.200
  wifi_wificomponent_id = new wifi::WiFiComponent();
  wifi_wificomponent_id->set_use_address("192.168.1.200");
  {
  wifi::WiFiAP wifi_wifiap_id_2 = wifi::WiFiAP();
  wifi_wifiap_id_2.set_ssid("Wind3 HUB-234621");
  wifi_wifiap_id_2.set_password("0euq333qhrq9kw21");
  wifi_wifiap_id_2.set_manual_ip(wifi::ManualIP{
      .static_ip = network::IPAddress(192, 168, 1, 200),
      .gateway = network::IPAddress(192, 168, 1, 1),
      .subnet = network::IPAddress(255, 255, 255, 0),
      .dns1 = network::IPAddress(0, 0, 0, 0),
      .dns2 = network::IPAddress(0, 0, 0, 0),
  });
  wifi_wifiap_id_2.set_priority(0.0f);
  wifi_wificomponent_id->add_sta(wifi_wifiap_id_2);
  }
  {
  wifi::WiFiAP wifi_wifiap_id = wifi::WiFiAP();
  wifi_wifiap_id.set_ssid("LivelloCisterna");
  wifi_wifiap_id.set_password("kCtaSi9CDN2d");
  wifi_wificomponent_id->set_ap(wifi_wifiap_id);
  }
  wifi_wificomponent_id->set_ap_timeout(60000);
  wifi_wificomponent_id->set_reboot_timeout(900000);
  wifi_wificomponent_id->set_power_save_mode(wifi::WIFI_POWER_SAVE_LIGHT);
  wifi_wificomponent_id->set_fast_connect(true);
  wifi_wificomponent_id->set_passive_scan(false);
  wifi_wificomponent_id->set_enable_on_boot(true);
  wifi_wificomponent_id->set_component_source("wifi");
  App.register_component(wifi_wificomponent_id);
  // mdns:
  //   id: mdns_mdnscomponent_id
  //   disabled: false
  //   services: []
  mdns_mdnscomponent_id = new mdns::MDNSComponent();
  mdns_mdnscomponent_id->set_component_source("mdns");
  App.register_component(mdns_mdnscomponent_id);
  // ota:
  // ota.esphome:
  //   platform: esphome
  //   password: !secret 'esphome-livello-acqua-cisterna-ota-password'
  //   id: esphome_esphomeotacomponent_id
  //   version: 2
  //   port: 3232
  esphome_esphomeotacomponent_id = new esphome::ESPHomeOTAComponent();
  esphome_esphomeotacomponent_id->set_port(3232);
  esphome_esphomeotacomponent_id->set_auth_password("fallback_password");
  esphome_esphomeotacomponent_id->set_component_source("esphome.ota");
  App.register_component(esphome_esphomeotacomponent_id);
  // safe_mode:
  //   id: safe_mode_safemodecomponent_id
  //   boot_is_good_after: 1min
  //   disabled: false
  //   num_attempts: 10
  //   reboot_timeout: 5min
  safe_mode_safemodecomponent_id = new safe_mode::SafeModeComponent();
  safe_mode_safemodecomponent_id->set_component_source("safe_mode");
  App.register_component(safe_mode_safemodecomponent_id);
  if (safe_mode_safemodecomponent_id->should_enter_safe_mode(10, 300000, 60000)) return;
  // web_server:
  //   port: 8080
  //   id: web_server_webserver_id
  //   version: 2
  //   enable_private_network_access: true
  //   web_server_base_id: web_server_base_webserverbase_id
  //   include_internal: false
  //   ota: true
  //   log: true
  //   css_url: ''
  //   js_url: https:oi.esphome.io/v2/www.js
  web_server_webserver_id = new web_server::WebServer(web_server_base_webserverbase_id);
  web_server_webserver_id->set_component_source("web_server");
  App.register_component(web_server_webserver_id);
  web_server_base_webserverbase_id->set_port(8080);
  web_server_webserver_id->set_allow_ota(true);
  web_server_webserver_id->set_expose_log(true);
  web_server_webserver_id->set_include_internal(false);
  // json:
  //   {}
  // esp32:
  //   board: esp32dev
  //   framework:
  //     version: 2.0.5
  //     advanced:
  //       ignore_efuse_custom_mac: false
  //     source: ~3.20005.0
  //     platform_version: platformio/espressif32@5.4.0
  //     type: arduino
  //   flash_size: 4MB
  //   variant: ESP32
  // preferences:
  //   id: preferences_intervalsyncer_id
  //   flash_write_interval: 60s
  preferences_intervalsyncer_id = new preferences::IntervalSyncer();
  preferences_intervalsyncer_id->set_write_interval(60000);
  preferences_intervalsyncer_id->set_component_source("preferences");
  App.register_component(preferences_intervalsyncer_id);
  // sensor.ultrasonic:
  //   platform: ultrasonic
  //   id: sens_livello_acqua
  //   trigger_pin:
  //     number: 25
  //     mode:
  //       output: true
  //       input: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esp32_esp32internalgpiopin_id
  //     inverted: false
  //     ignore_pin_validation_error: false
  //     ignore_strapping_warning: false
  //     drive_strength: 20.0
  //   echo_pin:
  //     number: 14
  //     mode:
  //       input: true
  //       output: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esp32_esp32internalgpiopin_id_2
  //     inverted: false
  //     ignore_pin_validation_error: false
  //     ignore_strapping_warning: false
  //     drive_strength: 20.0
  //   name: Livello Acqua Cisterna
  //   unit_of_measurement: m
  //   accuracy_decimals: 2
  //   update_interval: 1s
  //   timeout: 4.5
  //   filters:
  //   - sliding_window_moving_average:
  //       window_size: 10
  //       send_every: 10
  //       send_first_at: 1
  //     type_id: sensor_slidingwindowmovingaveragefilter_id
  //   - lambda: !lambda "if (x > 4.5) {  \n  return NAN;\n}\nreturn x;"
  //     type_id: sensor_lambdafilter_id
  //   on_raw_value:
  //   - then:
  //     - lambda: !lambda |-
  //         if (x > 0 && x <= 4.5) {
  //           ESP_LOGI("sens_livello_acqua", "Nuovo valore raw. x=%.2f, millis()=%lu", x, millis());
  //           id(ultrasonic_last_update) = millis();
  //         } else {  Valori invalidi
  //           ESP_LOGW("sens_livello_acqua", "Valore non valido: %.2f", x);
  //         }
  //       type_id: lambdaaction_id
  //     automation_id: automation_id
  //     trigger_id: sensor_sensorrawstatetrigger_id
  //   disabled_by_default: false
  //   force_update: false
  //   icon: mdi:arrow-expand-vertical
  //   state_class: measurement
  //   pulse_time: 10us
  sens_livello_acqua = new ultrasonic::UltrasonicSensorComponent();
  App.register_sensor(sens_livello_acqua);
  sens_livello_acqua->set_name("Livello Acqua Cisterna");
  sens_livello_acqua->set_object_id("livello_acqua_cisterna");
  sens_livello_acqua->set_disabled_by_default(false);
  sens_livello_acqua->set_icon("mdi:arrow-expand-vertical");
  sens_livello_acqua->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  sens_livello_acqua->set_unit_of_measurement("m");
  sens_livello_acqua->set_accuracy_decimals(2);
  sens_livello_acqua->set_force_update(false);
  sensor_slidingwindowmovingaveragefilter_id = new sensor::SlidingWindowMovingAverageFilter(10, 10, 1);
  sensor_lambdafilter_id = new sensor::LambdaFilter([=](float x) -> optional<float> {
      #line 70 "/config/esphome-livello-acqua-cisterna.yaml"
      if (x > 4.5) {  
        return NAN;
      }
      return x;
  });
  sens_livello_acqua->set_filters({sensor_slidingwindowmovingaveragefilter_id, sensor_lambdafilter_id});
  sensor_sensorrawstatetrigger_id = new sensor::SensorRawStateTrigger(sens_livello_acqua);
  automation_id = new Automation<float>(sensor_sensorrawstatetrigger_id);
  // sensor.template:
  //   platform: template
  //   id: template_litri_disp
  //   name: Litri Disponibili
  //   unit_of_measurement: L
  //   accuracy_decimals: 1
  //   update_interval: 1s
  //   lambda: !lambda |-
  //     const float larghezza = 3.125;  Larghezza della cisterna in metri
  //     const float lunghezza = 3.743;  Lunghezza della cisterna in metri
  //     const float altezza_massima = 2.51;  Altezza massima della cisterna in m
  //     float altezza_acqua = altezza_massima - id(sens_livello_acqua).state;  Altezza dell'acqua in m
  //     if (altezza_acqua < 0) {
  //       return 0.0;  Evita valori negativi
  //     }
  //   
  //     float litri_disp = (larghezza * lunghezza * altezza_acqua * 1000.0);  Calcolo litri
  //     ESP_LOGI("template_litri_disp", "Litri nella cisterna %.1fL", litri_disp);
  //   
  //     return litri_disp;
  //   disabled_by_default: false
  //   force_update: false
  template_litri_disp = new template_::TemplateSensor();
  App.register_sensor(template_litri_disp);
  template_litri_disp->set_name("Litri Disponibili");
  template_litri_disp->set_object_id("litri_disponibili");
  template_litri_disp->set_disabled_by_default(false);
  template_litri_disp->set_unit_of_measurement("L");
  template_litri_disp->set_accuracy_decimals(1);
  template_litri_disp->set_force_update(false);
  template_litri_disp->set_update_interval(1000);
  template_litri_disp->set_component_source("template.sensor");
  App.register_component(template_litri_disp);
  template_litri_disp->set_template([=]() -> optional<float> {
      #line 91 "/config/esphome-livello-acqua-cisterna.yaml"
      const float larghezza = 3.125;  
      const float lunghezza = 3.743;  
      const float altezza_massima = 2.51;  
      float altezza_acqua = altezza_massima - sens_livello_acqua->state;  
      if (altezza_acqua < 0) {
        return 0.0;  
      }
      
      float litri_disp = (larghezza * lunghezza * altezza_acqua * 1000.0);  
      ESP_LOGI("template_litri_disp", "Litri nella cisterna %.1fL", litri_disp);
      
      return litri_disp;
  });
  // sensor.template:
  //   platform: template
  //   id: template_perc_riemp
  //   name: Percentuale Riempimento
  //   unit_of_measurement: '%'
  //   accuracy_decimals: 2
  //   update_interval: 1s
  //   lambda: !lambda "const float altezza_massima = 2.5;  Altezza massima della cisterna
  //     \ in m\nfloat altezza_acqua = altezza_massima - id(sens_livello_acqua).state; 
  //     \ Altezza dell'acqua in m\n      \nif (altezza_acqua < 0) {\n  return 0.0;  Evita
  //     \ valori negativi\n}\n\nfloat perc_riempimento = (altezza_acqua / altezza_massima)
  //     \ * 100.0;  Calcolo percentuale;\nESP_LOGI(\"template_perc_riemp\", \"Percentuale
  //     \ riempimento della cisterna %.1f\", perc_riempimento);\n\nreturn perc_riempimento;"
  //   disabled_by_default: false
  //   force_update: false
  template_perc_riemp = new template_::TemplateSensor();
  App.register_sensor(template_perc_riemp);
  template_perc_riemp->set_name("Percentuale Riempimento");
  template_perc_riemp->set_object_id("percentuale_riempimento");
  template_perc_riemp->set_disabled_by_default(false);
  template_perc_riemp->set_unit_of_measurement("%");
  template_perc_riemp->set_accuracy_decimals(2);
  template_perc_riemp->set_force_update(false);
  template_perc_riemp->set_update_interval(1000);
  template_perc_riemp->set_component_source("template.sensor");
  App.register_component(template_perc_riemp);
  template_perc_riemp->set_template([=]() -> optional<float> {
      #line 111 "/config/esphome-livello-acqua-cisterna.yaml"
      const float altezza_massima = 2.5;  
      float altezza_acqua = altezza_massima - sens_livello_acqua->state;  
            
      if (altezza_acqua < 0) {
        return 0.0;  
      }
      
      float perc_riempimento = (altezza_acqua / altezza_massima) * 100.0;  
      ESP_LOGI("template_perc_riemp", "Percentuale riempimento della cisterna %.1f", perc_riempimento);
      
      return perc_riempimento;
  });
  // text_sensor.wifi_info:
  //   platform: wifi_info
  //   ip_address:
  //     name: IP Dispositivo ESP32
  //     disabled_by_default: false
  //     id: wifi_info_ipaddresswifiinfo_id
  //     entity_category: diagnostic
  //     update_interval: 1s
  //   ssid:
  //     name: SSID Connesso
  //     disabled_by_default: false
  //     id: wifi_info_ssidwifiinfo_id
  //     entity_category: diagnostic
  //     update_interval: 1s
  //   bssid:
  //     name: BSSID Connesso
  //     disabled_by_default: false
  //     id: wifi_info_bssidwifiinfo_id
  //     entity_category: diagnostic
  //     update_interval: 1s
  wifi_info_ssidwifiinfo_id = new wifi_info::SSIDWiFiInfo();
  App.register_text_sensor(wifi_info_ssidwifiinfo_id);
  wifi_info_ssidwifiinfo_id->set_name("SSID Connesso");
  wifi_info_ssidwifiinfo_id->set_object_id("ssid_connesso");
  wifi_info_ssidwifiinfo_id->set_disabled_by_default(false);
  wifi_info_ssidwifiinfo_id->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  wifi_info_ssidwifiinfo_id->set_update_interval(1000);
  wifi_info_ssidwifiinfo_id->set_component_source("wifi_info.text_sensor");
  App.register_component(wifi_info_ssidwifiinfo_id);
  wifi_info_bssidwifiinfo_id = new wifi_info::BSSIDWiFiInfo();
  App.register_text_sensor(wifi_info_bssidwifiinfo_id);
  wifi_info_bssidwifiinfo_id->set_name("BSSID Connesso");
  wifi_info_bssidwifiinfo_id->set_object_id("bssid_connesso");
  wifi_info_bssidwifiinfo_id->set_disabled_by_default(false);
  wifi_info_bssidwifiinfo_id->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  wifi_info_bssidwifiinfo_id->set_update_interval(1000);
  wifi_info_bssidwifiinfo_id->set_component_source("wifi_info.text_sensor");
  App.register_component(wifi_info_bssidwifiinfo_id);
  wifi_info_ipaddresswifiinfo_id = new wifi_info::IPAddressWiFiInfo();
  App.register_text_sensor(wifi_info_ipaddresswifiinfo_id);
  wifi_info_ipaddresswifiinfo_id->set_name("IP Dispositivo ESP32");
  wifi_info_ipaddresswifiinfo_id->set_object_id("ip_dispositivo_esp32");
  wifi_info_ipaddresswifiinfo_id->set_disabled_by_default(false);
  wifi_info_ipaddresswifiinfo_id->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  wifi_info_ipaddresswifiinfo_id->set_update_interval(1000);
  wifi_info_ipaddresswifiinfo_id->set_component_source("wifi_info.text_sensor");
  App.register_component(wifi_info_ipaddresswifiinfo_id);
  // custom_component:
  //   lambda: !lambda |-
  //     auto web_server = new CustomWebServer();
  //     App.register_component(web_server);
  //     return {};
  //   id: custom_component_customcomponentconstructor_id
  custom_component::CustomComponentConstructor custom_component_customcomponentconstructor_id = custom_component::CustomComponentConstructor([=]() -> std::vector<Component *> {
      #line 136 "/config/esphome-livello-acqua-cisterna.yaml"
      auto web_server = new CustomWebServer();
      App.register_component(web_server);
      return {};
  });
  // binary_sensor.template:
  //   platform: template
  //   id: ultrasonic_liveness
  //   name: Liveness sensore ultrasuoni
  //   lambda: !lambda " Se ultrasonic_last_update non è mai stato aggiornato, il sensore
  //     \ è \"Disconnesso\"\nif (id(ultrasonic_last_update) == 0) {\n  return false;  
  //     \ Stato iniziale disconnesso\n}    \n Il sensore è attivo se ha fornito un valore
  //     \ negli ultimi 2 secondi\nreturn (millis() - id(ultrasonic_last_update)) < 2000;"
  //   device_class: connectivity
  //   disabled_by_default: false
  ultrasonic_liveness = new template_::TemplateBinarySensor();
  App.register_binary_sensor(ultrasonic_liveness);
  ultrasonic_liveness->set_name("Liveness sensore ultrasuoni");
  ultrasonic_liveness->set_object_id("liveness_sensore_ultrasuoni");
  ultrasonic_liveness->set_disabled_by_default(false);
  ultrasonic_liveness->set_device_class("connectivity");
  ultrasonic_liveness->set_component_source("template.binary_sensor");
  App.register_component(ultrasonic_liveness);
  // network:
  //   enable_ipv6: false
  //   min_ipv6_addr_count: 0
  // md5:
  // socket:
  //   implementation: bsd_sockets
  // globals:
  //   id: ultrasonic_last_update
  //   type: long
  //   restore_value: false
  //   initial_value: '0'
  ultrasonic_last_update = new globals::GlobalsComponent<long>(0);
  ultrasonic_last_update->set_component_source("globals");
  App.register_component(ultrasonic_last_update);
  lambdaaction_id = new LambdaAction<float>([=](float x) -> void {
      #line 77 "/config/esphome-livello-acqua-cisterna.yaml"
      if (x > 0 && x <= 4.5) {
        ESP_LOGI("sens_livello_acqua", "Nuovo valore raw. x=%.2f, millis()=%lu", x, millis());
        ultrasonic_last_update->value() = millis();
      } else {  
        ESP_LOGW("sens_livello_acqua", "Valore non valido: %.2f", x);
      }
  });
  automation_id->add_actions({lambdaaction_id});
  sens_livello_acqua->set_update_interval(1000);
  sens_livello_acqua->set_component_source("ultrasonic.sensor");
  App.register_component(sens_livello_acqua);
  esp32_esp32internalgpiopin_id = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id->set_pin(::GPIO_NUM_25);
  esp32_esp32internalgpiopin_id->set_inverted(false);
  esp32_esp32internalgpiopin_id->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id->set_flags(gpio::Flags::FLAG_OUTPUT);
  sens_livello_acqua->set_trigger_pin(esp32_esp32internalgpiopin_id);
  esp32_esp32internalgpiopin_id_2 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id_2->set_pin(::GPIO_NUM_14);
  esp32_esp32internalgpiopin_id_2->set_inverted(false);
  esp32_esp32internalgpiopin_id_2->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id_2->set_flags(gpio::Flags::FLAG_INPUT);
  sens_livello_acqua->set_echo_pin(esp32_esp32internalgpiopin_id_2);
  sens_livello_acqua->set_timeout_us(26239.067055393585f);
  sens_livello_acqua->set_pulse_time_us(10);
  ultrasonic_liveness->set_template([=]() -> optional<bool> {
      #line 145 "/config/esphome-livello-acqua-cisterna.yaml"
       
      if (ultrasonic_last_update->value() == 0) {
        return false;   
      }    
       
      return (millis() - ultrasonic_last_update->value()) < 2000;
  });
  // =========== AUTO GENERATED CODE END ============
  App.setup();
}

void loop() {
  App.loop();
}
