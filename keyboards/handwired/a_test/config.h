// Copyright 2025 Geoff (@geoffmiller)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/* key matrix size */
#define MATRIX_ROWS 10
#define MATRIX_COLS 7

#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_TX_PIN GP0
#define SERIAL_USART_RX_PIN GP1

#define EE_HANDS
// #define MASTER_LEFT

/* Keyboard matrix assignments */
#define MATRIX_COL_PINS { GP4, GP5, GP6, GP7, GP8, GP9, GP10 }
#define MATRIX_ROW_PINS { GP11, GP12, GP13, GP14, GP15 }

#define TAPPING_TERM 201
/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

/* RGB Lighting */
// #define RGB_DI_PIN GP23

/* Trackball */
#define SPLIT_POINTING_ENABLE
#define POINTING_DEVICE_RIGHT
#define SPI_DRIVER SPID0
#define SPI_SCK_PIN GP18
#define SPI_MOSI_PIN GP19
#define SPI_MISO_PIN GP20
#define POINTING_DEVICE_CS_PIN GP21
#define ROTATIONAL_TRANSFORM_ANGLE -90 // Optional: Rotates the trackball
#define POINTING_DEVICE_INVERT_X // Optional: Inverts trackball X/Y

/* Trackball behaviors */
#define POINTING_DEVICE_AUTO_MOUSE_ENABLE
// only required if not setting mouse layer elsewhere
#define AUTO_MOUSE_DEFAULT_LAYER 3

/* Double-tap reset button for Pico */
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 1000U

#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD

