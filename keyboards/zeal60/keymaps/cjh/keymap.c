// cjh's ANSI layout for Zeal60
#include QMK_KEYBOARD_H
#include "rgb_backlight.h"

#define FN3_CAP LT(3, KC_CAPS)

// Keymap layers
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

// macOS Base Layer
[0] = LAYOUT_60_ansi(
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
    KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT,
    MO(1),   KC_LALT, KC_LGUI,                            KC_SPC,                             KC_RGUI, KC_RALT, MO(1),   MO(4)),

// macOS Fn Layer (Fn1)
[1] = LAYOUT_60_ansi(
    KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,
    KC_TRNS, KC_MRWD, KC_MPLY, KC_MFFD, KC_P7,   KC_P8,   KC_P9,   KC_HOME, KC_UP,   KC_END,  KC_PGUP, KC_SLCK, KC_PAUS, KC_TRNS,
    KC_TRNS, KC_MUTE, KC_VOLD, KC_VOLU, KC_P4,   KC_P5,   KC_P6,   KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_MPRV, KC_MPLY, KC_MNXT, KC_P1,   KC_P2,   KC_P3,   KC_PDOT, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS,                            KC_P0,                              KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

// Windows Base Layer
[2] = LAYOUT_60_ansi(
    KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
    FN3_CAP, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT,
    KC_LCTL, KC_LGUI, KC_LALT,                            KC_SPC,                             KC_RGUI, KC_RCTL, MO(3),   MO(4)),

// Windows Fn Layer (Fn2)
[3] = LAYOUT_60_ansi(
    KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,
    KC_TRNS, KC_MPRV, KC_MPLY, KC_MNXT, KC_P7,   KC_P8,   KC_P9,   KC_HOME, KC_UP,   KC_END,  KC_PGUP, KC_SLCK, KC_PAUS, KC_TRNS,
    KC_TRNS, KC_MUTE, KC_VOLD, KC_VOLU, KC_P4,   KC_P5,   KC_P6,   KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_MRWD, KC_MPLY, KC_MFFD, KC_P1,   KC_P2,   KC_P3,   KC_PDOT, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS,                            KC_P0,                              KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

// Fn3 Layer (Zeal60 Configuration)
[4] = LAYOUT_60_ansi(
    KC_TRNS, EF_DEC,  EF_INC,  H1_DEC,  H1_INC,  H2_DEC,  H2_INC,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, BR_DEC,  BR_INC,  KC_POWER,
    KC_TRNS, KC_TRNS, KC_TRNS, S1_DEC,  S1_INC,  S2_DEC,  S2_INC,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, ES_DEC,  ES_INC,  KC_TRNS,
    KC_CAPS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, TG_NKRO, KC_TRNS, KC_TRNS, DF(0),   DF(2),            KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS,                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

};

// TODO: Change to default_layer_state_set_user when available...
uint32_t default_layer_state_set_kb(uint32_t state) {
    switch (biton32(state))
    {
        case 0:
            backlight_effect_set(3);
            break;
        case 2:
            backlight_effect_set(6);
            break;
        default:
            break;
    }
    return state;
}
