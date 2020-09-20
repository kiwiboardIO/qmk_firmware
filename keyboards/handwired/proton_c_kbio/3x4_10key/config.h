#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x2009
#define DEVICE_VER      0x0001
#define MANUFACTURER    Kiwiboard
#define PRODUCT         3x4 Numpad Prototype
#define DESCRIPTION     3x4 grid

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 3

/* key matrix pins */
#define MATRIX_ROW_PINS { B3, B2, B1, B0 }
#define MATRIX_COL_PINS { A0, A1, A2 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

// /* number of backlight levels */
// #define BACKLIGHT_LEVELS 10

// /* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
// #define LOCKING_SUPPORT_ENABLE

// /* Locking resynchronize hack */
// #define LOCKING_RESYNC_ENABLE

// /* Encoder pins */
// #define ENCODERS_PAD_A { A2 }
// #define ENCODERS_PAD_B { A1 }
// #define ENCODER_RESOLUTION 4