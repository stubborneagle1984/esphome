// Auto generated code by esphome
// ========== AUTO GENERATED INCLUDE BLOCK BEGIN ===========
#include "esphome.h"
using namespace esphome;
using std::isnan;
using std::min;
using std::max;
using namespace text_sensor;
using namespace sensor;
using namespace fan;
using namespace cover;
logger::Logger *logger_logger_id;
web_server_base::WebServerBase *web_server_base_webserverbase_id;
captive_portal::CaptivePortal *captive_portal_captiveportal_id;
wifi::WiFiComponent *wifi_wificomponent_id;
mdns::MDNSComponent *mdns_mdnscomponent_id;
esphome::ESPHomeOTAComponent *esphome_esphomeotacomponent_id;
safe_mode::SafeModeComponent *safe_mode_safemodecomponent_id;
api::APIServer *api_apiserver_id;
using namespace api;
using namespace i2c;
i2c::ArduinoI2CBus *i2c_bus;
preferences::IntervalSyncer *preferences_intervalsyncer_id;
debug::DebugComponent *debug_debugcomponent_id;
text_sensor::TextSensor *text_sensor_textsensor_id;
text_sensor::TextSensor *text_sensor_textsensor_id_2;
interval::IntervalTrigger *interval_intervaltrigger_id;
Automation<> *automation_id;
sensor::Sensor *sensor_sensor_id;
sensor::Sensor *sensor_sensor_id_2;
sensor::Sensor *sensor_sensor_id_3;
wifi_signal::WiFiSignalSensor *wifi_signal_db;
copy::CopySensor *copy_copysensor_id;
sensor::LambdaFilter *sensor_lambdafilter_id;
mpu6050::MPU6050Component *mpu6050_xyz;
sensor::Sensor *accel_x;
sensor::OffsetFilter *sensor_offsetfilter_id;
sensor::Sensor *accel_y;
sensor::OffsetFilter *sensor_offsetfilter_id_2;
sensor::Sensor *accel_z;
sensor::OffsetFilter *sensor_offsetfilter_id_3;
template_::TemplateSensor *pitch;
sensor::ValueRangeTrigger *sensor_valuerangetrigger_id;
Automation<float> *automation_id_2;
ina219::INA219Component *ina219_ina219component_id;
sensor::Sensor *ina219_bus_voltage;
sensor::Sensor *ina219_shunt_voltage;
sensor::Sensor *ina219_current;
sensor::ValueRangeTrigger *sensor_valuerangetrigger_id_5;
Automation<float> *automation_id_6;
adc::ADCSensor *adc_voltmeter_external_command_sensor;
sensor::ValueRangeTrigger *sensor_valuerangetrigger_id_7;
Automation<float> *automation_id_8;
using namespace output;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id_2;
ledc::LEDCOutput *motor_reverse_pin;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id_3;
ledc::LEDCOutput *motor_forward_pin;
hbridge::HBridgeFan *fan_roof_window_motor;
fan::FanTurnOnTrigger *fan_fanturnontrigger_id;
Automation<> *automation_id_11;
template_::TemplateCover *finestra_soffitto_cover;
LambdaAction<> *lambdaaction_id;
fan::TurnOffAction<float> *fan_turnoffaction_id_3;
LambdaAction<float> *lambdaaction_id_4;
sensor::ValueRangeTrigger *sensor_valuerangetrigger_id_6;
Automation<float> *automation_id_7;
fan::TurnOffAction<float> *fan_turnoffaction_id_4;
LambdaAction<float> *lambdaaction_id_5;
sensor::Sensor *ina219_power;
fan::TurnOffAction<float> *fan_turnoffaction_id_5;
LambdaAction<float> *lambdaaction_id_6;
sensor::ValueRangeTrigger *sensor_valuerangetrigger_id_8;
Automation<float> *automation_id_9;
fan::TurnOnAction<float> *fan_turnonaction_id;
LambdaAction<float> *lambdaaction_id_7;
sensor::ValueRangeTrigger *sensor_valuerangetrigger_id_9;
Automation<float> *automation_id_10;
fan::TurnOnAction<float> *fan_turnonaction_id_2;
LambdaAction<float> *lambdaaction_id_8;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id;
globals::RestoringGlobalsComponent<bool> *motor_running;
globals::GlobalsComponent<bool> *motor_direction_forward;
globals::RestoringGlobalsComponent<bool> *hysteresis_triggered_open;
globals::RestoringGlobalsComponent<bool> *hysteresis_triggered_close;
globals::RestoringGlobalsComponent<float> *inclinaz_desiderata_norm;
LambdaCondition<float> *lambdacondition_id;
LambdaCondition<float> *lambdacondition_id_2;
AndCondition<float> *andcondition_id;
IfAction<float> *ifaction_id;
fan::TurnOffAction<float> *fan_turnoffaction_id;
LambdaAction<float> *lambdaaction_id_2;
globals::GlobalVarSetAction<globals::RestoringGlobalsComponent<bool>, float> *globals_globalvarsetaction_id;
sensor::ValueRangeTrigger *sensor_valuerangetrigger_id_2;
Automation<float> *automation_id_3;
globals::GlobalVarSetAction<globals::RestoringGlobalsComponent<bool>, float> *globals_globalvarsetaction_id_2;
sensor::ValueRangeTrigger *sensor_valuerangetrigger_id_3;
Automation<float> *automation_id_4;
LambdaCondition<float> *lambdacondition_id_3;
LambdaCondition<float> *lambdacondition_id_4;
AndCondition<float> *andcondition_id_2;
IfAction<float> *ifaction_id_2;
fan::TurnOffAction<float> *fan_turnoffaction_id_2;
LambdaAction<float> *lambdaaction_id_3;
globals::GlobalVarSetAction<globals::RestoringGlobalsComponent<bool>, float> *globals_globalvarsetaction_id_3;
sensor::ValueRangeTrigger *sensor_valuerangetrigger_id_4;
Automation<float> *automation_id_5;
globals::GlobalVarSetAction<globals::RestoringGlobalsComponent<bool>, float> *globals_globalvarsetaction_id_4;
globals::GlobalVarSetAction<globals::RestoringGlobalsComponent<bool>> *globals_globalvarsetaction_id_5;
LambdaAction<> *lambdaaction_id_9;
fan::FanTurnOffTrigger *fan_fanturnofftrigger_id;
Automation<> *automation_id_12;
globals::GlobalVarSetAction<globals::RestoringGlobalsComponent<bool>> *globals_globalvarsetaction_id_6;
LambdaAction<> *lambdaaction_id_10;
Automation<> *automation_id_13;
LambdaCondition<> *lambdacondition_id_5;
IfAction<> *ifaction_id_3;
LambdaAction<> *lambdaaction_id_11;
LambdaAction<> *lambdaaction_id_12;
Automation<> *automation_id_14;
LambdaCondition<> *lambdacondition_id_6;
IfAction<> *ifaction_id_4;
LambdaAction<> *lambdaaction_id_13;
LambdaAction<> *lambdaaction_id_14;
Automation<> *automation_id_15;
fan::TurnOffAction<> *fan_turnoffaction_id_6;
LambdaAction<> *lambdaaction_id_15;
Automation<float> *automation_id_16;
LambdaAction<float> *lambdaaction_id_16;
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
  //   name: esphome-finestrasoffitto
  //   friendly_name: esphome-finestrasoffitto
  //   min_version: 2024.11.1
  //   build_path: build/esphome-finestrasoffitto
  //   area: ''
  //   platformio_options: {}
  //   includes: []
  //   libraries: []
  //   name_add_mac_suffix: false
  App.pre_setup("esphome-finestrasoffitto", "esphome-finestrasoffitto", "", "", __DATE__ ", " __TIME__, false);
  // text_sensor:
  // sensor:
  // fan:
  // cover:
  // logger:
  //   level: DEBUG
  //   logs:
  //     mpu6050: INFO
  //     sensor: INFO
  //     fan_roof_window_motor: INFO
  //     i2c.arduino: DEBUG
  //   id: logger_logger_id
  //   baud_rate: 115200
  //   tx_buffer_size: 512
  //   deassert_rts_dtr: false
  //   hardware_uart: UART0
  logger_logger_id = new logger::Logger(115200, 512);
  logger_logger_id->set_uart_selection(logger::UART_SELECTION_UART0);
  logger_logger_id->pre_setup();
  logger_logger_id->set_log_level("mpu6050", ESPHOME_LOG_LEVEL_INFO);
  logger_logger_id->set_log_level("sensor", ESPHOME_LOG_LEVEL_INFO);
  logger_logger_id->set_log_level("fan_roof_window_motor", ESPHOME_LOG_LEVEL_INFO);
  logger_logger_id->set_log_level("i2c.arduino", ESPHOME_LOG_LEVEL_DEBUG);
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
  //     static_ip: 10.4.1.184
  //     gateway: 10.4.1.254
  //     subnet: 255.255.255.0
  //     dns1: 0.0.0.0
  //     dns2: 0.0.0.0
  //   ap:
  //     ssid: Finestrasoff Fallback Hotspot
  //     password: i0o3Np3l4RHM
  //     id: wifi_wifiap_id
  //     ap_timeout: 1min
  //   id: wifi_wificomponent_id
  //   domain: .local
  //   reboot_timeout: 15min
  //   power_save_mode: LIGHT
  //   passive_scan: false
  //   enable_on_boot: true
  //   networks:
  //   - ssid: !secret 'wifi_ssid'
  //     password: !secret 'wifi_password'
  //     id: wifi_wifiap_id_2
  //     priority: 0.0
  //   use_address: 10.4.1.184
  wifi_wificomponent_id = new wifi::WiFiComponent();
  wifi_wificomponent_id->set_use_address("10.4.1.184");
  {
  wifi::WiFiAP wifi_wifiap_id_2 = wifi::WiFiAP();
  wifi_wifiap_id_2.set_ssid("HouseOfTheEagle2");
  wifi_wifiap_id_2.set_password("marmellata1949");
  wifi_wifiap_id_2.set_manual_ip(wifi::ManualIP{
      .static_ip = network::IPAddress(10, 4, 1, 184),
      .gateway = network::IPAddress(10, 4, 1, 254),
      .subnet = network::IPAddress(255, 255, 255, 0),
      .dns1 = network::IPAddress(0, 0, 0, 0),
      .dns2 = network::IPAddress(0, 0, 0, 0),
  });
  wifi_wifiap_id_2.set_priority(0.0f);
  wifi_wificomponent_id->add_sta(wifi_wifiap_id_2);
  }
  {
  wifi::WiFiAP wifi_wifiap_id = wifi::WiFiAP();
  wifi_wifiap_id.set_ssid("Finestrasoff Fallback Hotspot");
  wifi_wifiap_id.set_password("i0o3Np3l4RHM");
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
  //   password: 7fe89391d079323436d9eface0c3ab5c
  //   id: esphome_esphomeotacomponent_id
  //   version: 2
  //   port: 3232
  esphome_esphomeotacomponent_id = new esphome::ESPHomeOTAComponent();
  esphome_esphomeotacomponent_id->set_port(3232);
  esphome_esphomeotacomponent_id->set_auth_password("7fe89391d079323436d9eface0c3ab5c");
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
  // api:
  //   encryption:
  //     key: WSCUirtgeB6zuKIIRfqUMbyK+LBMusHT996lcgQeUc8=
  //   id: api_apiserver_id
  //   port: 6053
  //   password: ''
  //   reboot_timeout: 15min
  api_apiserver_id = new api::APIServer();
  api_apiserver_id->set_component_source("api");
  App.register_component(api_apiserver_id);
  api_apiserver_id->set_port(6053);
  api_apiserver_id->set_password("");
  api_apiserver_id->set_reboot_timeout(900000);
  api_apiserver_id->set_noise_psk({89, 32, 148, 138, 187, 96, 120, 30, 179, 184, 162, 8, 69, 250, 148, 49, 188, 138, 248, 176, 76, 186, 193, 211, 247, 222, 165, 114, 4, 30, 81, 207});
  // i2c:
  //   sda: 21
  //   scl: 22
  //   scan: true
  //   frequency: 10000.0
  //   id: i2c_bus
  i2c_bus = new i2c::ArduinoI2CBus();
  i2c_bus->set_component_source("i2c");
  App.register_component(i2c_bus);
  i2c_bus->set_sda_pin(21);
  i2c_bus->set_scl_pin(22);
  i2c_bus->set_frequency(10000);
  i2c_bus->set_scan(true);
  // substitutions:
  //   INCLINAZ_CHIUSO: '18'
  //   INCLINAZ_CHIUSO_ISTERESI: '17'
  //   INCLINAZ_APERTO: '0'
  //   INCLINAZ_APERTO_ISTERESI: '1'
  //   TOLLERANZA_CONDIZ_ARRIVO: '0.5'
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
  // debug:
  //   update_interval: 5s
  //   id: debug_debugcomponent_id
  debug_debugcomponent_id = new debug::DebugComponent();
  debug_debugcomponent_id->set_update_interval(5000);
  debug_debugcomponent_id->set_component_source("debug");
  App.register_component(debug_debugcomponent_id);
  // text_sensor.debug:
  //   platform: debug
  //   device:
  //     name: Device Info
  //     disabled_by_default: false
  //     id: text_sensor_textsensor_id
  //     icon: mdi:chip
  //     entity_category: diagnostic
  //   reset_reason:
  //     name: Reset Reason
  //     disabled_by_default: false
  //     id: text_sensor_textsensor_id_2
  //     icon: mdi:restart
  //     entity_category: diagnostic
  //   debug_id: debug_debugcomponent_id
  text_sensor_textsensor_id = new text_sensor::TextSensor();
  App.register_text_sensor(text_sensor_textsensor_id);
  text_sensor_textsensor_id->set_name("Device Info");
  text_sensor_textsensor_id->set_object_id("device_info");
  text_sensor_textsensor_id->set_disabled_by_default(false);
  text_sensor_textsensor_id->set_icon("mdi:chip");
  text_sensor_textsensor_id->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  debug_debugcomponent_id->set_device_info_sensor(text_sensor_textsensor_id);
  text_sensor_textsensor_id_2 = new text_sensor::TextSensor();
  App.register_text_sensor(text_sensor_textsensor_id_2);
  text_sensor_textsensor_id_2->set_name("Reset Reason");
  text_sensor_textsensor_id_2->set_object_id("reset_reason");
  text_sensor_textsensor_id_2->set_disabled_by_default(false);
  text_sensor_textsensor_id_2->set_icon("mdi:restart");
  text_sensor_textsensor_id_2->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  debug_debugcomponent_id->set_reset_reason_sensor(text_sensor_textsensor_id_2);
  // interval:
  //   - interval: 30s
  //     then:
  //     - lambda: !lambda |-
  //         if (id(mpu6050_xyz).is_failed()) {
  //           ESP_LOGW("i2c", "MPU6050 non risponde. Tentativo di recupero del bus I2C...");
  //           Wire.begin(21, 22);   Reinizializza il bus con i pin corretti
  //           Wire.endTransmission();   Termina eventuali trasmissioni bloccate
  //   
  //            Ricontrolla se il sensore risponde
  //           if (id(mpu6050_xyz).is_failed()) {
  //             ESP_LOGE("mpu6050", "Recupero fallito. Sarebbe il caso di riavviare...");
  //             ESP.restart();   Riavvia solo se il recupero fallisce
  //           } else {
  //             ESP_LOGI("mpu6050", "Recupero I2C riuscito, sensore risponde di nuovo.");
  //           }
  //         } else {
  //           ESP_LOGI("i2c", "MPU6050 risponde correttamente");
  //         }
  //       type_id: lambdaaction_id
  //     trigger_id: trigger_id
  //     automation_id: automation_id
  //     id: interval_intervaltrigger_id
  //     startup_delay: 0s
  interval_intervaltrigger_id = new interval::IntervalTrigger();
  interval_intervaltrigger_id->set_component_source("interval");
  App.register_component(interval_intervaltrigger_id);
  automation_id = new Automation<>(interval_intervaltrigger_id);
  // sensor.debug:
  //   platform: debug
  //   free:
  //     name: Heap Free
  //     disabled_by_default: false
  //     id: sensor_sensor_id
  //     force_update: false
  //     unit_of_measurement: B
  //     icon: mdi:counter
  //     accuracy_decimals: 0
  //     entity_category: diagnostic
  //   block:
  //     name: Heap Max Block
  //     disabled_by_default: false
  //     id: sensor_sensor_id_2
  //     force_update: false
  //     unit_of_measurement: B
  //     icon: mdi:counter
  //     accuracy_decimals: 0
  //     entity_category: diagnostic
  //   loop_time:
  //     name: Loop Time
  //     disabled_by_default: false
  //     id: sensor_sensor_id_3
  //     force_update: false
  //     unit_of_measurement: ms
  //     icon: mdi:timer-outline
  //     accuracy_decimals: 0
  //     entity_category: diagnostic
  //   debug_id: debug_debugcomponent_id
  sensor_sensor_id = new sensor::Sensor();
  App.register_sensor(sensor_sensor_id);
  sensor_sensor_id->set_name("Heap Free");
  sensor_sensor_id->set_object_id("heap_free");
  sensor_sensor_id->set_disabled_by_default(false);
  sensor_sensor_id->set_icon("mdi:counter");
  sensor_sensor_id->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  sensor_sensor_id->set_unit_of_measurement("B");
  sensor_sensor_id->set_accuracy_decimals(0);
  sensor_sensor_id->set_force_update(false);
  debug_debugcomponent_id->set_free_sensor(sensor_sensor_id);
  sensor_sensor_id_2 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_id_2);
  sensor_sensor_id_2->set_name("Heap Max Block");
  sensor_sensor_id_2->set_object_id("heap_max_block");
  sensor_sensor_id_2->set_disabled_by_default(false);
  sensor_sensor_id_2->set_icon("mdi:counter");
  sensor_sensor_id_2->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  sensor_sensor_id_2->set_unit_of_measurement("B");
  sensor_sensor_id_2->set_accuracy_decimals(0);
  sensor_sensor_id_2->set_force_update(false);
  debug_debugcomponent_id->set_block_sensor(sensor_sensor_id_2);
  sensor_sensor_id_3 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_id_3);
  sensor_sensor_id_3->set_name("Loop Time");
  sensor_sensor_id_3->set_object_id("loop_time");
  sensor_sensor_id_3->set_disabled_by_default(false);
  sensor_sensor_id_3->set_icon("mdi:timer-outline");
  sensor_sensor_id_3->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  sensor_sensor_id_3->set_unit_of_measurement("ms");
  sensor_sensor_id_3->set_accuracy_decimals(0);
  sensor_sensor_id_3->set_force_update(false);
  debug_debugcomponent_id->set_loop_time_sensor(sensor_sensor_id_3);
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
  //     type_id: sensor_lambdafilter_id
  //   unit_of_measurement: Signal %
  //   entity_category: diagnostic
  //   device_class: ''
  //   disabled_by_default: false
  //   force_update: false
  //   id: copy_copysensor_id
  //   accuracy_decimals: 0
  //   state_class: measurement
  copy_copysensor_id = new copy::CopySensor();
  App.register_sensor(copy_copysensor_id);
  copy_copysensor_id->set_name("WiFi Signal Percent");
  copy_copysensor_id->set_object_id("wifi_signal_percent");
  copy_copysensor_id->set_disabled_by_default(false);
  copy_copysensor_id->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  copy_copysensor_id->set_device_class("");
  copy_copysensor_id->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  copy_copysensor_id->set_unit_of_measurement("Signal %");
  copy_copysensor_id->set_accuracy_decimals(0);
  copy_copysensor_id->set_force_update(false);
  sensor_lambdafilter_id = new sensor::LambdaFilter([=](float x) -> optional<float> {
      #line 155 "/config/esphome-finestrasoffitto.yaml"
      return min(max(2 * (x + 100.0), 0.0), 100.0);
  });
  copy_copysensor_id->set_filters({sensor_lambdafilter_id});
  copy_copysensor_id->set_component_source("copy.sensor");
  App.register_component(copy_copysensor_id);
  copy_copysensor_id->set_source(wifi_signal_db);
  // sensor.mpu6050:
  //   platform: mpu6050
  //   address: 0x68
  //   update_interval: 1s
  //   id: mpu6050_xyz
  //   accel_x:
  //     name: Accelerazione asse X
  //     unit_of_measurement: m/s²
  //     icon: mdi:axis-arrow
  //     id: accel_x
  //     filters:
  //     - offset: -1.67
  //       type_id: sensor_offsetfilter_id
  //     disabled_by_default: false
  //     force_update: false
  //     accuracy_decimals: 2
  //     state_class: measurement
  //   accel_y:
  //     name: Accelerazione asse Y
  //     unit_of_measurement: m/s²
  //     icon: mdi:axis-arrow
  //     id: accel_y
  //     filters:
  //     - offset: -0.18
  //       type_id: sensor_offsetfilter_id_2
  //     disabled_by_default: false
  //     force_update: false
  //     accuracy_decimals: 2
  //     state_class: measurement
  //   accel_z:
  //     name: Accelerazione asse Z
  //     unit_of_measurement: m/s²
  //     icon: mdi:axis-arrow
  //     id: accel_z
  //     filters:
  //     - offset: 0.5
  //       type_id: sensor_offsetfilter_id_3
  //     disabled_by_default: false
  //     force_update: false
  //     accuracy_decimals: 2
  //     state_class: measurement
  //   i2c_id: i2c_bus
  mpu6050_xyz = new mpu6050::MPU6050Component();
  mpu6050_xyz->set_update_interval(1000);
  mpu6050_xyz->set_component_source("mpu6050.sensor");
  App.register_component(mpu6050_xyz);
  mpu6050_xyz->set_i2c_bus(i2c_bus);
  mpu6050_xyz->set_i2c_address(0x68);
  accel_x = new sensor::Sensor();
  App.register_sensor(accel_x);
  accel_x->set_name("Accelerazione asse X");
  accel_x->set_object_id("accelerazione_asse_x");
  accel_x->set_disabled_by_default(false);
  accel_x->set_icon("mdi:axis-arrow");
  accel_x->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  accel_x->set_unit_of_measurement("m/s\302\262");
  accel_x->set_accuracy_decimals(2);
  accel_x->set_force_update(false);
  sensor_offsetfilter_id = new sensor::OffsetFilter(-1.67f);
  accel_x->set_filters({sensor_offsetfilter_id});
  mpu6050_xyz->set_accel_x_sensor(accel_x);
  accel_y = new sensor::Sensor();
  App.register_sensor(accel_y);
  accel_y->set_name("Accelerazione asse Y");
  accel_y->set_object_id("accelerazione_asse_y");
  accel_y->set_disabled_by_default(false);
  accel_y->set_icon("mdi:axis-arrow");
  accel_y->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  accel_y->set_unit_of_measurement("m/s\302\262");
  accel_y->set_accuracy_decimals(2);
  accel_y->set_force_update(false);
  sensor_offsetfilter_id_2 = new sensor::OffsetFilter(-0.18f);
  accel_y->set_filters({sensor_offsetfilter_id_2});
  mpu6050_xyz->set_accel_y_sensor(accel_y);
  accel_z = new sensor::Sensor();
  App.register_sensor(accel_z);
  accel_z->set_name("Accelerazione asse Z");
  accel_z->set_object_id("accelerazione_asse_z");
  accel_z->set_disabled_by_default(false);
  accel_z->set_icon("mdi:axis-arrow");
  accel_z->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  accel_z->set_unit_of_measurement("m/s\302\262");
  accel_z->set_accuracy_decimals(2);
  accel_z->set_force_update(false);
  sensor_offsetfilter_id_3 = new sensor::OffsetFilter(0.5f);
  accel_z->set_filters({sensor_offsetfilter_id_3});
  mpu6050_xyz->set_accel_z_sensor(accel_z);
  // sensor.template:
  //   platform: template
  //   id: pitch
  //   name: Inclinazione finestra
  //   unit_of_measurement: °
  //   icon: mdi:airplane-takeoff
  //   accuracy_decimals: 1
  //   lambda: !lambda "float INCLINAZ_CHIUSO_FL = atof(\"18\");\nfloat INCLINAZ_APERTO_FL
  //     \ = atof(\"0\");\nfloat TOLLERANZA_CONDIZ_ARRIVO_FL = atof(\"0.5\");\n\nfloat inclinaz_attuale
  //     \ = (atan(-1 * id(accel_x).state / sqrt(pow(id(accel_y).state, 2) + pow(id(accel_z).state,
  //     \ 2))) * 180 / PI);\n Filtra i valori fuori range\nif (inclinaz_attuale < -20
  //     \ || inclinaz_attuale > 20) {\n  return id(pitch).state;  Mantieni l'ultimo valore
  //     \ valido\n}\n\n Monitora la condizione di arresto se il motorino si sta muovendo\n
  //     if(id(motor_running) == true){\n          \n   Calcola l'inclinazione target\n
  //     \  float inclinaz_desiderata = INCLINAZ_CHIUSO_FL - (id(inclinaz_desiderata_norm)
  //     \ * (INCLINAZ_CHIUSO_FL - INCLINAZ_APERTO_FL));   Da \"INCLINAZ_CHIUSO_FL\" a
  //     \ \"INCLINAZ_APERTO_FL\"\n  ESP_LOGI(\"pitch\", \"Inclinazione attuale: %.1f°, desiderata:
  //     \ %.1f°\", inclinaz_attuale, inclinaz_desiderata);\n\n   Verifica se il valore
  //     \ è arrivato (entro la tolleranza di TOLLERANZA_CONDIZ_ARRIVO_FL)\n  if (abs(inclinaz_desiderata
  //     \ - inclinaz_attuale) < TOLLERANZA_CONDIZ_ARRIVO_FL) {   Tolleranza di ±TOLLERANZA_CONDIZ_ARRIVO_FL
  //     \ gradi        \n      auto call = id(fan_roof_window_motor).turn_off();\n     
  //     \ call.perform();        \n    ESP_LOGI(\"pitch\", \"Inclinazione desiderata %.1f°
  //     \ raggiunta, motore fermato.\", inclinaz_desiderata);\n  } \n}\n\nreturn inclinaz_attuale;"
  //   update_interval: 1s
  //   on_value_range:
  //   - above: 18.0
  //     then:
  //     - if:
  //         condition:
  //           and:
  //           - lambda: !lambda |-
  //               return id(motor_running);
  //             type_id: lambdacondition_id
  //           - lambda: !lambda |-
  //               return !id(hysteresis_triggered_close);
  //             type_id: lambdacondition_id_2
  //           type_id: andcondition_id
  //         then:
  //         - fan.turn_off:
  //             id: fan_roof_window_motor
  //           type_id: fan_turnoffaction_id
  //         - logger.log:
  //             format: 'Accelerometro: Motore fermato (finestra completamente chiusa, beccheggio
  //               maggiore di 18°)'
  //             level: INFO
  //             args: []
  //             tag: main
  //           type_id: lambdaaction_id_2
  //         - globals.set:
  //             id: hysteresis_triggered_close
  //             value: 'true'
  //           type_id: globals_globalvarsetaction_id
  //       type_id: ifaction_id
  //     automation_id: automation_id_2
  //     trigger_id: sensor_valuerangetrigger_id
  //   - below: 17.0
  //     then:
  //     - globals.set:
  //         id: hysteresis_triggered_close
  //         value: 'false'
  //       type_id: globals_globalvarsetaction_id_2
  //     automation_id: automation_id_3
  //     trigger_id: sensor_valuerangetrigger_id_2
  //   - below: 0.0
  //     then:
  //     - if:
  //         condition:
  //           and:
  //           - lambda: !lambda |-
  //               return id(motor_running);
  //             type_id: lambdacondition_id_3
  //           - lambda: !lambda |-
  //               return !id(hysteresis_triggered_open);
  //             type_id: lambdacondition_id_4
  //           type_id: andcondition_id_2
  //         then:
  //         - fan.turn_off:
  //             id: fan_roof_window_motor
  //           type_id: fan_turnoffaction_id_2
  //         - logger.log:
  //             format: 'Accelerometro: Motore fermato (finestra completamente aperta, beccheggio
  //               minore di 0°)'
  //             level: INFO
  //             args: []
  //             tag: main
  //           type_id: lambdaaction_id_3
  //         - globals.set:
  //             id: hysteresis_triggered_open
  //             value: 'true'
  //           type_id: globals_globalvarsetaction_id_3
  //       type_id: ifaction_id_2
  //     automation_id: automation_id_4
  //     trigger_id: sensor_valuerangetrigger_id_3
  //   - above: 1.0
  //     then:
  //     - globals.set:
  //         id: hysteresis_triggered_open
  //         value: 'false'
  //       type_id: globals_globalvarsetaction_id_4
  //     automation_id: automation_id_5
  //     trigger_id: sensor_valuerangetrigger_id_4
  //   disabled_by_default: false
  //   force_update: false
  pitch = new template_::TemplateSensor();
  App.register_sensor(pitch);
  pitch->set_name("Inclinazione finestra");
  pitch->set_object_id("inclinazione_finestra");
  pitch->set_disabled_by_default(false);
  pitch->set_icon("mdi:airplane-takeoff");
  pitch->set_unit_of_measurement("\302\260");
  pitch->set_accuracy_decimals(1);
  pitch->set_force_update(false);
  sensor_valuerangetrigger_id = new sensor::ValueRangeTrigger(pitch);
  sensor_valuerangetrigger_id->set_component_source("sensor");
  App.register_component(sensor_valuerangetrigger_id);
  sensor_valuerangetrigger_id->set_min(18.0f);
  automation_id_2 = new Automation<float>(sensor_valuerangetrigger_id);
  // sensor.ina219:
  //   platform: ina219
  //   address: 0x40
  //   shunt_resistance: 0.1
  //   current:
  //     name: INA219 Current
  //     id: ina219_current
  //     on_value_range:
  //     - above: 0.35
  //       then:
  //       - fan.turn_off:
  //           id: fan_roof_window_motor
  //         type_id: fan_turnoffaction_id_3
  //       - logger.log:
  //           format: 'Amperometro (%f A): Inviato comando di spegnimento al motorino della
  //             finestra (apertura massima raggiunta)'
  //           args:
  //           - !lambda |-
  //             id(ina219_current).state
  //           level: INFO
  //           tag: ina219_current
  //         type_id: lambdaaction_id_4
  //       automation_id: automation_id_6
  //       trigger_id: sensor_valuerangetrigger_id_5
  //     - below: -0.35
  //       then:
  //       - fan.turn_off:
  //           id: fan_roof_window_motor
  //         type_id: fan_turnoffaction_id_4
  //       - logger.log:
  //           format: 'Amperometro (%f A): Inviato comando di spegnimento al motorino della
  //             finestra (posizione di chiusura raggiunta)'
  //           args:
  //           - !lambda |-
  //             id(ina219_current).state
  //           level: INFO
  //           tag: ina219_current
  //         type_id: lambdaaction_id_5
  //       automation_id: automation_id_7
  //       trigger_id: sensor_valuerangetrigger_id_6
  //     disabled_by_default: false
  //     force_update: false
  //     unit_of_measurement: A
  //     accuracy_decimals: 3
  //     device_class: current
  //     state_class: measurement
  //   power:
  //     name: INA219 Power
  //     id: ina219_power
  //     disabled_by_default: false
  //     force_update: false
  //     unit_of_measurement: W
  //     accuracy_decimals: 2
  //     device_class: power
  //     state_class: measurement
  //   bus_voltage:
  //     name: INA219 Bus Voltage
  //     id: ina219_bus_voltage
  //     disabled_by_default: false
  //     force_update: false
  //     unit_of_measurement: V
  //     accuracy_decimals: 2
  //     device_class: voltage
  //     state_class: measurement
  //   shunt_voltage:
  //     name: INA219 Shunt Voltage
  //     id: ina219_shunt_voltage
  //     disabled_by_default: false
  //     force_update: false
  //     unit_of_measurement: V
  //     accuracy_decimals: 2
  //     device_class: voltage
  //     state_class: measurement
  //   max_voltage: 2.0
  //   max_current: 0.5
  //   update_interval: 1s
  //   id: ina219_ina219component_id
  //   i2c_id: i2c_bus
  ina219_ina219component_id = new ina219::INA219Component();
  ina219_ina219component_id->set_update_interval(1000);
  ina219_ina219component_id->set_component_source("ina219.sensor");
  App.register_component(ina219_ina219component_id);
  ina219_ina219component_id->set_i2c_bus(i2c_bus);
  ina219_ina219component_id->set_i2c_address(0x40);
  ina219_ina219component_id->set_shunt_resistance_ohm(0.1f);
  ina219_ina219component_id->set_max_current_a(0.5f);
  ina219_ina219component_id->set_max_voltage_v(2.0f);
  ina219_bus_voltage = new sensor::Sensor();
  App.register_sensor(ina219_bus_voltage);
  ina219_bus_voltage->set_name("INA219 Bus Voltage");
  ina219_bus_voltage->set_object_id("ina219_bus_voltage");
  ina219_bus_voltage->set_disabled_by_default(false);
  ina219_bus_voltage->set_device_class("voltage");
  ina219_bus_voltage->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  ina219_bus_voltage->set_unit_of_measurement("V");
  ina219_bus_voltage->set_accuracy_decimals(2);
  ina219_bus_voltage->set_force_update(false);
  ina219_ina219component_id->set_bus_voltage_sensor(ina219_bus_voltage);
  ina219_shunt_voltage = new sensor::Sensor();
  App.register_sensor(ina219_shunt_voltage);
  ina219_shunt_voltage->set_name("INA219 Shunt Voltage");
  ina219_shunt_voltage->set_object_id("ina219_shunt_voltage");
  ina219_shunt_voltage->set_disabled_by_default(false);
  ina219_shunt_voltage->set_device_class("voltage");
  ina219_shunt_voltage->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  ina219_shunt_voltage->set_unit_of_measurement("V");
  ina219_shunt_voltage->set_accuracy_decimals(2);
  ina219_shunt_voltage->set_force_update(false);
  ina219_ina219component_id->set_shunt_voltage_sensor(ina219_shunt_voltage);
  ina219_current = new sensor::Sensor();
  App.register_sensor(ina219_current);
  ina219_current->set_name("INA219 Current");
  ina219_current->set_object_id("ina219_current");
  ina219_current->set_disabled_by_default(false);
  ina219_current->set_device_class("current");
  ina219_current->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  ina219_current->set_unit_of_measurement("A");
  ina219_current->set_accuracy_decimals(3);
  ina219_current->set_force_update(false);
  sensor_valuerangetrigger_id_5 = new sensor::ValueRangeTrigger(ina219_current);
  sensor_valuerangetrigger_id_5->set_component_source("sensor");
  App.register_component(sensor_valuerangetrigger_id_5);
  sensor_valuerangetrigger_id_5->set_min(0.35f);
  automation_id_6 = new Automation<float>(sensor_valuerangetrigger_id_5);
  // sensor.adc:
  //   platform: adc
  //   pin:
  //     number: 33
  //     mode:
  //       input: true
  //       output: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esp32_esp32internalgpiopin_id
  //     inverted: false
  //     ignore_pin_validation_error: false
  //     ignore_strapping_warning: false
  //     drive_strength: 20.0
  //   name: 'Voltmetro: Sensore comando esterno'
  //   id: adc_voltmeter_external_command_sensor
  //   device_class: voltage
  //   state_class: measurement
  //   entity_category: diagnostic
  //   unit_of_measurement: V
  //   update_interval: 200ms
  //   accuracy_decimals: 2
  //   attenuation: auto
  //   on_value_range:
  //   - below: 0.9
  //     then:
  //     - fan.turn_off:
  //         id: fan_roof_window_motor
  //       type_id: fan_turnoffaction_id_5
  //     - logger.log:
  //         format: 'Voltmetro: Inviato comando di stop al motorino della finestra (comando
  //           ricevuto dal telecomando)'
  //         level: INFO
  //         tag: adc_voltmeter_external_command_sensor
  //         args: []
  //       type_id: lambdaaction_id_6
  //     automation_id: automation_id_8
  //     trigger_id: sensor_valuerangetrigger_id_7
  //   - above: 1.0
  //     below: 1.5
  //     then:
  //     - fan.turn_on:
  //         id: fan_roof_window_motor
  //         direction: FORWARD
  //       type_id: fan_turnonaction_id
  //     - logger.log:
  //         format: 'Voltmetro: Inviato comando di apertura al motorino della finestra (comando
  //           ricevuto dal telecomando?)'
  //         level: INFO
  //         tag: adc_voltmeter_external_command_sensor
  //         args: []
  //       type_id: lambdaaction_id_7
  //     automation_id: automation_id_9
  //     trigger_id: sensor_valuerangetrigger_id_8
  //   - above: 2.5
  //     then:
  //     - fan.turn_on:
  //         id: fan_roof_window_motor
  //         direction: REVERSE
  //       type_id: fan_turnonaction_id_2
  //     - logger.log:
  //         format: 'Voltmetro: Inviato comando di chiusura al motorino della finestra (comando
  //           ricevuto dal telecomando o dal sensore pioggia)'
  //         level: INFO
  //         tag: adc_voltmeter_external_command_sensor
  //         args: []
  //       type_id: lambdaaction_id_8
  //     automation_id: automation_id_10
  //     trigger_id: sensor_valuerangetrigger_id_9
  //   disabled_by_default: false
  //   force_update: false
  //   raw: false
  //   samples: 1
  adc_voltmeter_external_command_sensor = new adc::ADCSensor();
  adc_voltmeter_external_command_sensor->set_update_interval(200);
  adc_voltmeter_external_command_sensor->set_component_source("adc.sensor");
  App.register_component(adc_voltmeter_external_command_sensor);
  App.register_sensor(adc_voltmeter_external_command_sensor);
  adc_voltmeter_external_command_sensor->set_name("Voltmetro: Sensore comando esterno");
  adc_voltmeter_external_command_sensor->set_object_id("voltmetro__sensore_comando_esterno");
  adc_voltmeter_external_command_sensor->set_disabled_by_default(false);
  adc_voltmeter_external_command_sensor->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  adc_voltmeter_external_command_sensor->set_device_class("voltage");
  adc_voltmeter_external_command_sensor->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  adc_voltmeter_external_command_sensor->set_unit_of_measurement("V");
  adc_voltmeter_external_command_sensor->set_accuracy_decimals(2);
  adc_voltmeter_external_command_sensor->set_force_update(false);
  sensor_valuerangetrigger_id_7 = new sensor::ValueRangeTrigger(adc_voltmeter_external_command_sensor);
  sensor_valuerangetrigger_id_7->set_component_source("sensor");
  App.register_component(sensor_valuerangetrigger_id_7);
  sensor_valuerangetrigger_id_7->set_max(0.9f);
  automation_id_8 = new Automation<float>(sensor_valuerangetrigger_id_7);
  // output:
  // output.ledc:
  //   platform: ledc
  //   pin:
  //     number: 26
  //     mode:
  //       output: true
  //       input: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esp32_esp32internalgpiopin_id_2
  //     inverted: false
  //     ignore_pin_validation_error: false
  //     ignore_strapping_warning: false
  //     drive_strength: 20.0
  //   id: motor_reverse_pin
  //   zero_means_zero: false
  //   frequency: 1000.0
  esp32_esp32internalgpiopin_id_2 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id_2->set_pin(::GPIO_NUM_26);
  esp32_esp32internalgpiopin_id_2->set_inverted(false);
  esp32_esp32internalgpiopin_id_2->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id_2->set_flags(gpio::Flags::FLAG_OUTPUT);
  motor_reverse_pin = new ledc::LEDCOutput(esp32_esp32internalgpiopin_id_2);
  motor_reverse_pin->set_component_source("ledc.output");
  App.register_component(motor_reverse_pin);
  motor_reverse_pin->set_zero_means_zero(false);
  motor_reverse_pin->set_frequency(1000.0f);
  // output.ledc:
  //   platform: ledc
  //   pin:
  //     number: 27
  //     mode:
  //       output: true
  //       input: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esp32_esp32internalgpiopin_id_3
  //     inverted: false
  //     ignore_pin_validation_error: false
  //     ignore_strapping_warning: false
  //     drive_strength: 20.0
  //   id: motor_forward_pin
  //   zero_means_zero: false
  //   frequency: 1000.0
  esp32_esp32internalgpiopin_id_3 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id_3->set_pin(::GPIO_NUM_27);
  esp32_esp32internalgpiopin_id_3->set_inverted(false);
  esp32_esp32internalgpiopin_id_3->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id_3->set_flags(gpio::Flags::FLAG_OUTPUT);
  motor_forward_pin = new ledc::LEDCOutput(esp32_esp32internalgpiopin_id_3);
  motor_forward_pin->set_component_source("ledc.output");
  App.register_component(motor_forward_pin);
  motor_forward_pin->set_zero_means_zero(false);
  motor_forward_pin->set_frequency(1000.0f);
  // fan.hbridge:
  //   platform: hbridge
  //   id: fan_roof_window_motor
  //   pin_a: motor_reverse_pin
  //   pin_b: motor_forward_pin
  //   decay_mode: SLOW
  //   entity_category: diagnostic
  //   on_turn_on:
  //   - then:
  //     - globals.set:
  //         id: motor_running
  //         value: 'true'
  //       type_id: globals_globalvarsetaction_id_5
  //     - logger.log:
  //         format: Motorino finestra acceso!
  //         level: INFO
  //         tag: fan_roof_window_motor
  //         args: []
  //       type_id: lambdaaction_id_9
  //     automation_id: automation_id_11
  //     trigger_id: fan_fanturnontrigger_id
  //   on_turn_off:
  //   - then:
  //     - globals.set:
  //         id: motor_running
  //         value: 'false'
  //       type_id: globals_globalvarsetaction_id_6
  //     - logger.log:
  //         format: Motorino finestra spento!
  //         level: INFO
  //         tag: fan_roof_window_motor
  //         args: []
  //       type_id: lambdaaction_id_10
  //     automation_id: automation_id_12
  //     trigger_id: fan_fanturnofftrigger_id
  //   disabled_by_default: false
  //   restore_mode: ALWAYS_OFF
  //   speed_count: 100
  //   name: fan_roof_window_motor
  //   internal: true
  fan_roof_window_motor = new hbridge::HBridgeFan(100, hbridge::DECAY_MODE_SLOW);
  fan_roof_window_motor->set_component_source("hbridge.fan");
  App.register_component(fan_roof_window_motor);
  App.register_fan(fan_roof_window_motor);
  fan_roof_window_motor->set_name("fan_roof_window_motor");
  fan_roof_window_motor->set_object_id("fan_roof_window_motor");
  fan_roof_window_motor->set_disabled_by_default(false);
  fan_roof_window_motor->set_internal(true);
  fan_roof_window_motor->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  fan_roof_window_motor->set_restore_mode(fan::FanRestoreMode::ALWAYS_OFF);
  fan_fanturnontrigger_id = new fan::FanTurnOnTrigger(fan_roof_window_motor);
  automation_id_11 = new Automation<>(fan_fanturnontrigger_id);
  // cover.template:
  //   platform: template
  //   name: Finestra Soffitto
  //   id: finestra_soffitto_cover
  //   optimistic: false
  //   has_position: true
  //   lambda: !lambda "static bool restituito_stato_iniziale_cover = false;   Variabile
  //     \ statica usata all'avvio dell'esp32 per restituire lo stato iniziale della cover
  //     \ \nstatic float inclinaz_norm_precedente = 0.0;   Memorizza l'ultima posizione
  //     \ calcolata\nfloat INCLINAZ_CHIUSO_FL = atof(\"18\");\nfloat INCLINAZ_APERTO_FL
  //     \ = atof(\"0\");\n\n Calcola l'inclinazione attuale normalizzata\nfloat inclinaz_norm_attuale
  //     \ = (INCLINAZ_CHIUSO_FL - id(pitch).state) / (INCLINAZ_CHIUSO_FL - INCLINAZ_APERTO_FL);
  //     \  Normalizza da \"INCLINAZ_CHIUSO_FL\" a \"INCLINAZ_APERTO_FL\"\nESP_LOGD(\"
  //     finestra_soffitto_cover\",  \"inclinaz_norm_attuale %.2f, inclinaz_norm_precedente=
  //     \ %.2f\", inclinaz_norm_attuale, inclinaz_norm_precedente);                \nif
  //     \ (isnan(inclinaz_norm_precedente)) {\n  ESP_LOGW(\"sensor_check\", \"Il valore
  //     \ di inclinaz_norm_precedente è NaN!\");\n  delay(10000);\n}\n\nif (!restituito_stato_iniziale_cover)
  //     \ {\n  ESP_LOGD(\"finestra_soffitto_cover\", \"qui\");                \n   Se
  //     \ siamo all'avvio dell'esp32 restituiamo lo stato iniziale della cover \n  restituito_stato_iniziale_cover
  //     \ = true;\n  inclinaz_norm_precedente = inclinaz_norm_attuale;   Aggiorna l'ultima
  //     \ inclinazione memorizzata \n  return inclinaz_norm_attuale;\n}  \n\n Se il motorino
  //     \ è in movimento  \nif (id(motor_running)) {                         \n\n   Limita
  //     \ variazioni minime (ad esempio 0.02)\n  if (abs(inclinaz_norm_attuale - inclinaz_norm_precedente)
  //     \ < 0.02) {\n    return inclinaz_norm_precedente;   Non aggiornare se la variazione
  //     \ è troppo piccola\n  } \n  ESP_LOGD(\"finestra_soffitto_cover\", \" %.2f, inclinaz_norm_attuale=%.2f,
  //     \ inclinaz_norm_precedente=%.2f\", abs(inclinaz_norm_attuale - inclinaz_norm_precedente),
  //     \ inclinaz_norm_attuale, inclinaz_norm_precedente);                \n  inclinaz_norm_precedente
  //     \ = inclinaz_norm_attuale;   Aggiorna l'ultima inclinazione memorizzata \n\n 
  //     \  Assicurati che al di sotto\\sopra di una certa soglia la finestra venga considerata
  //     \ aperta\\chiusa\n  if (inclinaz_norm_attuale < 0.1) {\n    return 0.0;\n  } else
  //     \ if (inclinaz_norm_attuale > 0.9) {\n    return 1.0;\n  }\n  return inclinaz_norm_attuale;
  //     \    \n\n}\nreturn inclinaz_norm_precedente;          "
  //   open_action:
  //     then:
  //     - if:
  //         condition:
  //           lambda: !lambda "float INCLINAZ_APERTO_FL = atof(\"0\");  \nreturn id(pitch).state
  //             \ <= INCLINAZ_APERTO_FL;   Già completamente aperta"
  //           type_id: lambdacondition_id_5
  //         then:
  //         - logger.log:
  //             format: 'Comando di apertura ignorato: finestra già completamente aperta'
  //             level: INFO
  //             tag: finestra_soffitto_cover
  //             args: []
  //           type_id: lambdaaction_id_11
  //         else:
  //         - lambda: !lambda "ESP_LOGI(\"finestra_soffitto_cover\", \"Posizione richiesta:
  //             \ Apertura completa\");\n\nauto call = id(fan_roof_window_motor).turn_on();\n
  //             call.set_direction(FanDirection::FORWARD);        \ncall.perform();\n\n
  //              Imposta la posizione desiderata\nid(inclinaz_desiderata_norm) = 1;  
  //             \        "
  //           type_id: lambdaaction_id_12
  //       type_id: ifaction_id_3
  //     trigger_id: trigger_id_2
  //     automation_id: automation_id_13
  //   close_action:
  //     then:
  //     - if:
  //         condition:
  //           lambda: !lambda "float INCLINAZ_CHIUSO_FL = atof(\"18\");            \nreturn
  //             \ id(pitch).state >= INCLINAZ_CHIUSO_FL;   Già completamente chiusa"
  //           type_id: lambdacondition_id_6
  //         then:
  //         - logger.log:
  //             format: 'Comando di chiusura ignorato: finestra già completamente chiusa'
  //             level: INFO
  //             tag: finestra_soffitto_cover
  //             args: []
  //           type_id: lambdaaction_id_13
  //         else:
  //         - lambda: !lambda "ESP_LOGI(\"finestra_soffitto_cover\", \"Posizione richiesta:
  //             \ Chiusura completa\");\n\nauto call = id(fan_roof_window_motor).turn_on();\n
  //             call.set_direction(FanDirection::REVERSE);        \ncall.perform();\n\n
  //              Imposta la posizione desiderata\nid(inclinaz_desiderata_norm) = 0;  
  //             \   "
  //           type_id: lambdaaction_id_14
  //       type_id: ifaction_id_4
  //     trigger_id: trigger_id_3
  //     automation_id: automation_id_14
  //   stop_action:
  //     then:
  //     - fan.turn_off:
  //         id: fan_roof_window_motor
  //       type_id: fan_turnoffaction_id_6
  //     - logger.log:
  //         format: Finestra fermata manualmente
  //         level: INFO
  //         tag: finestra_soffitto_cover
  //         args: []
  //       type_id: lambdaaction_id_15
  //     trigger_id: trigger_id_4
  //     automation_id: automation_id_15
  //   position_action:
  //     then:
  //     - lambda: !lambda "float INCLINAZ_CHIUSO_FL = atof(\"18\");  \nfloat INCLINAZ_APERTO_FL
  //         \ = atof(\"0\");  \nfloat inclinaz_desiderata = INCLINAZ_CHIUSO_FL - (pos *
  //         \ (INCLINAZ_CHIUSO_FL - INCLINAZ_APERTO_FL));   Calcola l'inclinazione desiderata\n
  //         ESP_LOGI(\"finestra_soffitto_cover\", \"Posizione richiesta: %.1f (inclinazione
  //         \ desiderata: %.1f°)\", pos, inclinaz_desiderata);\n\n Determina la direzione
  //         \ del motore\nauto call = id(fan_roof_window_motor).turn_on();\nif (inclinaz_desiderata
  //         \ > id(pitch).state) {\n  call.set_direction(FanDirection::REVERSE);       
  //         \ \n} else if (inclinaz_desiderata < id(pitch).state) {\n  call.set_direction(FanDirection::FORWARD);
  //         \        \n}\ncall.perform();\n\n Imposta la posizione desiderata\nid(inclinaz_desiderata_norm)
  //         \ = pos;          "
  //       type_id: lambdaaction_id_16
  //     trigger_id: trigger_id_5
  //     automation_id: automation_id_16
  //   disabled_by_default: false
  //   assumed_state: false
  //   restore_mode: RESTORE
  finestra_soffitto_cover = new template_::TemplateCover();
  finestra_soffitto_cover->set_component_source("template.cover");
  App.register_component(finestra_soffitto_cover);
  App.register_cover(finestra_soffitto_cover);
  finestra_soffitto_cover->set_name("Finestra Soffitto");
  finestra_soffitto_cover->set_object_id("finestra_soffitto");
  finestra_soffitto_cover->set_disabled_by_default(false);
  // socket:
  //   implementation: bsd_sockets
  // md5:
  // network:
  //   enable_ipv6: false
  //   min_ipv6_addr_count: 0
  lambdaaction_id = new LambdaAction<>([=]() -> void {
      #line 119 "/config/esphome-finestrasoffitto.yaml"
      if (mpu6050_xyz->is_failed()) {
        ESP_LOGW("i2c", "MPU6050 non risponde. Tentativo di recupero del bus I2C...");
        Wire.begin(21, 22);   
        Wire.endTransmission();   
      
         
        if (mpu6050_xyz->is_failed()) {
          ESP_LOGE("mpu6050", "Recupero fallito. Sarebbe il caso di riavviare...");
           
        } else {
          ESP_LOGI("mpu6050", "Recupero I2C riuscito, sensore risponde di nuovo.");
        }
      } else {
        ESP_LOGI("i2c", "MPU6050 risponde correttamente");
      }
  });
  automation_id->add_actions({lambdaaction_id});
  interval_intervaltrigger_id->set_update_interval(30000);
  interval_intervaltrigger_id->set_startup_delay(0);
  fan_turnoffaction_id_3 = new fan::TurnOffAction<float>(fan_roof_window_motor);
  lambdaaction_id_4 = new LambdaAction<float>([=](float x) -> void {
      ESP_LOGI("ina219_current", "Amperometro (%f A): Inviato comando di spegnimento al motorino della finestra (apertura massima raggiunta)", ina219_current->state);
  });
  automation_id_6->add_actions({fan_turnoffaction_id_3, lambdaaction_id_4});
  sensor_valuerangetrigger_id_6 = new sensor::ValueRangeTrigger(ina219_current);
  sensor_valuerangetrigger_id_6->set_component_source("sensor");
  App.register_component(sensor_valuerangetrigger_id_6);
  sensor_valuerangetrigger_id_6->set_max(-0.35f);
  automation_id_7 = new Automation<float>(sensor_valuerangetrigger_id_6);
  fan_turnoffaction_id_4 = new fan::TurnOffAction<float>(fan_roof_window_motor);
  lambdaaction_id_5 = new LambdaAction<float>([=](float x) -> void {
      ESP_LOGI("ina219_current", "Amperometro (%f A): Inviato comando di spegnimento al motorino della finestra (posizione di chiusura raggiunta)", ina219_current->state);
  });
  automation_id_7->add_actions({fan_turnoffaction_id_4, lambdaaction_id_5});
  ina219_ina219component_id->set_current_sensor(ina219_current);
  ina219_power = new sensor::Sensor();
  App.register_sensor(ina219_power);
  ina219_power->set_name("INA219 Power");
  ina219_power->set_object_id("ina219_power");
  ina219_power->set_disabled_by_default(false);
  ina219_power->set_device_class("power");
  ina219_power->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  ina219_power->set_unit_of_measurement("W");
  ina219_power->set_accuracy_decimals(2);
  ina219_power->set_force_update(false);
  ina219_ina219component_id->set_power_sensor(ina219_power);
  fan_turnoffaction_id_5 = new fan::TurnOffAction<float>(fan_roof_window_motor);
  lambdaaction_id_6 = new LambdaAction<float>([=](float x) -> void {
      ESP_LOGI("adc_voltmeter_external_command_sensor", "Voltmetro: Inviato comando di stop al motorino della finestra (comando ricevuto dal telecomando)");
  });
  automation_id_8->add_actions({fan_turnoffaction_id_5, lambdaaction_id_6});
  sensor_valuerangetrigger_id_8 = new sensor::ValueRangeTrigger(adc_voltmeter_external_command_sensor);
  sensor_valuerangetrigger_id_8->set_component_source("sensor");
  App.register_component(sensor_valuerangetrigger_id_8);
  sensor_valuerangetrigger_id_8->set_min(1.0f);
  sensor_valuerangetrigger_id_8->set_max(1.5f);
  automation_id_9 = new Automation<float>(sensor_valuerangetrigger_id_8);
  fan_turnonaction_id = new fan::TurnOnAction<float>(fan_roof_window_motor);
  fan_turnonaction_id->set_direction(fan::FanDirection::FORWARD);
  lambdaaction_id_7 = new LambdaAction<float>([=](float x) -> void {
      ESP_LOGI("adc_voltmeter_external_command_sensor", "Voltmetro: Inviato comando di apertura al motorino della finestra (comando ricevuto dal telecomando?)");
  });
  automation_id_9->add_actions({fan_turnonaction_id, lambdaaction_id_7});
  sensor_valuerangetrigger_id_9 = new sensor::ValueRangeTrigger(adc_voltmeter_external_command_sensor);
  sensor_valuerangetrigger_id_9->set_component_source("sensor");
  App.register_component(sensor_valuerangetrigger_id_9);
  sensor_valuerangetrigger_id_9->set_min(2.5f);
  automation_id_10 = new Automation<float>(sensor_valuerangetrigger_id_9);
  fan_turnonaction_id_2 = new fan::TurnOnAction<float>(fan_roof_window_motor);
  fan_turnonaction_id_2->set_direction(fan::FanDirection::REVERSE);
  lambdaaction_id_8 = new LambdaAction<float>([=](float x) -> void {
      ESP_LOGI("adc_voltmeter_external_command_sensor", "Voltmetro: Inviato comando di chiusura al motorino della finestra (comando ricevuto dal telecomando o dal sensore pioggia)");
  });
  automation_id_10->add_actions({fan_turnonaction_id_2, lambdaaction_id_8});
  esp32_esp32internalgpiopin_id = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id->set_pin(::GPIO_NUM_33);
  esp32_esp32internalgpiopin_id->set_inverted(false);
  esp32_esp32internalgpiopin_id->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id->set_flags(gpio::Flags::FLAG_INPUT);
  adc_voltmeter_external_command_sensor->set_pin(esp32_esp32internalgpiopin_id);
  adc_voltmeter_external_command_sensor->set_output_raw(false);
  adc_voltmeter_external_command_sensor->set_sample_count(1);
  adc_voltmeter_external_command_sensor->set_autorange(true);
  adc_voltmeter_external_command_sensor->set_channel1(::ADC1_CHANNEL_5);
  // globals:
  //   id: motor_running
  //   type: bool
  //   restore_value: true
  //   initial_value: 'false'
  motor_running = new globals::RestoringGlobalsComponent<bool>(false);
  motor_running->set_component_source("globals");
  App.register_component(motor_running);
  motor_running->set_name_hash(4184126225UL);
  // globals:
  //   id: motor_direction_forward
  //   type: bool
  //   restore_value: false
  //   initial_value: 'true'
  motor_direction_forward = new globals::GlobalsComponent<bool>(true);
  motor_direction_forward->set_component_source("globals");
  App.register_component(motor_direction_forward);
  // globals:
  //   id: hysteresis_triggered_open
  //   type: bool
  //   restore_value: true
  //   initial_value: 'false'
  hysteresis_triggered_open = new globals::RestoringGlobalsComponent<bool>(false);
  hysteresis_triggered_open->set_component_source("globals");
  App.register_component(hysteresis_triggered_open);
  hysteresis_triggered_open->set_name_hash(975319007);
  // globals:
  //   id: hysteresis_triggered_close
  //   type: bool
  //   restore_value: true
  //   initial_value: 'false'
  hysteresis_triggered_close = new globals::RestoringGlobalsComponent<bool>(false);
  hysteresis_triggered_close->set_component_source("globals");
  App.register_component(hysteresis_triggered_close);
  hysteresis_triggered_close->set_name_hash(1227602995);
  // globals:
  //   id: inclinaz_desiderata_norm
  //   type: float
  //   restore_value: true
  //   initial_value: '0.0'
  inclinaz_desiderata_norm = new globals::RestoringGlobalsComponent<float>(0.0);
  inclinaz_desiderata_norm->set_component_source("globals");
  App.register_component(inclinaz_desiderata_norm);
  inclinaz_desiderata_norm->set_name_hash(1501801204);
  lambdacondition_id = new LambdaCondition<float>([=](float x) -> bool {
      #line 226 "/config/esphome-finestrasoffitto.yaml"
      return motor_running->value();
  });
  lambdacondition_id_2 = new LambdaCondition<float>([=](float x) -> bool {
      #line 227 "/config/esphome-finestrasoffitto.yaml"
      return !hysteresis_triggered_close->value();
  });
  andcondition_id = new AndCondition<float>({lambdacondition_id, lambdacondition_id_2});
  ifaction_id = new IfAction<float>(andcondition_id);
  fan_turnoffaction_id = new fan::TurnOffAction<float>(fan_roof_window_motor);
  lambdaaction_id_2 = new LambdaAction<float>([=](float x) -> void {
      ESP_LOGI("main", "Accelerometro: Motore fermato (finestra completamente chiusa, beccheggio maggiore di 18\302\260)");
  });
  globals_globalvarsetaction_id = new globals::GlobalVarSetAction<globals::RestoringGlobalsComponent<bool>, float>(hysteresis_triggered_close);
  globals_globalvarsetaction_id->set_value(true);
  ifaction_id->add_then({fan_turnoffaction_id, lambdaaction_id_2, globals_globalvarsetaction_id});
  automation_id_2->add_actions({ifaction_id});
  sensor_valuerangetrigger_id_2 = new sensor::ValueRangeTrigger(pitch);
  sensor_valuerangetrigger_id_2->set_component_source("sensor");
  App.register_component(sensor_valuerangetrigger_id_2);
  sensor_valuerangetrigger_id_2->set_max(17.0f);
  automation_id_3 = new Automation<float>(sensor_valuerangetrigger_id_2);
  globals_globalvarsetaction_id_2 = new globals::GlobalVarSetAction<globals::RestoringGlobalsComponent<bool>, float>(hysteresis_triggered_close);
  globals_globalvarsetaction_id_2->set_value(false);
  automation_id_3->add_actions({globals_globalvarsetaction_id_2});
  sensor_valuerangetrigger_id_3 = new sensor::ValueRangeTrigger(pitch);
  sensor_valuerangetrigger_id_3->set_component_source("sensor");
  App.register_component(sensor_valuerangetrigger_id_3);
  sensor_valuerangetrigger_id_3->set_max(0.0f);
  automation_id_4 = new Automation<float>(sensor_valuerangetrigger_id_3);
  lambdacondition_id_3 = new LambdaCondition<float>([=](float x) -> bool {
      #line 248 "/config/esphome-finestrasoffitto.yaml"
      return motor_running->value();
  });
  lambdacondition_id_4 = new LambdaCondition<float>([=](float x) -> bool {
      #line 249 "/config/esphome-finestrasoffitto.yaml"
      return !hysteresis_triggered_open->value();
  });
  andcondition_id_2 = new AndCondition<float>({lambdacondition_id_3, lambdacondition_id_4});
  ifaction_id_2 = new IfAction<float>(andcondition_id_2);
  fan_turnoffaction_id_2 = new fan::TurnOffAction<float>(fan_roof_window_motor);
  lambdaaction_id_3 = new LambdaAction<float>([=](float x) -> void {
      ESP_LOGI("main", "Accelerometro: Motore fermato (finestra completamente aperta, beccheggio minore di 0\302\260)");
  });
  globals_globalvarsetaction_id_3 = new globals::GlobalVarSetAction<globals::RestoringGlobalsComponent<bool>, float>(hysteresis_triggered_open);
  globals_globalvarsetaction_id_3->set_value(true);
  ifaction_id_2->add_then({fan_turnoffaction_id_2, lambdaaction_id_3, globals_globalvarsetaction_id_3});
  automation_id_4->add_actions({ifaction_id_2});
  sensor_valuerangetrigger_id_4 = new sensor::ValueRangeTrigger(pitch);
  sensor_valuerangetrigger_id_4->set_component_source("sensor");
  App.register_component(sensor_valuerangetrigger_id_4);
  sensor_valuerangetrigger_id_4->set_min(1.0f);
  automation_id_5 = new Automation<float>(sensor_valuerangetrigger_id_4);
  globals_globalvarsetaction_id_4 = new globals::GlobalVarSetAction<globals::RestoringGlobalsComponent<bool>, float>(hysteresis_triggered_open);
  globals_globalvarsetaction_id_4->set_value(false);
  automation_id_5->add_actions({globals_globalvarsetaction_id_4});
  pitch->set_update_interval(1000);
  pitch->set_component_source("template.sensor");
  App.register_component(pitch);
  pitch->set_template([=]() -> optional<float> {
      #line 192 "/config/esphome-finestrasoffitto.yaml"
      float INCLINAZ_CHIUSO_FL = atof("18");
      float INCLINAZ_APERTO_FL = atof("0");
      float TOLLERANZA_CONDIZ_ARRIVO_FL = atof("0.5");
      
      float inclinaz_attuale = (atan(-1 * accel_x->state / sqrt(pow(accel_y->state, 2) + pow(accel_z->state, 2))) * 180 / PI);
       
      if (inclinaz_attuale < -20 || inclinaz_attuale > 20) {
        return pitch->state;  
      }
      
       
      if(motor_running->value() == true){
                
         
        float inclinaz_desiderata = INCLINAZ_CHIUSO_FL - (inclinaz_desiderata_norm->value() * (INCLINAZ_CHIUSO_FL - INCLINAZ_APERTO_FL));   
        ESP_LOGI("pitch", "Inclinazione attuale: %.1f°, desiderata: %.1f°", inclinaz_attuale, inclinaz_desiderata);
      
         
        if (abs(inclinaz_desiderata - inclinaz_attuale) < TOLLERANZA_CONDIZ_ARRIVO_FL) {   
            auto call = fan_roof_window_motor->turn_off();
            call.perform();        
          ESP_LOGI("pitch", "Inclinazione desiderata %.1f° raggiunta, motore fermato.", inclinaz_desiderata);
        } 
      }
      
      return inclinaz_attuale;
  });
  globals_globalvarsetaction_id_5 = new globals::GlobalVarSetAction<globals::RestoringGlobalsComponent<bool>>(motor_running);
  globals_globalvarsetaction_id_5->set_value(true);
  lambdaaction_id_9 = new LambdaAction<>([=]() -> void {
      ESP_LOGI("fan_roof_window_motor", "Motorino finestra acceso!");
  });
  automation_id_11->add_actions({globals_globalvarsetaction_id_5, lambdaaction_id_9});
  fan_fanturnofftrigger_id = new fan::FanTurnOffTrigger(fan_roof_window_motor);
  automation_id_12 = new Automation<>(fan_fanturnofftrigger_id);
  globals_globalvarsetaction_id_6 = new globals::GlobalVarSetAction<globals::RestoringGlobalsComponent<bool>>(motor_running);
  globals_globalvarsetaction_id_6->set_value(false);
  lambdaaction_id_10 = new LambdaAction<>([=]() -> void {
      ESP_LOGI("fan_roof_window_motor", "Motorino finestra spento!");
  });
  automation_id_12->add_actions({globals_globalvarsetaction_id_6, lambdaaction_id_10});
  fan_roof_window_motor->set_pin_a(motor_reverse_pin);
  fan_roof_window_motor->set_pin_b(motor_forward_pin);
  finestra_soffitto_cover->set_state_lambda([=]() -> optional<float> {
      #line 406 "/config/esphome-finestrasoffitto.yaml"
      static bool restituito_stato_iniziale_cover = false;   
      static float inclinaz_norm_precedente = 0.0;   
      float INCLINAZ_CHIUSO_FL = atof("18");
      float INCLINAZ_APERTO_FL = atof("0");
      
       
      float inclinaz_norm_attuale = (INCLINAZ_CHIUSO_FL - pitch->state) / (INCLINAZ_CHIUSO_FL - INCLINAZ_APERTO_FL);  
       
      if (isnan(inclinaz_norm_precedente)) {
        ESP_LOGW("sensor_check", "Il valore di inclinaz_norm_precedente è NaN!");
        delay(10000);
      }
      
      if (!restituito_stato_iniziale_cover) {
        ESP_LOGD("finestra_soffitto_cover", "qui");                
         
        restituito_stato_iniziale_cover = true;
        inclinaz_norm_precedente = inclinaz_norm_attuale;   
        return inclinaz_norm_attuale;
      }  
      
       
      if (motor_running->value()) {                         
      
         
        if (abs(inclinaz_norm_attuale - inclinaz_norm_precedente) < 0.02) {
          return inclinaz_norm_precedente;   
        } 
        ESP_LOGD("finestra_soffitto_cover", " %.2f, inclinaz_norm_attuale=%.2f, inclinaz_norm_precedente=%.2f", abs(inclinaz_norm_attuale - inclinaz_norm_precedente), inclinaz_norm_attuale, inclinaz_norm_precedente);                
        inclinaz_norm_precedente = inclinaz_norm_attuale;   
      
         
        if (inclinaz_norm_attuale < 0.1) {
          return 0.0;
        } else if (inclinaz_norm_attuale > 0.9) {
          return 1.0;
        }
        return inclinaz_norm_attuale;    
      
      }
      return inclinaz_norm_precedente;          
  });
  automation_id_13 = new Automation<>(finestra_soffitto_cover->get_open_trigger());
  lambdacondition_id_5 = new LambdaCondition<>([=]() -> bool {
      #line 452 "/config/esphome-finestrasoffitto.yaml"
      float INCLINAZ_APERTO_FL = atof("0");  
      return pitch->state <= INCLINAZ_APERTO_FL;   
  });
  ifaction_id_3 = new IfAction<>(lambdacondition_id_5);
  lambdaaction_id_11 = new LambdaAction<>([=]() -> void {
      ESP_LOGI("finestra_soffitto_cover", "Comando di apertura ignorato: finestra gi\303\240 completamente aperta");
  });
  ifaction_id_3->add_then({lambdaaction_id_11});
  lambdaaction_id_12 = new LambdaAction<>([=]() -> void {
      #line 461 "/config/esphome-finestrasoffitto.yaml"
      ESP_LOGI("finestra_soffitto_cover", "Posizione richiesta: Apertura completa");
      
      auto call = fan_roof_window_motor->turn_on();
      call.set_direction(FanDirection::FORWARD);        
      call.perform();
      
       
      inclinaz_desiderata_norm->value() = 1;          
  });
  ifaction_id_3->add_else({lambdaaction_id_12});
  automation_id_13->add_actions({ifaction_id_3});
  automation_id_14 = new Automation<>(finestra_soffitto_cover->get_close_trigger());
  lambdacondition_id_6 = new LambdaCondition<>([=]() -> bool {
      #line 473 "/config/esphome-finestrasoffitto.yaml"
      float INCLINAZ_CHIUSO_FL = atof("18");            
      return pitch->state >= INCLINAZ_CHIUSO_FL;   
  });
  ifaction_id_4 = new IfAction<>(lambdacondition_id_6);
  lambdaaction_id_13 = new LambdaAction<>([=]() -> void {
      ESP_LOGI("finestra_soffitto_cover", "Comando di chiusura ignorato: finestra gi\303\240 completamente chiusa");
  });
  ifaction_id_4->add_then({lambdaaction_id_13});
  lambdaaction_id_14 = new LambdaAction<>([=]() -> void {
      #line 482 "/config/esphome-finestrasoffitto.yaml"
      ESP_LOGI("finestra_soffitto_cover", "Posizione richiesta: Chiusura completa");
      
      auto call = fan_roof_window_motor->turn_on();
      call.set_direction(FanDirection::REVERSE);        
      call.perform();
      
       
      inclinaz_desiderata_norm->value() = 0;     
  });
  ifaction_id_4->add_else({lambdaaction_id_14});
  automation_id_14->add_actions({ifaction_id_4});
  automation_id_15 = new Automation<>(finestra_soffitto_cover->get_stop_trigger());
  fan_turnoffaction_id_6 = new fan::TurnOffAction<>(fan_roof_window_motor);
  lambdaaction_id_15 = new LambdaAction<>([=]() -> void {
      ESP_LOGI("finestra_soffitto_cover", "Finestra fermata manualmente");
  });
  automation_id_15->add_actions({fan_turnoffaction_id_6, lambdaaction_id_15});
  finestra_soffitto_cover->set_has_stop(true);
  automation_id_16 = new Automation<float>(finestra_soffitto_cover->get_position_trigger());
  lambdaaction_id_16 = new LambdaAction<float>([=](float pos) -> void {
      #line 498 "/config/esphome-finestrasoffitto.yaml"
      float INCLINAZ_CHIUSO_FL = atof("18");  
      float INCLINAZ_APERTO_FL = atof("0");  
      float inclinaz_desiderata = INCLINAZ_CHIUSO_FL - (pos * (INCLINAZ_CHIUSO_FL - INCLINAZ_APERTO_FL));   
      ESP_LOGI("finestra_soffitto_cover", "Posizione richiesta: %.1f (inclinazione desiderata: %.1f°)", pos, inclinaz_desiderata);
      
       
      auto call = fan_roof_window_motor->turn_on();
      if (inclinaz_desiderata > pitch->state) {
        call.set_direction(FanDirection::REVERSE);        
      } else if (inclinaz_desiderata < pitch->state) {
        call.set_direction(FanDirection::FORWARD);        
      }
      call.perform();
      
       
      inclinaz_desiderata_norm->value() = pos;          
  });
  automation_id_16->add_actions({lambdaaction_id_16});
  finestra_soffitto_cover->set_has_position(true);
  finestra_soffitto_cover->set_optimistic(false);
  finestra_soffitto_cover->set_assumed_state(false);
  finestra_soffitto_cover->set_restore_mode(template_::COVER_RESTORE);
  finestra_soffitto_cover->set_has_position(true);
  // =========== AUTO GENERATED CODE END ============
  App.setup();
}

void loop() {
  App.loop();
}
