#pragma once

#define VIAL_KEYBOARD_UID {0x89, 0x87, 0xB7, 0x0F, 0x54, 0x23, 0xC2, 0xE8}

#define VIAL_UNLOCK_COMBO_ROWS { 0, 4 }
#define VIAL_UNLOCK_COMBO_COLS { 5, 5 }

#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_KEYPRESSES

#define DYNAMIC_KEYMAP_LAYER_COUNT 8

#define LED_CAPS_LOCK_PIN 24
#define LED_PIN_ON_STATE 0

#define TAPPING_TERM 190

#define ONESHOT_TAP_TOGGLE 2
#define ONESHOT_TIMEOUT 3000

#ifdef OLED_FONT_H
#   undef OLED_FONT_H
#   define OLED_FONT_H "keyboards/splitkb/aurora/corne/rev1/keymaps/jsolivellase/glcdfont.c"
#else
#   define OLED_FONT_H "keyboards/splitkb/aurora/corne/rev1/keymaps/jsolivellase/glcdfont.c"
#endif