/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef SPI_PINS_H_
#define SPI_PINS_H_

/**
 * Define SPI Pins: SCK, MISO, MOSI, SS
 */
#if defined(__AVR_ATmega168__) || defined(__AVR_ATmega328__) || defined(__AVR_ATmega328P__)
  #define HAL_SCK_PIN  13
  #define HAL_MISO_PIN 12
  #define HAL_MOSI_PIN 11
  #define HAL_SS_PIN   10
#elif defined(__AVR_ATmega644__) || defined(__AVR_ATmega644P__) || defined(__AVR_ATmega644PA__) || defined(__AVR_ATmega1284P__)
  #define HAL_SCK_PIN  7
  #define HAL_MISO_PIN 6
  #define HAL_MOSI_PIN 5
  #define HAL_SS_PIN   4
#elif defined(__AVR_ATmega1280__) || defined(__AVR_ATmega2560__)
  #define HAL_SCK_PIN  52
  #define HAL_MISO_PIN 50
  #define HAL_MOSI_PIN 51
  #define HAL_SS_PIN   53
#elif defined(__AVR_AT90USB1287__) || defined(__AVR_AT90USB1286__) || defined(__AVR_AT90USB646__) || defined(__AVR_AT90USB647__)
  #if ENABLED(AT90USBxx_TEENSYPP_ASSIGNMENTS)
    // Teensy pin assignments
    #define HAL_SCK_PIN  21
    #define HAL_MISO_PIN 23
    #define HAL_MOSI_PIN 22
    #define HAL_SS_PIN   20
  #else
    // Traditional pin assignments
    #define HAL_SCK_PIN  9
    #define HAL_MISO_PIN 11
    #define HAL_MOSI_PIN 10
    #define HAL_SS_PIN   8
  #endif
#elif defined(__AVR_ATmega1281__) || defined(__AVR_ATmega2561__)
  #define HAL_SCK_PIN  10
  #define HAL_MISO_PIN 12
  #define HAL_MOSI_PIN 11
  #define HAL_SS_PIN   16
#endif


#endif /* SPI_PINS_H_ */