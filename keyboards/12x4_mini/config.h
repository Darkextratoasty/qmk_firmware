// Copyright 2023 darkextratoasty (@darkextratoasty)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

//#define RGBLIGHT_SLEEP /* If defined, the RGB lighting will be switched off when the host goes to sleep */
#define WS2812_DI_PIN GP25
#define RGBLED_NUM 10
#define WS2812_PIO_USE_PIO1
#define RGBLIGHT_LIMIT_VAL 0
#define RGBLIGHT_LAYERS
//#define WS2812_BYTE_ORDER WS2812_BYTE_ORDER_RGB

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
