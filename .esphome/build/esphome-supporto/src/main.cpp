// Auto generated code by esphome
// ========== AUTO GENERATED INCLUDE BLOCK BEGIN ===========
#include "esphome.h"
using namespace esphome;
using std::isnan;
using std::min;
using std::max;
logger::Logger *logger_logger;
web_server_base::WebServerBase *web_server_base_webserverbase;
captive_portal::CaptivePortal *captive_portal_captiveportal;
wifi::WiFiComponent *wifi_wificomponent;
mdns::MDNSComponent *mdns_mdnscomponent;
ota::OTAComponent *ota_otacomponent;
api::APIServer *api_apiserver;
using namespace api;
web_server::WebServer *web_server_webserver;
const uint8_t ESPHOME_WEBSERVER_INDEX_HTML[174] PROGMEM = {60, 33, 68, 79, 67, 84, 89, 80, 69, 32, 104, 116, 109, 108, 62, 60, 104, 116, 109, 108, 62, 60, 104, 101, 97, 100, 62, 60, 109, 101, 116, 97, 32, 99, 104, 97, 114, 115, 101, 116, 61, 85, 84, 70, 45, 56, 62, 60, 108, 105, 110, 107, 32, 114, 101, 108, 61, 105, 99, 111, 110, 32, 104, 114, 101, 102, 61, 100, 97, 116, 97, 58, 62, 60, 47, 104, 101, 97, 100, 62, 60, 98, 111, 100, 121, 62, 60, 101, 115, 112, 45, 97, 112, 112, 62, 60, 47, 101, 115, 112, 45, 97, 112, 112, 62, 60, 115, 99, 114, 105, 112, 116, 32, 115, 114, 99, 61, 34, 104, 116, 116, 112, 115, 58, 47, 47, 111, 105, 46, 101, 115, 112, 104, 111, 109, 101, 46, 105, 111, 47, 118, 50, 47, 119, 119, 119, 46, 106, 115, 34, 62, 60, 47, 115, 99, 114, 105, 112, 116, 62, 60, 47, 98, 111, 100, 121, 62, 60, 47, 104, 116, 109, 108, 62};
const size_t ESPHOME_WEBSERVER_INDEX_HTML_SIZE = 174;
using namespace json;
preferences::IntervalSyncer *preferences_intervalsyncer;
using namespace uart;
uart::ESP32ArduinoUARTComponent *uart_esp32arduinouartcomponent;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_2;
uart::UARTDebugger *uart_uartdebugger;
Automation<uart::UARTDirection, std::vector<uint8_t>> *automation;
LambdaAction<uart::UARTDirection, std::vector<uint8_t>> *lambdaaction;
#define yield() esphome::yield()
#define millis() esphome::millis()
#define micros() esphome::micros()
#define delay(x) esphome::delay(x)
#define delayMicroseconds(x) esphome::delayMicroseconds(x)
// ========== AUTO GENERATED INCLUDE BLOCK END ==========="

void setup() {
  // ========== AUTO GENERATED CODE BEGIN ===========
  // async_tcp:
  //   {}
  // esphome:
  //   name: esphome-supporto
  //   friendly_name: esphome-sperimentazione-supporto
  //   build_path: build/esphome-supporto
  //   area: ''
  //   platformio_options: {}
  //   includes: []
  //   libraries: []
  //   name_add_mac_suffix: false
  //   min_version: 2024.2.0
  App.pre_setup("esphome-supporto", "esphome-sperimentazione-supporto", "", "", __DATE__ ", " __TIME__, false);
  // logger:
  //   level: DEBUG
  //   id: logger_logger
  //   baud_rate: 115200
  //   tx_buffer_size: 512
  //   deassert_rts_dtr: false
  //   hardware_uart: UART0
  //   logs: {}
  logger_logger = new logger::Logger(115200, 512);
  logger_logger->set_uart_selection(logger::UART_SELECTION_UART0);
  logger_logger->pre_setup();
  logger_logger->set_component_source("logger");
  App.register_component(logger_logger);
  // web_server_base:
  //   id: web_server_base_webserverbase
  web_server_base_webserverbase = new web_server_base::WebServerBase();
  web_server_base_webserverbase->set_component_source("web_server_base");
  App.register_component(web_server_base_webserverbase);
  // captive_portal:
  //   id: captive_portal_captiveportal
  //   web_server_base_id: web_server_base_webserverbase
  captive_portal_captiveportal = new captive_portal::CaptivePortal(web_server_base_webserverbase);
  captive_portal_captiveportal->set_component_source("captive_portal");
  App.register_component(captive_portal_captiveportal);
  // wifi:
  //   fast_connect: true
  //   manual_ip:
  //     static_ip: 10.4.1.105
  //     gateway: 10.4.1.254
  //     subnet: 255.255.255.0
  //     dns1: 0.0.0.0
  //     dns2: 0.0.0.0
  //   ap:
  //     ssid: Esphome-Sperimentazione-Supporto
  //     password: zjc4CdVxjrnY
  //     id: wifi_wifiap
  //     ap_timeout: 1min
  //   id: wifi_wificomponent
  //   domain: .local
  //   reboot_timeout: 15min
  //   power_save_mode: LIGHT
  //   passive_scan: false
  //   enable_on_boot: true
  //   networks:
  //   - ssid: !secret 'wifi_ssid'
  //     password: !secret 'wifi_password'
  //     id: wifi_wifiap_2
  //     priority: 0.0
  //   use_address: 10.4.1.105
  wifi_wificomponent = new wifi::WiFiComponent();
  wifi_wificomponent->set_use_address("10.4.1.105");
  {
  wifi::WiFiAP wifi_wifiap_2 = wifi::WiFiAP();
  wifi_wifiap_2.set_ssid("HouseOfTheEagle2");
  wifi_wifiap_2.set_password("marmellata1949");
  wifi_wifiap_2.set_manual_ip(wifi::ManualIP{
      .static_ip = network::IPAddress(10, 4, 1, 105),
      .gateway = network::IPAddress(10, 4, 1, 254),
      .subnet = network::IPAddress(255, 255, 255, 0),
      .dns1 = network::IPAddress(0, 0, 0, 0),
      .dns2 = network::IPAddress(0, 0, 0, 0),
  });
  wifi_wifiap_2.set_priority(0.0f);
  wifi_wificomponent->add_sta(wifi_wifiap_2);
  }
  {
  wifi::WiFiAP wifi_wifiap = wifi::WiFiAP();
  wifi_wifiap.set_ssid("Esphome-Sperimentazione-Supporto");
  wifi_wifiap.set_password("zjc4CdVxjrnY");
  wifi_wificomponent->set_ap(wifi_wifiap);
  }
  wifi_wificomponent->set_ap_timeout(60000);
  wifi_wificomponent->set_reboot_timeout(900000);
  wifi_wificomponent->set_power_save_mode(wifi::WIFI_POWER_SAVE_LIGHT);
  wifi_wificomponent->set_fast_connect(true);
  wifi_wificomponent->set_passive_scan(false);
  wifi_wificomponent->set_enable_on_boot(true);
  wifi_wificomponent->set_component_source("wifi");
  App.register_component(wifi_wificomponent);
  // mdns:
  //   id: mdns_mdnscomponent
  //   disabled: false
  //   services: []
  mdns_mdnscomponent = new mdns::MDNSComponent();
  mdns_mdnscomponent->set_component_source("mdns");
  App.register_component(mdns_mdnscomponent);
  // ota:
  //   password: ef819deb2ccceeece7941440875fa308
  //   id: ota_otacomponent
  //   safe_mode: true
  //   version: 2
  //   port: 3232
  //   reboot_timeout: 5min
  //   num_attempts: 10
  ota_otacomponent = new ota::OTAComponent();
  ota_otacomponent->set_port(3232);
  ota_otacomponent->set_auth_password("ef819deb2ccceeece7941440875fa308");
  ota_otacomponent->set_component_source("ota");
  App.register_component(ota_otacomponent);
  if (ota_otacomponent->should_enter_safe_mode(10, 300000)) return;
  // api:
  //   encryption:
  //     key: jgJM5SiP6cBxQCJR0iKcJcFiUnHjt7Og8KMoidW/YuA=
  //   id: api_apiserver
  //   port: 6053
  //   password: ''
  //   reboot_timeout: 15min
  api_apiserver = new api::APIServer();
  api_apiserver->set_component_source("api");
  App.register_component(api_apiserver);
  api_apiserver->set_port(6053);
  api_apiserver->set_password("");
  api_apiserver->set_reboot_timeout(900000);
  api_apiserver->set_noise_psk({142, 2, 76, 229, 40, 143, 233, 192, 113, 64, 34, 81, 210, 34, 156, 37, 193, 98, 82, 113, 227, 183, 179, 160, 240, 163, 40, 137, 213, 191, 98, 224});
  // web_server:
  //   port: 80
  //   local: true
  //   id: web_server_webserver
  //   version: 2
  //   enable_private_network_access: true
  //   web_server_base_id: web_server_base_webserverbase
  //   include_internal: false
  //   ota: true
  //   log: true
  //   css_url: ''
  //   js_url: https:oi.esphome.io/v2/www.js
  web_server_webserver = new web_server::WebServer(web_server_base_webserverbase);
  web_server_webserver->set_component_source("web_server");
  App.register_component(web_server_webserver);
  web_server_base_webserverbase->set_port(80);
  web_server_webserver->set_allow_ota(true);
  web_server_webserver->set_expose_log(true);
  web_server_webserver->set_include_internal(false);
  // json:
  //   {}
  // esp32:
  //   board: esp32dev
  //   framework:
  //     version: 2.0.5
  //     source: ~3.20005.0
  //     platform_version: platformio/espressif32@5.4.0
  //     type: arduino
  //   flash_size: 4MB
  //   variant: ESP32
  // preferences:
  //   id: preferences_intervalsyncer
  //   flash_write_interval: 60s
  preferences_intervalsyncer = new preferences::IntervalSyncer();
  preferences_intervalsyncer->set_write_interval(60000);
  preferences_intervalsyncer->set_component_source("preferences");
  App.register_component(preferences_intervalsyncer);
  // uart:
  //   tx_pin:
  //     number: 17
  //     mode:
  //       output: true
  //       input: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esp32_esp32internalgpiopin
  //     inverted: false
  //     ignore_strapping_warning: false
  //     drive_strength: 20.0
  //   rx_pin:
  //     number: 16
  //     mode:
  //       input: true
  //       output: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esp32_esp32internalgpiopin_2
  //     inverted: false
  //     ignore_strapping_warning: false
  //     drive_strength: 20.0
  //   baud_rate: 115200
  //   debug:
  //     direction: RX
  //     dummy_receiver: false
  //     sequence:
  //     - then:
  //       - lambda: !lambda |-
  //           UARTDebug::log_string(direction, bytes);
  //         type_id: lambdaaction
  //       trigger_id: trigger
  //       automation_id: automation
  //     trigger_id: uart_uartdebugger
  //     after:
  //       bytes: 150
  //       timeout: 100ms
  //     dummy_receiver_id: uart_uartdummyreceiver
  //   id: uart_esp32arduinouartcomponent
  //   rx_buffer_size: 256
  //   stop_bits: 1
  //   data_bits: 8
  //   parity: NONE
  uart_esp32arduinouartcomponent = new uart::ESP32ArduinoUARTComponent();
  uart_esp32arduinouartcomponent->set_component_source("uart");
  App.register_component(uart_esp32arduinouartcomponent);
  uart_esp32arduinouartcomponent->set_baud_rate(115200);
  esp32_esp32internalgpiopin = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin->set_pin(::GPIO_NUM_17);
  esp32_esp32internalgpiopin->set_inverted(false);
  esp32_esp32internalgpiopin->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin->set_flags(gpio::Flags::FLAG_OUTPUT);
  uart_esp32arduinouartcomponent->set_tx_pin(esp32_esp32internalgpiopin);
  esp32_esp32internalgpiopin_2 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_2->set_pin(::GPIO_NUM_16);
  esp32_esp32internalgpiopin_2->set_inverted(false);
  esp32_esp32internalgpiopin_2->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_2->set_flags(gpio::Flags::FLAG_INPUT);
  uart_esp32arduinouartcomponent->set_rx_pin(esp32_esp32internalgpiopin_2);
  uart_esp32arduinouartcomponent->set_rx_buffer_size(256);
  uart_esp32arduinouartcomponent->set_stop_bits(1);
  uart_esp32arduinouartcomponent->set_data_bits(8);
  uart_esp32arduinouartcomponent->set_parity(uart::UART_CONFIG_PARITY_NONE);
  uart_uartdebugger = new uart::UARTDebugger(uart_esp32arduinouartcomponent);
  uart_uartdebugger->set_component_source("uart");
  App.register_component(uart_uartdebugger);
  automation = new Automation<uart::UARTDirection, std::vector<uint8_t>>(uart_uartdebugger);
  lambdaaction = new LambdaAction<uart::UARTDirection, std::vector<uint8_t>>([=](uart::UARTDirection direction, std::vector<uint8_t> bytes) -> void {
      #line 23 "/config/esphome-sperimentazione-supporto.yaml"
      UARTDebug::log_string(direction, bytes);
  });
  automation->add_actions({lambdaaction});
  uart_uartdebugger->set_direction(uart::UART_DIRECTION_RX);
  uart_uartdebugger->set_after_bytes(150);
  uart_uartdebugger->set_after_timeout(100);
  // socket:
  //   implementation: bsd_sockets
  // network:
  //   enable_ipv6: false
  // =========== AUTO GENERATED CODE END ============
  App.setup();
}

void loop() {
  App.loop();
}
