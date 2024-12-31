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
esp32_camera::ESP32Camera *esp32_camera_esp32camera;
psram::PsramComponent *psram_psramcomponent;
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
  //   name: esphome-camera
  //   friendly_name: esphome-camera
  //   build_path: build/esphome-camera
  //   area: ''
  //   platformio_options: {}
  //   includes: []
  //   libraries: []
  //   name_add_mac_suffix: false
  //   min_version: 2024.2.0
  App.pre_setup("esphome-camera", "esphome-camera", "", "", __DATE__ ", " __TIME__, false);
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
  //     static_ip: 10.4.1.123
  //     gateway: 10.4.1.254
  //     subnet: 255.255.255.0
  //     dns1: 0.0.0.0
  //     dns2: 0.0.0.0
  //   ap:
  //     ssid: Esphome-Camera Fallback Hotspot
  //     password: OSRPFoEtRwq8
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
  //   use_address: 10.4.1.123
  wifi_wificomponent = new wifi::WiFiComponent();
  wifi_wificomponent->set_use_address("10.4.1.123");
  {
  wifi::WiFiAP wifi_wifiap_2 = wifi::WiFiAP();
  wifi_wifiap_2.set_ssid("HouseOfTheEagle2");
  wifi_wifiap_2.set_password("marmellata1949");
  wifi_wifiap_2.set_manual_ip(wifi::ManualIP{
      .static_ip = network::IPAddress(10, 4, 1, 123),
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
  wifi_wifiap.set_ssid("Esphome-Camera Fallback Hotspot");
  wifi_wifiap.set_password("OSRPFoEtRwq8");
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
  //   password: 745540f076d1d9a23c3071100dba5735
  //   id: ota_otacomponent
  //   safe_mode: true
  //   version: 2
  //   port: 3232
  //   reboot_timeout: 5min
  //   num_attempts: 10
  ota_otacomponent = new ota::OTAComponent();
  ota_otacomponent->set_port(3232);
  ota_otacomponent->set_auth_password("745540f076d1d9a23c3071100dba5735");
  ota_otacomponent->set_component_source("ota");
  App.register_component(ota_otacomponent);
  if (ota_otacomponent->should_enter_safe_mode(10, 300000)) return;
  // api:
  //   encryption:
  //     key: Z5aFgCIl3wR0Z/Bju8Jwk82gijZZCfOf+R0lSHY6ClQ=
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
  api_apiserver->set_noise_psk({103, 150, 133, 128, 34, 37, 223, 4, 116, 103, 240, 99, 187, 194, 112, 147, 205, 160, 138, 54, 89, 9, 243, 159, 249, 29, 37, 72, 118, 58, 10, 84});
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
  // esp32_camera:
  //   name: camera2
  //   external_clock:
  //     pin: 0
  //     frequency: 20000000.0
  //   i2c_pins:
  //     sda: 26
  //     scl: 27
  //   data_pins:
  //   - 5
  //   - 18
  //   - 19
  //   - 21
  //   - 36
  //   - 39
  //   - 34
  //   - 35
  //   vsync_pin: 25
  //   href_pin: 23
  //   pixel_clock_pin: 22
  //   power_down_pin: 32
  //   max_framerate: 24.0
  //   disabled_by_default: false
  //   id: esp32_camera_esp32camera
  //   resolution: 640X480
  //   jpeg_quality: 10
  //   contrast: 0
  //   brightness: 0
  //   saturation: 0
  //   vertical_flip: true
  //   horizontal_mirror: true
  //   special_effect: NONE
  //   agc_mode: AUTO
  //   aec2: false
  //   ae_level: 0
  //   aec_value: 300
  //   aec_mode: AUTO
  //   agc_value: 0
  //   agc_gain_ceiling: 2X
  //   wb_mode: AUTO
  //   test_pattern: false
  //   idle_framerate: 0.1
  esp32_camera_esp32camera = new esp32_camera::ESP32Camera();
  esp32_camera_esp32camera->set_name("camera2");
  esp32_camera_esp32camera->set_object_id("camera2");
  esp32_camera_esp32camera->set_disabled_by_default(false);
  esp32_camera_esp32camera->set_component_source("esp32_camera");
  App.register_component(esp32_camera_esp32camera);
  esp32_camera_esp32camera->set_data_pins({5, 18, 19, 21, 36, 39, 34, 35});
  esp32_camera_esp32camera->set_vsync_pin(25);
  esp32_camera_esp32camera->set_href_pin(23);
  esp32_camera_esp32camera->set_pixel_clock_pin(22);
  esp32_camera_esp32camera->set_power_down_pin(32);
  esp32_camera_esp32camera->set_jpeg_quality(10);
  esp32_camera_esp32camera->set_vertical_flip(true);
  esp32_camera_esp32camera->set_horizontal_mirror(true);
  esp32_camera_esp32camera->set_contrast(0);
  esp32_camera_esp32camera->set_brightness(0);
  esp32_camera_esp32camera->set_saturation(0);
  esp32_camera_esp32camera->set_special_effect(esp32_camera::ESP32_SPECIAL_EFFECT_NONE);
  esp32_camera_esp32camera->set_aec_mode(esp32_camera::ESP32_GC_MODE_AUTO);
  esp32_camera_esp32camera->set_aec2(false);
  esp32_camera_esp32camera->set_ae_level(0);
  esp32_camera_esp32camera->set_aec_value(300);
  esp32_camera_esp32camera->set_agc_mode(esp32_camera::ESP32_GC_MODE_AUTO);
  esp32_camera_esp32camera->set_agc_value(0);
  esp32_camera_esp32camera->set_agc_gain_ceiling(esp32_camera::ESP32_GAINCEILING_2X);
  esp32_camera_esp32camera->set_wb_mode(esp32_camera::ESP32_WB_MODE_AUTO);
  esp32_camera_esp32camera->set_test_pattern(false);
  esp32_camera_esp32camera->set_external_clock(0, 20000000.0f);
  esp32_camera_esp32camera->set_i2c_pins(26, 27);
  esp32_camera_esp32camera->set_max_update_interval(41.666666666666664f);
  esp32_camera_esp32camera->set_idle_update_interval(10000.0f);
  esp32_camera_esp32camera->set_frame_size(esp32_camera::ESP32_CAMERA_SIZE_640X480);
  // socket:
  //   implementation: bsd_sockets
  // network:
  //   enable_ipv6: false
  // psram:
  //   id: psram_psramcomponent
  psram_psramcomponent = new psram::PsramComponent();
  psram_psramcomponent->set_component_source("psram");
  App.register_component(psram_psramcomponent);
  // =========== AUTO GENERATED CODE END ============
  App.setup();
}

void loop() {
  App.loop();
}
