// SPDX-FileCopyrightText: 2021 BlueMicro_HID_Common contributors (https://github.com/jpconstantineau/BlueMicro_HID_Common/graphs/contributors)
//
// SPDX-License-Identifier: BSD-3-Clause

  #ifdef NRF52 // includes both NRF52832_XXAA and NRF52840_XXAA 
    #define HARDWARE_DETECT_BLE_AVAILABLE
  #endif
  
  #ifdef USE_TINYUSB  
    #define HARDWARE_DETECT_USB_AVAILABLE
  #endif
