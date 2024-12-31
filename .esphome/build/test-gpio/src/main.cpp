// Auto generated code by esphome
// ========== AUTO GENERATED INCLUDE BLOCK BEGIN ===========
#include "esphome.h"
using namespace esphome;
using std::isnan;
using std::min;
using std::max;
using namespace switch_;
preferences::IntervalSyncer *preferences_intervalsyncer;
using namespace output;
gpio::GPIOBinaryOutput *gpio21_test;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin;
gpio::GPIOBinaryOutput *gpio22_test;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_2;
output::OutputSwitch *output_outputswitch;
output::OutputSwitch *output_outputswitch_2;
#define yield() esphome::yield()
#define millis() esphome::millis()
#define micros() esphome::micros()
#define delay(x) esphome::delay(x)
#define delayMicroseconds(x) esphome::delayMicroseconds(x)
// ========== AUTO GENERATED INCLUDE BLOCK END ==========="

void setup() {
  // ========== AUTO GENERATED CODE BEGIN ===========
  // esphome:
  //   name: test-gpio
  //   build_path: build/test-gpio
  //   friendly_name: ''
  //   area: ''
  //   platformio_options: {}
  //   includes: []
  //   libraries: []
  //   name_add_mac_suffix: false
  //   min_version: 2024.2.0
  App.pre_setup("test-gpio", "", "", "", __DATE__ ", " __TIME__, false);
  // switch:
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
  // output:
  // output.gpio:
  //   platform: gpio
  //   pin:
  //     number: 21
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
  //   id: gpio21_test
  gpio21_test = new gpio::GPIOBinaryOutput();
  gpio21_test->set_component_source("gpio.output");
  App.register_component(gpio21_test);
  esp32_esp32internalgpiopin = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin->set_pin(::GPIO_NUM_21);
  esp32_esp32internalgpiopin->set_inverted(false);
  esp32_esp32internalgpiopin->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin->set_flags(gpio::Flags::FLAG_OUTPUT);
  gpio21_test->set_pin(esp32_esp32internalgpiopin);
  // output.gpio:
  //   platform: gpio
  //   pin:
  //     number: 22
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
  //   id: gpio22_test
  gpio22_test = new gpio::GPIOBinaryOutput();
  gpio22_test->set_component_source("gpio.output");
  App.register_component(gpio22_test);
  esp32_esp32internalgpiopin_2 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_2->set_pin(::GPIO_NUM_22);
  esp32_esp32internalgpiopin_2->set_inverted(false);
  esp32_esp32internalgpiopin_2->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_2->set_flags(gpio::Flags::FLAG_OUTPUT);
  gpio22_test->set_pin(esp32_esp32internalgpiopin_2);
  // switch.output:
  //   platform: output
  //   name: Test GPIO21 High
  //   output: gpio21_test
  //   restore_mode: ALWAYS_ON
  //   disabled_by_default: false
  //   id: output_outputswitch
  output_outputswitch = new output::OutputSwitch();
  App.register_switch(output_outputswitch);
  output_outputswitch->set_name("Test GPIO21 High");
  output_outputswitch->set_object_id("test_gpio21_high");
  output_outputswitch->set_disabled_by_default(false);
  output_outputswitch->set_restore_mode(switch_::SWITCH_ALWAYS_ON);
  output_outputswitch->set_component_source("output.switch");
  App.register_component(output_outputswitch);
  output_outputswitch->set_output(gpio21_test);
  // switch.output:
  //   platform: output
  //   name: Test GPIO22 High
  //   output: gpio22_test
  //   restore_mode: ALWAYS_OFF
  //   disabled_by_default: false
  //   id: output_outputswitch_2
  output_outputswitch_2 = new output::OutputSwitch();
  App.register_switch(output_outputswitch_2);
  output_outputswitch_2->set_name("Test GPIO22 High");
  output_outputswitch_2->set_object_id("test_gpio22_high");
  output_outputswitch_2->set_disabled_by_default(false);
  output_outputswitch_2->set_restore_mode(switch_::SWITCH_ALWAYS_OFF);
  output_outputswitch_2->set_component_source("output.switch");
  App.register_component(output_outputswitch_2);
  output_outputswitch_2->set_output(gpio22_test);
  // =========== AUTO GENERATED CODE END ============
  App.setup();
}

void loop() {
  App.loop();
}
