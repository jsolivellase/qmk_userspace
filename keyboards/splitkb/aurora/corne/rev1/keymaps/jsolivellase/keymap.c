#include QMK_KEYBOARD_H

enum layers { _BASE, _NUM, _SYM, _FUN, _MEDIA };

#define OSM_LGUI OSM(MOD_LGUI)
#define OSM_LALT OSM(MOD_LALT)
#define OSM_LCTL OSM(MOD_LCTL)
#define OSM_LSFT OSM(MOD_LSFT)
#define OSM_RALT OSM(MOD_RALT)

#define UNDO LCTL(KC_Z)
#define CUT LCTL(KC_X)
#define COPY LCTL(KC_C)
#define PASTE LCTL(KC_V)

#define ESC_3 LT(3, KC_ESC)
#define SPC_1 LT(1, KC_SPC)
#define ENT_2 LT(2, KC_ENT)

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT_split_3x6_3(
    //,-----------------------------------------------------.                    ,-----------------------------------------------------.
         KC_GRV,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_MINS,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        KC_CAPS,   KC_A,     KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
         KC_EQL,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_BSLS,
    //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                              ESC_3,   SPC_1,  KC_TAB,    KC_BSPC,   ENT_2,  KC_DEL
                                        //`--------------------------'  `--------------------------'

    ),
    [_NUM] = LAYOUT_split_3x6_3(
    //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        KC_TRNS,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_TRNS,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
          KC_NO,OSM_LGUI,OSM_LALT,OSM_LCTL,OSM_LSFT,OSM_RALT,                      KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT,   KC_NO, KC_TRNS,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        KC_TRNS,    UNDO,     CUT,    COPY,   PASTE, KC_LGUI,                      KC_HOME, KC_PGDN, KC_PGUP,  KC_END,   KC_NO, KC_TRNS,
    //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                            KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,   MO(4), KC_TRNS
                                        //`--------------------------'  `--------------------------'
    ),
    [_SYM] = LAYOUT_split_3x6_3(
    //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        KC_TRNS, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                      KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_TRNS,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
          KC_NO,OSM_LGUI,OSM_LALT,OSM_LCTL,OSM_LSFT,OSM_RALT,                        KC_NO, KC_LBRC, KC_RBRC,   KC_NO,   KC_NO, KC_TRNS,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        KC_TRNS,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                        KC_NO, KC_LCBR, KC_RCBR,   KC_NO,   KC_NO, KC_TRNS,
    //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                            KC_TRNS,   MO(4), KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS
                                        //`--------------------------'  `--------------------------'
    ),
    [_FUN] = LAYOUT_split_3x6_3(
    //,-----------------------------------------------------.                    ,-----------------------------------------------------.
          KC_NO,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                        KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,   KC_NO,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
          KC_NO,OSM_LGUI,OSM_LALT,OSM_LCTL,OSM_LSFT,OSM_RALT,                        KC_F5,  KC_F12,  KC_F10,  KC_F11,   KC_NO,   KC_NO,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
          KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                            KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS
                                        //`--------------------------'  `--------------------------'
    ),
    [_MEDIA] = LAYOUT_split_3x6_3(
    //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        QK_BOOT,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI,   KC_NO,   KC_NO,                      KC_MPRV, KC_MPLY, KC_MUTE, KC_MNXT, KC_VOLU,   KC_NO,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD,   KC_NO,   KC_NO,                        KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_VOLD,   KC_NO,
    //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                            KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS
                                        //`--------------------------'  `--------------------------'
    )
};
// clang-format on

#ifdef OLED_ENABLE

#    include "oled-bongocat.c"

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    return OLED_ROTATION_180;
}

static void render_layer_state(void) {
    switch (get_highest_layer(layer_state | default_layer_state)) {
        case _NUM:
            oled_write_P(PSTR("Num"), false);
            break;
        case _SYM:
            oled_write_P(PSTR("Sym"), false);
            break;
        case _FUN:
            oled_write_P(PSTR("Fun"), false);
            break;
        case _MEDIA:
            oled_write_P(PSTR("Media"), false);
            break;
        default:
            oled_write_P(PSTR("Base"), false);
            break;
    }
}

static void render_current_wpm(void) {
    static char wpn_str[10];
    sprintf(wpn_str, "WPM:%03d", get_current_wpm());
    oled_write_P(wpn_str, false);
}

static void render_mod_status(uint8_t modifiers) {
    bool gui = modifiers & MOD_MASK_GUI;
    bool alt = modifiers & MOD_MASK_ALT;
    bool ctrl  = modifiers & MOD_MASK_CTRL;
    bool shift = modifiers & MOD_MASK_SHIFT;

    if (gui) {
        oled_write_char('G', false);
    }
    else
    {
        oled_write_char(' ', false);
    }

    if (alt) {
        oled_write_char('A', false);
    }
    else
    {
        oled_write_char(' ', false);
    }

    if (ctrl) {
        oled_write_char('C', false);
    }
    else
    {
        oled_write_char(' ', false);
    }

    if (shift) {
        oled_write_char('S', false);
    }
    else
    {
        oled_write_char(' ', false);
    }
}

static void render_logo(void) {
    // clang-format off
    static const char PROGMEM crkbd_logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8f, 0x90, 0x91, 0x92, 0x93, 0x94,
        0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf, 0xb0, 0xb1, 0xb2, 0xb3, 0xb4,
        0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0xcf, 0xd0, 0xd1, 0xd2, 0xd3, 0xd4,
        0};
    // clang-format on
    oled_write_P(crkbd_logo, false);
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        render_bongocat();

        oled_set_cursor(0, 0);
        render_current_wpm();
        oled_set_cursor(0, 1);
        render_layer_state();
        oled_set_cursor(0, 2);
        render_mod_status(get_mods() | get_oneshot_mods());
    } else {
        render_logo();
    }

    return false;
}

#endif

void keyboard_pre_init_user(void) {
    // Set our LED pin as output
    setPinOutput(24);
    // Turn the LED off
    // (Due to technical reasons, high is off and low is on)
    writePinHigh(24);
}
