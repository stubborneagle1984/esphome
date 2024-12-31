// Auto generated code by esphome
// ========== AUTO GENERATED INCLUDE BLOCK BEGIN ===========
#include "esphome.h"
using namespace esphome;
using std::isnan;
using std::min;
using std::max;
using namespace text_sensor;
using namespace switch_;
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
using namespace sensor;
using namespace json;
preferences::IntervalSyncer *preferences_intervalsyncer;
wifi_info::MacAddressWifiInfo *wifi_info_macaddresswifiinfo;
gpio::GPIOSwitch *living_room_dehumidifier;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin;
wifi_signal::WiFiSignalSensor *wifi_signal_db;
copy::CopySensor *copy_copysensor;
sensor::LambdaFilter *sensor_lambdafilter;
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
  //   name: esphome-finestra-roto
  //   friendly_name: esphome-finestra-roto
  //   build_path: build/esphome-finestra-roto
  //   area: ''
  //   platformio_options: {}
  //   includes: []
  //   libraries: []
  //   name_add_mac_suffix: false
  //   min_version: 2024.2.0
  App.pre_setup("esphome-finestra-roto", "esphome-finestra-roto", "", "", __DATE__ ", " __TIME__, false);
  // text_sensor:
  // switch:
  // logger:
  //   id: logger_logger
  //   baud_rate: 115200
  //   tx_buffer_size: 512
  //   deassert_rts_dtr: false
  //   hardware_uart: UART0
  //   level: DEBUG
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
  //   domain: ''
  //   manual_ip:
  //     static_ip: 10.4.1.146
  //     gateway: 10.4.1.254
  //     subnet: 255.255.255.0
  //     dns1: 0.0.0.0
  //     dns2: 0.0.0.0
  //   ap:
  //     ssid: Esphome-Web-Cf8Bac
  //     password: 3wokizp4D55Q
  //     id: wifi_wifiap
  //     ap_timeout: 1min
  //   id: wifi_wificomponent
  //   reboot_timeout: 15min
  //   power_save_mode: LIGHT
  //   fast_connect: false
  //   passive_scan: false
  //   enable_on_boot: true
  //   networks:
  //   - ssid: !secret 'wifi_ssid'
  //     password: !secret 'wifi_password'
  //     id: wifi_wifiap_2
  //     priority: 0.0
  //   use_address: 10.4.1.146
  wifi_wificomponent = new wifi::WiFiComponent();
  wifi_wificomponent->set_use_address("10.4.1.146");
  {
  wifi::WiFiAP wifi_wifiap_2 = wifi::WiFiAP();
  wifi_wifiap_2.set_ssid("HouseOfTheEagle2");
  wifi_wifiap_2.set_password("marmellata1949");
  wifi_wifiap_2.set_manual_ip(wifi::ManualIP{
      .static_ip = network::IPAddress(10, 4, 1, 146),
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
  wifi_wifiap.set_ssid("Esphome-Web-Cf8Bac");
  wifi_wifiap.set_password("3wokizp4D55Q");
  wifi_wificomponent->set_ap(wifi_wifiap);
  }
  wifi_wificomponent->set_ap_timeout(60000);
  wifi_wificomponent->set_reboot_timeout(900000);
  wifi_wificomponent->set_power_save_mode(wifi::WIFI_POWER_SAVE_LIGHT);
  wifi_wificomponent->set_fast_connect(false);
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
  //   id: ota_otacomponent
  //   safe_mode: true
  //   version: 2
  //   port: 3232
  //   reboot_timeout: 5min
  //   num_attempts: 10
  ota_otacomponent = new ota::OTAComponent();
  ota_otacomponent->set_port(3232);
  ota_otacomponent->set_component_source("ota");
  App.register_component(ota_otacomponent);
  if (ota_otacomponent->should_enter_safe_mode(10, 300000)) return;
  // api:
  //   encryption:
  //     key: Fp7AfYARyQbm9Do8XAGkfSebw0NwBTqBsEhAYLjDjZg=
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
  api_apiserver->set_noise_psk({22, 158, 192, 125, 128, 17, 201, 6, 230, 244, 58, 60, 92, 1, 164, 125, 39, 155, 195, 67, 112, 5, 58, 129, 176, 72, 64, 96, 184, 195, 141, 152});
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
  // sensor:
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
  // text_sensor.wifi_info:
  //   platform: wifi_info
  //   mac_address:
  //     name: ESP Mac Wifi Address
  //     disabled_by_default: false
  //     id: wifi_info_macaddresswifiinfo
  //     entity_category: diagnostic
  wifi_info_macaddresswifiinfo = new wifi_info::MacAddressWifiInfo();
  App.register_text_sensor(wifi_info_macaddresswifiinfo);
  wifi_info_macaddresswifiinfo->set_name("ESP Mac Wifi Address");
  wifi_info_macaddresswifiinfo->set_object_id("esp_mac_wifi_address");
  wifi_info_macaddresswifiinfo->set_disabled_by_default(false);
  wifi_info_macaddresswifiinfo->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  wifi_info_macaddresswifiinfo->set_component_source("wifi_info.text_sensor");
  App.register_component(wifi_info_macaddresswifiinfo);
  // switch.gpio:
  //   platform: gpio
  //   name: Living Room Dehumidifier
  //   pin:
  //     number: 5
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
  //   id: living_room_dehumidifier
  //   disabled_by_default: false
  //   restore_mode: ALWAYS_OFF
  //   interlock_wait_time: 0ms
  living_room_dehumidifier = new gpio::GPIOSwitch();
  App.register_switch(living_room_dehumidifier);
  living_room_dehumidifier->set_name("Living Room Dehumidifier");
  living_room_dehumidifier->set_object_id("living_room_dehumidifier");
  living_room_dehumidifier->set_disabled_by_default(false);
  living_room_dehumidifier->set_restore_mode(switch_::SWITCH_ALWAYS_OFF);
  living_room_dehumidifier->set_component_source("gpio.switch");
  App.register_component(living_room_dehumidifier);
  esp32_esp32internalgpiopin = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin->set_pin(::GPIO_NUM_5);
  esp32_esp32internalgpiopin->set_inverted(false);
  esp32_esp32internalgpiopin->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin->set_flags(gpio::Flags::FLAG_OUTPUT);
  living_room_dehumidifier->set_pin(esp32_esp32internalgpiopin);
  // sensor.wifi_signal:
  //   platform: wifi_signal
  //   name: WiFi Signal dB
  //   id: wifi_signal_db
  //   update_interval: 60s
  //   entity_category: diagnostic
  //   disabled_by_default: false
  //   force_update: false
  //   unit_of_measurement: dBm
  //   accuracy_decimals: 0
  //   device_class: signal_strength
  //   state_class: measurement
  wifi_signal_db = new wifi_signal::WiFiSignalSensor();
  App.register_sensor(wifi_signal_db);
  wifi_signal_db->set_name("WiFi Signal dB");
  wifi_signal_db->set_object_id("wifi_signal_db");
  wifi_signal_db->set_disabled_by_default(false);
  wifi_signal_db->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  wifi_signal_db->set_device_class("signal_strength");
  wifi_signal_db->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  wifi_signal_db->set_unit_of_measurement("dBm");
  wifi_signal_db->set_accuracy_decimals(0);
  wifi_signal_db->set_force_update(false);
  wifi_signal_db->set_update_interval(60000);
  wifi_signal_db->set_component_source("wifi_signal.sensor");
  App.register_component(wifi_signal_db);
  // sensor.copy:
  //   platform: copy
  //   source_id: wifi_signal_db
  //   name: WiFi Signal Percent
  //   filters:
  //   - lambda: !lambda |-
  //       return min(max(2 * (x + 100.0), 0.0), 100.0);
  //     type_id: sensor_lambdafilter
  //   unit_of_measurement: Signal %
  //   entity_category: diagnostic
  //   device_class: ''
  //   disabled_by_default: false
  //   force_update: false
  //   id: copy_copysensor
  //   accuracy_decimals: 0
  //   state_class: measurement
  copy_copysensor = new copy::CopySensor();
  App.register_sensor(copy_copysensor);
  copy_copysensor->set_name("WiFi Signal Percent");
  copy_copysensor->set_object_id("wifi_signal_percent");
  copy_copysensor->set_disabled_by_default(false);
  copy_copysensor->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  copy_copysensor->set_device_class("");
  copy_copysensor->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  copy_copysensor->set_unit_of_measurement("Signal %");
  copy_copysensor->set_accuracy_decimals(0);
  copy_copysensor->set_force_update(false);
  sensor_lambdafilter = new sensor::LambdaFilter([=](float x) -> optional<float> {
      #line 65 "/config/esphome-finestra-roto.yaml"
      return min(max(2 * (x + 100.0), 0.0), 100.0);
  });
  copy_copysensor->set_filters({sensor_lambdafilter});
  copy_copysensor->set_component_source("copy.sensor");
  App.register_component(copy_copysensor);
  copy_copysensor->set_source(wifi_signal_db);
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
