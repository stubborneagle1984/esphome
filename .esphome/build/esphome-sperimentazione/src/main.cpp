// Auto generated code by esphome
// ========== AUTO GENERATED INCLUDE BLOCK BEGIN ===========
#include "esphome.h"
using namespace esphome;
using std::isnan;
using std::min;
using std::max;
using namespace text_sensor;
using namespace fan;
logger::Logger *logger_logger;
web_server_base::WebServerBase *web_server_base_webserverbase;
captive_portal::CaptivePortal *captive_portal_captiveportal;
wifi::WiFiComponent *wifi_wificomponent;
mdns::MDNSComponent *mdns_mdnscomponent;
ota::OTAComponent *ota_otacomponent;
api::APIServer *api_apiserver;
using namespace api;
using namespace sensor;
using namespace i2c;
i2c::ArduinoI2CBus *i2c_arduinoi2cbus;
preferences::IntervalSyncer *preferences_intervalsyncer;
debug::DebugComponent *debug_debugcomponent;
text_sensor::TextSensor *text_sensor_textsensor;
text_sensor::TextSensor *text_sensor_textsensor_2;
sensor::Sensor *sensor_sensor;
sensor::Sensor *sensor_sensor_2;
sensor::Sensor *sensor_sensor_3;
wifi_signal::WiFiSignalSensor *wifi_signal_db;
copy::CopySensor *copy_copysensor;
sensor::LambdaFilter *sensor_lambdafilter;
mpu6050::MPU6050Component *mpu6050_xyz;
sensor::Sensor *accel_x;
sensor::OffsetFilter *sensor_offsetfilter;
sensor::Sensor *accel_y;
sensor::OffsetFilter *sensor_offsetfilter_2;
sensor::Sensor *accel_z;
sensor::OffsetFilter *sensor_offsetfilter_3;
template_::TemplateSensor *roll;
template_::TemplateSensor *pitch;
ina219::INA219Component *ina219_ina219component;
sensor::Sensor *ina219_bus_voltage;
sensor::Sensor *ina219_shunt_voltage;
sensor::Sensor *ina219_current;
sensor::ValueRangeTrigger *sensor_valuerangetrigger;
Automation<float> *automation;
adc::ADCSensor *adc_voltmeter_external_command_sensor;
sensor::ValueRangeTrigger *sensor_valuerangetrigger_3;
Automation<float> *automation_3;
using namespace output;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_2;
ledc::LEDCOutput *motor_reverse_pin;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_3;
ledc::LEDCOutput *motor_forward_pin;
hbridge::HBridgeFan *roof_window_motor;
fan::FanTurnOnTrigger *fan_fanturnontrigger;
Automation<> *automation_6;
LambdaAction<> *lambdaaction_6;
fan::FanTurnOffTrigger *fan_fanturnofftrigger;
Automation<> *automation_7;
LambdaAction<> *lambdaaction_7;
fan::TurnOffAction<float> *fan_turnoffaction;
LambdaAction<float> *lambdaaction;
sensor::ValueRangeTrigger *sensor_valuerangetrigger_2;
Automation<float> *automation_2;
fan::TurnOffAction<float> *fan_turnoffaction_2;
LambdaAction<float> *lambdaaction_2;
sensor::Sensor *ina219_power;
fan::TurnOffAction<float> *fan_turnoffaction_3;
LambdaAction<float> *lambdaaction_3;
sensor::ValueRangeTrigger *sensor_valuerangetrigger_4;
Automation<float> *automation_4;
fan::TurnOnAction<float> *fan_turnonaction;
LambdaAction<float> *lambdaaction_4;
sensor::ValueRangeTrigger *sensor_valuerangetrigger_5;
Automation<float> *automation_5;
fan::TurnOnAction<float> *fan_turnonaction_2;
LambdaAction<float> *lambdaaction_5;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin;
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
  //   name: esphome-sperimentazione
  //   friendly_name: esphome-sperimentazione
  //   build_path: build/esphome-sperimentazione
  //   area: ''
  //   platformio_options: {}
  //   includes: []
  //   libraries: []
  //   name_add_mac_suffix: false
  //   min_version: 2024.2.0
  App.pre_setup("esphome-sperimentazione", "esphome-sperimentazione", "", "", __DATE__ ", " __TIME__, false);
  // text_sensor:
  // fan:
  // logger:
  //   level: DEBUG
  //   logs:
  //     mpu6050: INFO
  //     sensor: INFO
  //     roof_window_motor: INFO
  //   id: logger_logger
  //   baud_rate: 115200
  //   tx_buffer_size: 512
  //   deassert_rts_dtr: false
  //   hardware_uart: UART0
  logger_logger = new logger::Logger(115200, 512);
  logger_logger->set_uart_selection(logger::UART_SELECTION_UART0);
  logger_logger->pre_setup();
  logger_logger->set_log_level("mpu6050", ESPHOME_LOG_LEVEL_INFO);
  logger_logger->set_log_level("sensor", ESPHOME_LOG_LEVEL_INFO);
  logger_logger->set_log_level("roof_window_motor", ESPHOME_LOG_LEVEL_INFO);
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
  //     static_ip: 10.4.1.133
  //     gateway: 10.4.1.254
  //     subnet: 255.255.255.0
  //     dns1: 0.0.0.0
  //     dns2: 0.0.0.0
  //   ap:
  //     ssid: Sperimentazione Fallback Hotspot
  //     password: i0o3Np3l4RHM
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
  //   use_address: 10.4.1.133
  wifi_wificomponent = new wifi::WiFiComponent();
  wifi_wificomponent->set_use_address("10.4.1.133");
  {
  wifi::WiFiAP wifi_wifiap_2 = wifi::WiFiAP();
  wifi_wifiap_2.set_ssid("HouseOfTheEagle2");
  wifi_wifiap_2.set_password("marmellata1949");
  wifi_wifiap_2.set_manual_ip(wifi::ManualIP{
      .static_ip = network::IPAddress(10, 4, 1, 133),
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
  wifi_wifiap.set_ssid("Sperimentazione Fallback Hotspot");
  wifi_wifiap.set_password("i0o3Np3l4RHM");
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
  //     key: LtoDrvXpGwb/qTI5bd85qtgAsw9jXukFGOvZmWj2jfQ=
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
  api_apiserver->set_noise_psk({46, 218, 3, 174, 245, 233, 27, 6, 255, 169, 50, 57, 109, 223, 57, 170, 216, 0, 179, 15, 99, 94, 233, 5, 24, 235, 217, 153, 104, 246, 141, 244});
  // sensor:
  // i2c:
  //   frequency: 50000.0
  //   id: i2c_arduinoi2cbus
  //   sda: 21
  //   scl: 22
  //   scan: true
  i2c_arduinoi2cbus = new i2c::ArduinoI2CBus();
  i2c_arduinoi2cbus->set_component_source("i2c");
  App.register_component(i2c_arduinoi2cbus);
  i2c_arduinoi2cbus->set_sda_pin(21);
  i2c_arduinoi2cbus->set_scl_pin(22);
  i2c_arduinoi2cbus->set_frequency(50000);
  i2c_arduinoi2cbus->set_scan(true);
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
  // debug:
  //   update_interval: 5s
  //   id: debug_debugcomponent
  debug_debugcomponent = new debug::DebugComponent();
  debug_debugcomponent->set_update_interval(5000);
  debug_debugcomponent->set_component_source("debug");
  App.register_component(debug_debugcomponent);
  // text_sensor.debug:
  //   platform: debug
  //   device:
  //     name: Device Info
  //     disabled_by_default: false
  //     id: text_sensor_textsensor
  //     icon: mdi:chip
  //     entity_category: diagnostic
  //   reset_reason:
  //     name: Reset Reason
  //     disabled_by_default: false
  //     id: text_sensor_textsensor_2
  //     icon: mdi:restart
  //     entity_category: diagnostic
  //   debug_id: debug_debugcomponent
  text_sensor_textsensor = new text_sensor::TextSensor();
  App.register_text_sensor(text_sensor_textsensor);
  text_sensor_textsensor->set_name("Device Info");
  text_sensor_textsensor->set_object_id("device_info");
  text_sensor_textsensor->set_disabled_by_default(false);
  text_sensor_textsensor->set_icon("mdi:chip");
  text_sensor_textsensor->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  debug_debugcomponent->set_device_info_sensor(text_sensor_textsensor);
  text_sensor_textsensor_2 = new text_sensor::TextSensor();
  App.register_text_sensor(text_sensor_textsensor_2);
  text_sensor_textsensor_2->set_name("Reset Reason");
  text_sensor_textsensor_2->set_object_id("reset_reason");
  text_sensor_textsensor_2->set_disabled_by_default(false);
  text_sensor_textsensor_2->set_icon("mdi:restart");
  text_sensor_textsensor_2->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  debug_debugcomponent->set_reset_reason_sensor(text_sensor_textsensor_2);
  // sensor.debug:
  //   platform: debug
  //   free:
  //     name: Heap Free
  //     disabled_by_default: false
  //     id: sensor_sensor
  //     force_update: false
  //     unit_of_measurement: B
  //     icon: mdi:counter
  //     accuracy_decimals: 0
  //     entity_category: diagnostic
  //   block:
  //     name: Heap Max Block
  //     disabled_by_default: false
  //     id: sensor_sensor_2
  //     force_update: false
  //     unit_of_measurement: B
  //     icon: mdi:counter
  //     accuracy_decimals: 0
  //     entity_category: diagnostic
  //   loop_time:
  //     name: Loop Time
  //     disabled_by_default: false
  //     id: sensor_sensor_3
  //     force_update: false
  //     unit_of_measurement: ms
  //     icon: mdi:timer-outline
  //     accuracy_decimals: 0
  //     entity_category: diagnostic
  //   debug_id: debug_debugcomponent
  sensor_sensor = new sensor::Sensor();
  App.register_sensor(sensor_sensor);
  sensor_sensor->set_name("Heap Free");
  sensor_sensor->set_object_id("heap_free");
  sensor_sensor->set_disabled_by_default(false);
  sensor_sensor->set_icon("mdi:counter");
  sensor_sensor->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  sensor_sensor->set_unit_of_measurement("B");
  sensor_sensor->set_accuracy_decimals(0);
  sensor_sensor->set_force_update(false);
  debug_debugcomponent->set_free_sensor(sensor_sensor);
  sensor_sensor_2 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_2);
  sensor_sensor_2->set_name("Heap Max Block");
  sensor_sensor_2->set_object_id("heap_max_block");
  sensor_sensor_2->set_disabled_by_default(false);
  sensor_sensor_2->set_icon("mdi:counter");
  sensor_sensor_2->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  sensor_sensor_2->set_unit_of_measurement("B");
  sensor_sensor_2->set_accuracy_decimals(0);
  sensor_sensor_2->set_force_update(false);
  debug_debugcomponent->set_block_sensor(sensor_sensor_2);
  sensor_sensor_3 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_3);
  sensor_sensor_3->set_name("Loop Time");
  sensor_sensor_3->set_object_id("loop_time");
  sensor_sensor_3->set_disabled_by_default(false);
  sensor_sensor_3->set_icon("mdi:timer-outline");
  sensor_sensor_3->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  sensor_sensor_3->set_unit_of_measurement("ms");
  sensor_sensor_3->set_accuracy_decimals(0);
  sensor_sensor_3->set_force_update(false);
  debug_debugcomponent->set_loop_time_sensor(sensor_sensor_3);
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
      #line 82 "/config/esphome-sperimentazione-supporto.yaml"
      return min(max(2 * (x + 100.0), 0.0), 100.0);
  });
  copy_copysensor->set_filters({sensor_lambdafilter});
  copy_copysensor->set_component_source("copy.sensor");
  App.register_component(copy_copysensor);
  copy_copysensor->set_source(wifi_signal_db);
  // sensor.mpu6050:
  //   platform: mpu6050
  //   address: 0x68
  //   update_interval: 250ms
  //   id: mpu6050_xyz
  //   accel_x:
  //     name: accel X
  //     id: accel_x
  //     filters:
  //     - offset: -0.45
  //       type_id: sensor_offsetfilter
  //     disabled_by_default: false
  //     force_update: false
  //     unit_of_measurement: m/s²
  //     icon: mdi:briefcase-download
  //     accuracy_decimals: 2
  //     state_class: measurement
  //   accel_y:
  //     name: accel Y
  //     id: accel_y
  //     filters:
  //     - offset: -0.1
  //       type_id: sensor_offsetfilter_2
  //     disabled_by_default: false
  //     force_update: false
  //     unit_of_measurement: m/s²
  //     icon: mdi:briefcase-download
  //     accuracy_decimals: 2
  //     state_class: measurement
  //   accel_z:
  //     id: accel_z
  //     name: accel z
  //     filters:
  //     - offset: 0.9
  //       type_id: sensor_offsetfilter_3
  //     disabled_by_default: false
  //     force_update: false
  //     unit_of_measurement: m/s²
  //     icon: mdi:briefcase-download
  //     accuracy_decimals: 2
  //     state_class: measurement
  //   i2c_id: i2c_arduinoi2cbus
  mpu6050_xyz = new mpu6050::MPU6050Component();
  mpu6050_xyz->set_update_interval(250);
  mpu6050_xyz->set_component_source("mpu6050.sensor");
  App.register_component(mpu6050_xyz);
  mpu6050_xyz->set_i2c_bus(i2c_arduinoi2cbus);
  mpu6050_xyz->set_i2c_address(0x68);
  accel_x = new sensor::Sensor();
  App.register_sensor(accel_x);
  accel_x->set_name("accel X");
  accel_x->set_object_id("accel_x");
  accel_x->set_disabled_by_default(false);
  accel_x->set_icon("mdi:briefcase-download");
  accel_x->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  accel_x->set_unit_of_measurement("m/s\302\262");
  accel_x->set_accuracy_decimals(2);
  accel_x->set_force_update(false);
  sensor_offsetfilter = new sensor::OffsetFilter(-0.45f);
  accel_x->set_filters({sensor_offsetfilter});
  mpu6050_xyz->set_accel_x_sensor(accel_x);
  accel_y = new sensor::Sensor();
  App.register_sensor(accel_y);
  accel_y->set_name("accel Y");
  accel_y->set_object_id("accel_y");
  accel_y->set_disabled_by_default(false);
  accel_y->set_icon("mdi:briefcase-download");
  accel_y->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  accel_y->set_unit_of_measurement("m/s\302\262");
  accel_y->set_accuracy_decimals(2);
  accel_y->set_force_update(false);
  sensor_offsetfilter_2 = new sensor::OffsetFilter(-0.1f);
  accel_y->set_filters({sensor_offsetfilter_2});
  mpu6050_xyz->set_accel_y_sensor(accel_y);
  accel_z = new sensor::Sensor();
  App.register_sensor(accel_z);
  accel_z->set_name("accel z");
  accel_z->set_object_id("accel_z");
  accel_z->set_disabled_by_default(false);
  accel_z->set_icon("mdi:briefcase-download");
  accel_z->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  accel_z->set_unit_of_measurement("m/s\302\262");
  accel_z->set_accuracy_decimals(2);
  accel_z->set_force_update(false);
  sensor_offsetfilter_3 = new sensor::OffsetFilter(0.9f);
  accel_z->set_filters({sensor_offsetfilter_3});
  mpu6050_xyz->set_accel_z_sensor(accel_z);
  // sensor.template:
  //   platform: template
  //   id: roll
  //   name: pan1roll
  //   accuracy_decimals: 1
  //   lambda: !lambda |-
  //     return  (atan( id(accel_y).state / sqrt( pow( id(accel_x).state , 2) + pow( id(accel_z).state , 2) ) ) * 180 / PI) ;
  //   update_interval: 250ms
  //   disabled_by_default: false
  //   force_update: false
  roll = new template_::TemplateSensor();
  App.register_sensor(roll);
  roll->set_name("pan1roll");
  roll->set_object_id("pan1roll");
  roll->set_disabled_by_default(false);
  roll->set_accuracy_decimals(1);
  roll->set_force_update(false);
  roll->set_update_interval(250);
  roll->set_component_source("template.sensor");
  App.register_component(roll);
  roll->set_template([=]() -> optional<float> {
      #line 119 "/config/esphome-sperimentazione-supporto.yaml"
      return  (atan( accel_y->state / sqrt( pow( accel_x->state , 2) + pow( accel_z->state , 2) ) ) * 180 / PI) ;
  });
  // sensor.template:
  //   platform: template
  //   id: pitch
  //   name: pan1pitch
  //   accuracy_decimals: 1
  //   lambda: !lambda |-
  //     return  (atan(-1 * id(accel_x).state / sqrt(pow(id(accel_y).state, 2) + pow(id(accel_z).state, 2))) * 180 / PI);
  //   update_interval: 250ms
  //   disabled_by_default: false
  //   force_update: false
  pitch = new template_::TemplateSensor();
  App.register_sensor(pitch);
  pitch->set_name("pan1pitch");
  pitch->set_object_id("pan1pitch");
  pitch->set_disabled_by_default(false);
  pitch->set_accuracy_decimals(1);
  pitch->set_force_update(false);
  pitch->set_update_interval(250);
  pitch->set_component_source("template.sensor");
  App.register_component(pitch);
  pitch->set_template([=]() -> optional<float> {
      #line 127 "/config/esphome-sperimentazione-supporto.yaml"
      return  (atan(-1 * accel_x->state / sqrt(pow(accel_y->state, 2) + pow(accel_z->state, 2))) * 180 / PI);
  });
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
  //           id: roof_window_motor
  //         type_id: fan_turnoffaction
  //       - logger.log:
  //           format: 'Amperometro (%f A): Inviato comando di spegnimento al motorino della
  //             finestra (apertura massima raggiunta). '
  //           args:
  //           - !lambda |-
  //             id(ina219_current).state
  //           level: INFO
  //           tag: ina219_current
  //         type_id: lambdaaction
  //       automation_id: automation
  //       trigger_id: sensor_valuerangetrigger
  //     - below: -0.35
  //       then:
  //       - fan.turn_off:
  //           id: roof_window_motor
  //         type_id: fan_turnoffaction_2
  //       - logger.log:
  //           format: 'Amperometro (%f A): Inviato comando di spegnimento al motorino della
  //             finestra (posizione di chiusura raggiunta)'
  //           args:
  //           - !lambda |-
  //             id(ina219_current).state
  //           level: INFO
  //           tag: ina219_current
  //         type_id: lambdaaction_2
  //       automation_id: automation_2
  //       trigger_id: sensor_valuerangetrigger_2
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
  //   update_interval: 200ms
  //   id: ina219_ina219component
  //   i2c_id: i2c_arduinoi2cbus
  ina219_ina219component = new ina219::INA219Component();
  ina219_ina219component->set_update_interval(200);
  ina219_ina219component->set_component_source("ina219.sensor");
  App.register_component(ina219_ina219component);
  ina219_ina219component->set_i2c_bus(i2c_arduinoi2cbus);
  ina219_ina219component->set_i2c_address(0x40);
  ina219_ina219component->set_shunt_resistance_ohm(0.1f);
  ina219_ina219component->set_max_current_a(0.5f);
  ina219_ina219component->set_max_voltage_v(2.0f);
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
  ina219_ina219component->set_bus_voltage_sensor(ina219_bus_voltage);
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
  ina219_ina219component->set_shunt_voltage_sensor(ina219_shunt_voltage);
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
  sensor_valuerangetrigger = new sensor::ValueRangeTrigger(ina219_current);
  sensor_valuerangetrigger->set_component_source("sensor");
  App.register_component(sensor_valuerangetrigger);
  sensor_valuerangetrigger->set_min(0.35f);
  automation = new Automation<float>(sensor_valuerangetrigger);
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
  //     id: esp32_esp32internalgpiopin
  //     inverted: false
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
  //         id: roof_window_motor
  //       type_id: fan_turnoffaction_3
  //     - logger.log:
  //         format: 'Voltmetro: Inviato comando di stop al motorino della finestra (comando
  //           ricevuto dal telecomando)'
  //         level: INFO
  //         tag: adc_voltmeter_external_command_sensor
  //         args: []
  //       type_id: lambdaaction_3
  //     automation_id: automation_3
  //     trigger_id: sensor_valuerangetrigger_3
  //   - above: 1.0
  //     below: 1.5
  //     then:
  //     - fan.turn_on:
  //         id: roof_window_motor
  //         direction: FORWARD
  //       type_id: fan_turnonaction
  //     - logger.log:
  //         format: 'Voltmetro: Inviato comando di apertura al motorino della finestra (comando
  //           ricevuto dal telecomando?)'
  //         level: INFO
  //         tag: adc_voltmeter_external_command_sensor
  //         args: []
  //       type_id: lambdaaction_4
  //     automation_id: automation_4
  //     trigger_id: sensor_valuerangetrigger_4
  //   - above: 2.5
  //     then:
  //     - fan.turn_on:
  //         id: roof_window_motor
  //         direction: REVERSE
  //       type_id: fan_turnonaction_2
  //     - logger.log:
  //         format: 'Voltmetro: Inviato comando di chiusura al motorino della finestra (comando
  //           ricevuto dal telecomando o dal sensore pioggia)'
  //         level: INFO
  //         tag: adc_voltmeter_external_command_sensor
  //         args: []
  //       type_id: lambdaaction_5
  //     automation_id: automation_5
  //     trigger_id: sensor_valuerangetrigger_5
  //   disabled_by_default: false
  //   force_update: false
  //   raw: false
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
  sensor_valuerangetrigger_3 = new sensor::ValueRangeTrigger(adc_voltmeter_external_command_sensor);
  sensor_valuerangetrigger_3->set_component_source("sensor");
  App.register_component(sensor_valuerangetrigger_3);
  sensor_valuerangetrigger_3->set_max(0.9f);
  automation_3 = new Automation<float>(sensor_valuerangetrigger_3);
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
  //     id: esp32_esp32internalgpiopin_2
  //     inverted: false
  //     ignore_strapping_warning: false
  //     drive_strength: 20.0
  //   id: motor_reverse_pin
  //   zero_means_zero: false
  //   frequency: 1000.0
  esp32_esp32internalgpiopin_2 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_2->set_pin(::GPIO_NUM_26);
  esp32_esp32internalgpiopin_2->set_inverted(false);
  esp32_esp32internalgpiopin_2->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_2->set_flags(gpio::Flags::FLAG_OUTPUT);
  motor_reverse_pin = new ledc::LEDCOutput(esp32_esp32internalgpiopin_2);
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
  //     id: esp32_esp32internalgpiopin_3
  //     inverted: false
  //     ignore_strapping_warning: false
  //     drive_strength: 20.0
  //   id: motor_forward_pin
  //   zero_means_zero: false
  //   frequency: 1000.0
  esp32_esp32internalgpiopin_3 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_3->set_pin(::GPIO_NUM_27);
  esp32_esp32internalgpiopin_3->set_inverted(false);
  esp32_esp32internalgpiopin_3->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_3->set_flags(gpio::Flags::FLAG_OUTPUT);
  motor_forward_pin = new ledc::LEDCOutput(esp32_esp32internalgpiopin_3);
  motor_forward_pin->set_component_source("ledc.output");
  App.register_component(motor_forward_pin);
  motor_forward_pin->set_zero_means_zero(false);
  motor_forward_pin->set_frequency(1000.0f);
  // fan.hbridge:
  //   platform: hbridge
  //   id: roof_window_motor
  //   name: Motorino finestra soffitto
  //   pin_a: motor_forward_pin
  //   pin_b: motor_reverse_pin
  //   decay_mode: SLOW
  //   on_turn_on:
  //   - then:
  //     - logger.log:
  //         format: Motorino finestra acceso!
  //         level: INFO
  //         tag: roof_window_motor
  //         args: []
  //       type_id: lambdaaction_6
  //     automation_id: automation_6
  //     trigger_id: fan_fanturnontrigger
  //   on_turn_off:
  //   - then:
  //     - logger.log:
  //         format: Motorino finestra spento!
  //         level: INFO
  //         tag: roof_window_motor
  //         args: []
  //       type_id: lambdaaction_7
  //     automation_id: automation_7
  //     trigger_id: fan_fanturnofftrigger
  //   disabled_by_default: false
  //   restore_mode: ALWAYS_OFF
  //   speed_count: 100
  roof_window_motor = new hbridge::HBridgeFan(100, hbridge::DECAY_MODE_SLOW);
  roof_window_motor->set_component_source("hbridge.fan");
  App.register_component(roof_window_motor);
  App.register_fan(roof_window_motor);
  roof_window_motor->set_name("Motorino finestra soffitto");
  roof_window_motor->set_object_id("motorino_finestra_soffitto");
  roof_window_motor->set_disabled_by_default(false);
  roof_window_motor->set_restore_mode(fan::FanRestoreMode::ALWAYS_OFF);
  fan_fanturnontrigger = new fan::FanTurnOnTrigger(roof_window_motor);
  automation_6 = new Automation<>(fan_fanturnontrigger);
  lambdaaction_6 = new LambdaAction<>([=]() -> void {
      ESP_LOGI("roof_window_motor", "Motorino finestra acceso!");
  });
  automation_6->add_actions({lambdaaction_6});
  fan_fanturnofftrigger = new fan::FanTurnOffTrigger(roof_window_motor);
  automation_7 = new Automation<>(fan_fanturnofftrigger);
  lambdaaction_7 = new LambdaAction<>([=]() -> void {
      ESP_LOGI("roof_window_motor", "Motorino finestra spento!");
  });
  automation_7->add_actions({lambdaaction_7});
  roof_window_motor->set_pin_a(motor_forward_pin);
  roof_window_motor->set_pin_b(motor_reverse_pin);
  // socket:
  //   implementation: bsd_sockets
  // network:
  //   enable_ipv6: false
  fan_turnoffaction = new fan::TurnOffAction<float>(roof_window_motor);
  lambdaaction = new LambdaAction<float>([=](float x) -> void {
      ESP_LOGI("ina219_current", "Amperometro (%f A): Inviato comando di spegnimento al motorino della finestra (apertura massima raggiunta). ", ina219_current->state);
  });
  automation->add_actions({fan_turnoffaction, lambdaaction});
  sensor_valuerangetrigger_2 = new sensor::ValueRangeTrigger(ina219_current);
  sensor_valuerangetrigger_2->set_component_source("sensor");
  App.register_component(sensor_valuerangetrigger_2);
  sensor_valuerangetrigger_2->set_max(-0.35f);
  automation_2 = new Automation<float>(sensor_valuerangetrigger_2);
  fan_turnoffaction_2 = new fan::TurnOffAction<float>(roof_window_motor);
  lambdaaction_2 = new LambdaAction<float>([=](float x) -> void {
      ESP_LOGI("ina219_current", "Amperometro (%f A): Inviato comando di spegnimento al motorino della finestra (posizione di chiusura raggiunta)", ina219_current->state);
  });
  automation_2->add_actions({fan_turnoffaction_2, lambdaaction_2});
  ina219_ina219component->set_current_sensor(ina219_current);
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
  ina219_ina219component->set_power_sensor(ina219_power);
  fan_turnoffaction_3 = new fan::TurnOffAction<float>(roof_window_motor);
  lambdaaction_3 = new LambdaAction<float>([=](float x) -> void {
      ESP_LOGI("adc_voltmeter_external_command_sensor", "Voltmetro: Inviato comando di stop al motorino della finestra (comando ricevuto dal telecomando)");
  });
  automation_3->add_actions({fan_turnoffaction_3, lambdaaction_3});
  sensor_valuerangetrigger_4 = new sensor::ValueRangeTrigger(adc_voltmeter_external_command_sensor);
  sensor_valuerangetrigger_4->set_component_source("sensor");
  App.register_component(sensor_valuerangetrigger_4);
  sensor_valuerangetrigger_4->set_min(1.0f);
  sensor_valuerangetrigger_4->set_max(1.5f);
  automation_4 = new Automation<float>(sensor_valuerangetrigger_4);
  fan_turnonaction = new fan::TurnOnAction<float>(roof_window_motor);
  fan_turnonaction->set_direction(fan::FanDirection::FORWARD);
  lambdaaction_4 = new LambdaAction<float>([=](float x) -> void {
      ESP_LOGI("adc_voltmeter_external_command_sensor", "Voltmetro: Inviato comando di apertura al motorino della finestra (comando ricevuto dal telecomando?)");
  });
  automation_4->add_actions({fan_turnonaction, lambdaaction_4});
  sensor_valuerangetrigger_5 = new sensor::ValueRangeTrigger(adc_voltmeter_external_command_sensor);
  sensor_valuerangetrigger_5->set_component_source("sensor");
  App.register_component(sensor_valuerangetrigger_5);
  sensor_valuerangetrigger_5->set_min(2.5f);
  automation_5 = new Automation<float>(sensor_valuerangetrigger_5);
  fan_turnonaction_2 = new fan::TurnOnAction<float>(roof_window_motor);
  fan_turnonaction_2->set_direction(fan::FanDirection::REVERSE);
  lambdaaction_5 = new LambdaAction<float>([=](float x) -> void {
      ESP_LOGI("adc_voltmeter_external_command_sensor", "Voltmetro: Inviato comando di chiusura al motorino della finestra (comando ricevuto dal telecomando o dal sensore pioggia)");
  });
  automation_5->add_actions({fan_turnonaction_2, lambdaaction_5});
  esp32_esp32internalgpiopin = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin->set_pin(::GPIO_NUM_33);
  esp32_esp32internalgpiopin->set_inverted(false);
  esp32_esp32internalgpiopin->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin->set_flags(gpio::Flags::FLAG_INPUT);
  adc_voltmeter_external_command_sensor->set_pin(esp32_esp32internalgpiopin);
  adc_voltmeter_external_command_sensor->set_output_raw(false);
  adc_voltmeter_external_command_sensor->set_autorange(true);
  adc_voltmeter_external_command_sensor->set_channel1(::ADC1_CHANNEL_5);
  // =========== AUTO GENERATED CODE END ============
  App.setup();
}

void loop() {
  App.loop();
}
