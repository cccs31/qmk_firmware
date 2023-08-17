#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _BL 0
#define _FL 1
#define _NL 2

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Keymap _BL: (Base Layer) Default Layer
     * ,----------------------------------------------------------------.
     * |Esc | 1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Backsp |~ ` |
     * |----------------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|  \  |Del |
     * |----------------------------------------------------------------|
     * |Ctrl   |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Return |PgUp|
     * |----------------------------------------------------------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift | Up|PgDn|
     * |----------------------------------------------------------------|
     * |FN1 |Win |Alt |        Space          |Alt|FN2|Ctrl|Lef|Dow|Rig |
     * `----------------------------------------------------------------'
     */
    [_BL] = LAYOUT_65_ansi(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_GRV,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_DEL,
        KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,  KC_PGUP,
        KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP,   KC_PGDN,
        TT(_FL), KC_LGUI, KC_LALT,                            KC_SPC,                    KC_RALT, TG(_NL), KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
    ),

    /* Keymap _FL: Function Layer
     * ,----------------------------------------------------------------.
     * |Pau| F1|F2 |F3 |F4 |F5 |F6 |F7 |F8 |F9 |F10|F11|F12|       |    |
     * |----------------------------------------------------------------|
     * |CAPS |Ms1|MsU|Ms2|Lck|   |   |   |   |   |Prn|   |   |     |Ins |
     * |----------------------------------------------------------------|
     * |      |MsL|MsD|MsR|   |   |<- |Dn |Up | ->|   |   |        |Hme |
     * |----------------------------------------------------------------|
     * |        |Pre|Ply|Nxt|BLs|BL |BLb|   |   |   |   |      |   |End |
     * |----------------------------------------------------------------|
     * |    |    |    |                       |   |   |    |   |   |    |
     * `----------------------------------------------------------------'
     */
    [_FL] = LAYOUT_65_ansi(
        KC_PAUS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, _______,
        KC_CAPS, KC_BTN1, KC_MS_U, KC_BTN2, QK_LOCK, _______, _______, _______, _______, _______, KC_PSCR, _______, _______, _______, KC_INS,
        _______, KC_MS_L, KC_MS_D, KC_MS_R, _______, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______,          _______, KC_HOME,
        _______,          KC_MPRV, KC_MPLY, KC_MNXT, BL_STEP, BL_TOGG, BL_BRTG, _______, _______, _______, _______, _______, _______, KC_END,
        _______, _______, _______,                            _______,                   _______, _______, _______, _______, _______, _______
    ),

    /* Keymap _NL: Numpad Layer
     * ,----------------------------------------------------------------.
     * |   |   |   |   |   |   |   |  7|  8|  9|  0|  -|  +|       |    |
     * |----------------------------------------------------------------|
     * |     |   |   |   |   |   |   |  4|  5|  6|   |   |   |     |    |
     * |----------------------------------------------------------------|
     * |      |   |   |   |   |   |   |  1|  2|  3|   |   |Return  |    |
     * |----------------------------------------------------------------|
     * |        |   |   |   |   |   |Num|   |  *|  .|  /|      |   |    |
     * |----------------------------------------------------------------|
     * |    |    |    |                       |   |   |    |   |   |    |
     * `----------------------------------------------------------------'
     */
    [_NL] = LAYOUT_65_ansi(
        _______, _______, _______, _______, _______, _______, _______, KC_KP_7, KC_KP_8, KC_KP_9, KC_KP_0, KC_PMNS, KC_PPLS, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, KC_KP_4, KC_KP_5, KC_KP_6, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, KC_KP_1, KC_KP_2, KC_KP_3, _______, _______,          KC_PENT, _______,
        _______,          _______, _______, _______, _______, _______,  KC_NUM, _______, KC_PAST, KC_PDOT, KC_PSLS, _______, _______, _______,
        _______, _______, _______,                            _______,                   _______, _______, _______, _______, _______, _______
    ),
};
