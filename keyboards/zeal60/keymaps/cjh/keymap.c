// cjh's ANSI layout for Zeal60
#include QMK_KEYBOARD_H
#include "rgb_backlight.h"

#define MT_BSPC MT(MOD_LCTL, KC_BSPC)
#define FN4_CAP LT(4, KC_CAPS)

uint8_t previous_backlight_effect = 255;

// Keymap layers
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* macOS Base Layer
 * ┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬───────────┐
 * │  `  │  1  │  2  │  3  │  4  │  5  │  6  │  7  │  8  │  9  │  0  │  -  │  =  │    BSPC   │
 * ├─────┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬────────┤
 * │   TAB  │  Q  │  W  │  E  │  R  │  T  │  Y  │  U  │  I  │  O  │  P  │  [  │  ]  │    \   │
 * ├────────┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴────────┤
 * │   LCTL   │  A  │  S  │  D  │  F  │  G  │  H  │  J  │  K  │  L  │  ;  │  '  │     ENT    │
 * ├──────────┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴────────────┤
 * │     LSFT    │  Z  │  X  │  C  │  V  │  B  │  N  │  M  │  ,  │  .  │  /  │      RSFT     │
 * ├──────┬──────┴┬────┴──┬──┴─────┴─────┴─────┴─────┴─────┴───┬─┴─────┼─────┴─┬───────┬─────┤
 * │ MFN1 │  LALT │  LGUI │                 SPC                │  RGUI │  RALT │  TFN1 │ MFN4│
 * └──────┴───────┴───────┴────────────────────────────────────┴───────┴───────┴───────┴─────┘
 */
[0] = LAYOUT_60_ansi(
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
    KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT,
    MO(2),   KC_LALT, KC_LGUI,                            KC_SPC,                             KC_RGUI, KC_RALT, TT(2),   MO(5)),

/* macOS Colemak Layer
 * ┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬───────────┐
 * │  `  │  1  │  2  │  3  │  4  │  5  │  6  │  7  │  8  │  9  │  0  │  -  │  =  │    BSPC   │
 * ├─────┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬────────┤
 * │   TAB  │  Q  │  W  │  F  │  P  │  G  │  J  │  L  │  U  │  Y  │  ;  │  [  │  ]  │    \   │
 * ├────────┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴────────┤
 * │ LCTL/BSPC│  A  │  R  │  S  │  T  │  D  │  H  │  N  │  E  │  I  │  O  │  '  │     ENT    │
 * ├──────────┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴────────────┤
 * │     LSFT    │  Z  │  X  │  C  │  V  │  B  │  K  │  M  │  ,  │  .  │  /  │      RSFT     │
 * ├──────┬──────┴┬────┴──┬──┴─────┴─────┴─────┴─────┴─────┴───┬─┴─────┼─────┴─┬───────┬─────┤
 * │ MFN1 │  LALT │  LGUI │                 SPC                │  RGUI │  RALT │  TFN1 │ MFN4│
 * └──────┴───────┴───────┴────────────────────────────────────┴───────┴───────┴───────┴─────┘
 */
[1] = LAYOUT_60_ansi(
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
    KC_TAB,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,    KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_LBRC, KC_RBRC, KC_BSLS,
    MT_BSPC, KC_A,    KC_R,    KC_S,    KC_T,    KC_D,    KC_H,    KC_N,    KC_E,    KC_I,    KC_O,    KC_QUOT, KC_ENT,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT,
    MO(2),   KC_LALT, KC_LGUI,                            KC_SPC,                             KC_RGUI, KC_RALT, TT(2),   MO(5)),

/* macOS Fn Layer (Fn1)
 * ┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬───────────┐
 * │ ESC │  F1 │  F2 │  F3 │  F4 │  F5 │  F6 │  F7 │  F8 │  F9 │ F10 │ F11 │ F12 │    DEL    │
 * ├─────┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬────────┤
 * │        │ RWD │ PLY │ FFD │  7  │  8  │  9  │ HOM │  UP │ END │ PGUP│ SLCK│ PAUS│        │
 * ├────────┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴────────┤
 * │          │ MUTE│ VOLD│ VOLU│  4  │  5  │  6  │ LFT │ DWN │ RGT │ PGDN│     │            │
 * ├──────────┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴────────────┤
 * │             │     │     │  0  │  1  │  2  │  3  │  .  │     │     │     │               │
 * ├──────┬──────┴┬────┴──┬──┴─────┴─────┴─────┴─────┴─────┴───┬─┴─────┼─────┴─┬───────┬─────┤
 * │      │       │       │                                    │       │       │       │     │
 * └──────┴───────┴───────┴────────────────────────────────────┴───────┴───────┴───────┴─────┘
 */
[2] = LAYOUT_60_ansi(
    KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,
    KC_TRNS, KC_MRWD, KC_MPLY, KC_MFFD, KC_P7,   KC_P8,   KC_P9,   KC_HOME, KC_UP,   KC_END,  KC_PGUP, KC_SLCK, KC_PAUS, KC_TRNS,
    KC_TRNS, KC_MUTE, KC_VOLD, KC_VOLU, KC_P4,   KC_P5,   KC_P6,   KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_P0,   KC_P1,   KC_P2,   KC_P3,   KC_PDOT, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS,                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

/* Windows Base Layer
 * ┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬───────────┐
 * │ ESD │  1  │  2  │  3  │  4  │  5  │  6  │  7  │  8  │  9  │  0  │  -  │  =  │    BSPC   │
 * ├─────┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬────────┤
 * │   TAB  │  Q  │  W  │  E  │  R  │  T  │  Y  │  U  │  I  │  O  │  P  │  [  │  ]  │    \   │
 * ├────────┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴────────┤
 * │ CAP/MFN3 │  A  │  S  │  D  │  F  │  G  │  H  │  J  │  K  │  L  │  ;  │  '  │     ENT    │
 * ├──────────┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴────────────┤
 * │     LSFT    │  Z  │  X  │  C  │  V  │  B  │  N  │  M  │  ,  │  .  │  /  │      RSFT     │
 * ├──────┬──────┴┬────┴──┬──┴─────┴─────┴─────┴─────┴─────┴───┬─┴─────┼─────┴─┬───────┬─────┤
 * │ LCTL │  LGUI │  LALT │                 SPC                │  RGUI │  RCTL │  TFN3 │ MFN4│
 * └──────┴───────┴───────┴────────────────────────────────────┴───────┴───────┴───────┴─────┘
 */
[3] = LAYOUT_60_ansi(
    KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
    FN4_CAP, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT,
    KC_LCTL, KC_LGUI, KC_LALT,                            KC_SPC,                             KC_RGUI, KC_RCTL, TT(4),   MO(5)),

/* Windows Fn Layer (Fn2)
 * ┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬───────────┐
 * │  `  │  F1 │  F2 │  F3 │  F4 │  F5 │  F6 │  F7 │  F8 │  F9 │ F10 │ F11 │ F12 │    DEL    │
 * ├─────┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬────────┤
 * │        │ PRV │ PLY │ NXT │  7  │  8  │  9  │ HOM │  UP │ END │ PGUP│ SLCK│ PAUS│        │
 * ├────────┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴────────┤
 * │          │ MUTE│ VOLD│ VOLU│  4  │  5  │  6  │ LFT │ DWN │ RGT │ PGDN│     │            │
 * ├──────────┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴────────────┤
 * │             │     │     │  0  │  1  │  2  │  3  │  .  │     │     │     │               │
 * ├──────┬──────┴┬────┴──┬──┴─────┴─────┴─────┴─────┴─────┴───┬─┴─────┼─────┴─┬───────┬─────┤
 * │      │       │       │                                    │       │       │       │     │
 * └──────┴───────┴───────┴────────────────────────────────────┴───────┴───────┴───────┴─────┘
 */
[4] = LAYOUT_60_ansi(
    KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,
    KC_TRNS, KC_MPRV, KC_MPLY, KC_MNXT, KC_P7,   KC_P8,   KC_P9,   KC_HOME, KC_UP,   KC_END,  KC_PGUP, KC_SLCK, KC_PAUS, KC_TRNS,
    KC_TRNS, KC_MUTE, KC_VOLD, KC_VOLU, KC_P4,   KC_P5,   KC_P6,   KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_P0,   KC_P1,   KC_P2,   KC_P3,   KC_PDOT, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS,                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

/* Fn3 Layer (Zeal60 Configuration)
 * ┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬───────────┐
 * │     │ EF- │ EF+ │ H1- │ H1+ │ H2- │ H2+ │     │     │     │     │ BR- │ BR+ │   POWER   │
 * ├─────┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬────────┤
 * │        │     │     │ S1- │ S1+ │ S2- │ S2+ │     │     │     │     │ ES- │ ES+ │        │
 * ├────────┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴────────┤
 * │   CAPS   │     │     │     │     │     │     │     │     │     │     │     │            │
 * ├──────────┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴──┬──┴────────────┤
 * │             │     │     │     │     │     │ NKRO│     │ DF1 │ DF0 │ DF3 │               │
 * ├──────┬──────┴┬────┴──┬──┴─────┴─────┴─────┴─────┴─────┴───┬─┴─────┼─────┴─┬───────┬─────┤
 * │      │       │       │                                    │       │       │       │     │
 * └──────┴───────┴───────┴────────────────────────────────────┴───────┴───────┴───────┴─────┘
 */
[5] = LAYOUT_60_ansi(
    KC_TRNS, EF_DEC,  EF_INC,  H1_DEC,  H1_INC,  H2_DEC,  H2_INC,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, BR_DEC,  BR_INC,  KC_POWER,
    KC_TRNS, KC_TRNS, KC_TRNS, S1_DEC,  S1_INC,  S2_DEC,  S2_INC,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, ES_DEC,  ES_INC,  KC_TRNS,
    KC_CAPS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, TG_NKRO, KC_TRNS, DF(1),   DF(0),   DF(3),            KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS,                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

};

// TODO: Change to default_layer_state_set_user when available...
uint32_t default_layer_state_set_kb(uint32_t state) {
    switch (biton32(state)) {
        case 0:
            backlight_effect_set_noeeprom(3);
            break;
        case 1:
            backlight_effect_set_noeeprom(5);
            break;
        case 3:
            backlight_effect_set_noeeprom(6);
            break;
        default:
            break;
    }
    return state;
}

uint32_t layer_state_set_user(uint32_t state) {
    switch (biton32(state)) {
    // Fn1 and Fn2 layers.
    case 2:
    case 4:
        previous_backlight_effect = backlight_current_effect();
        backlight_effect_set_noeeprom(2);
        break;
    default:
        if (previous_backlight_effect != 255) {
            backlight_effect_set_noeeprom(previous_backlight_effect);
            previous_backlight_effect = 255;
        }
        break;
    }
    return state;
}
