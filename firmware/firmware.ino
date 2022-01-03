// SPDX-FileCopyrightText: 2021 BlueMicro_HID_Common contributors (https://github.com/jpconstantineau/BlueMicro_HID_Common/graphs/contributors)
//
// SPDX-License-Identifier: BSD-3-Clause

#ifdef USE_TINYUSB 
#include "Adafruit_TinyUSB.h"
#endif

void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
#if CFG_TUSB_MCU == OPT_MCU_RP2040
  Serial.print("hello RP2040");
#endif

#ifdef NRF52
  Serial.print("hello nRF52");
#endif
}

void loop() {
  // put your main code here, to run repeatedly:

}
