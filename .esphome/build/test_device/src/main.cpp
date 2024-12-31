// Auto generated code by esphome
// ========== AUTO GENERATED INCLUDE BLOCK BEGIN ===========
#include "esphome.h"
using namespace esphome;
using std::isnan;
using std::min;
using std::max;
using namespace i2c;
i2c::ArduinoI2CBus *i2c_arduinoi2cbus;
preferences::IntervalSyncer *preferences_intervalsyncer;
#define yield() esphome::yield()
#define millis() esphome::millis()
#define micros() esphome::micros()
#define delay(x) esphome::delay(x)
#define delayMicroseconds(x) esphome::delayMicroseconds(x)
// ========== AUTO GENERATED INCLUDE BLOCK END ==========="

void setup() {
  // ========== AUTO GENERATED CODE BEGIN ===========
  // esphome:
  //   name: test_device
  //   build_path: build/test_device
  //   friendly_name: ''
  //   area: ''
  //   platformio_options: {}
  //   includes: []
  //   libraries: []
  //   name_add_mac_suffix: false
  //   min_version: 2024.2.0
  App.pre_setup("test_device", "", "", "", __DATE__ ", " __TIME__, false);
  // i2c:
  //   sda: 19
  //   scl: 22
  //   scan: true
  //   frequency: 50000.0
  //   id: i2c_arduinoi2cbus
  i2c_arduinoi2cbus = new i2c::ArduinoI2CBus();
  i2c_arduinoi2cbus->set_component_source("i2c");
  App.register_component(i2c_arduinoi2cbus);
  i2c_arduinoi2cbus->set_sda_pin(19);
  i2c_arduinoi2cbus->set_scl_pin(22);
  i2c_arduinoi2cbus->set_frequency(50000);
  i2c_arduinoi2cbus->set_scan(true);
  // esp32:
  //   board: esp32dev
  //   flash_size: 4MB
  //   framework:
  //     version: 2.0.5
  //     source: ~3.20005.0
  //     platform_version: platformio/espressif32@5.4.0
  //     type: arduino
  //   variant: ESP32
  // preferences:
  //   id: preferences_intervalsyncer
  //   flash_write_interval: 60s
  preferences_intervalsyncer = new preferences::IntervalSyncer();
  preferences_intervalsyncer->set_write_interval(60000);
  preferences_intervalsyncer->set_component_source("preferences");
  App.register_component(preferences_intervalsyncer);
  // =========== AUTO GENERATED CODE END ============
  App.setup();
}

void loop() {
  App.loop();
}
