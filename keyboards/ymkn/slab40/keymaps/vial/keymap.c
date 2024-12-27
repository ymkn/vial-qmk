 // Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_TAB,  KC_Q, KC_W, KC_E,           KC_R, KC_T,          KC_Y, KC_U, KC_I,          KC_O,   KC_P,    KC_BSPC,
        KC_LCTL, KC_A, KC_S, KC_D,           KC_F, KC_G,          KC_H, KC_J, KC_K,          KC_L,   KC_MINS, KC_ENT,
        KC_LSFT, KC_Z, KC_X, KC_C,           KC_V, KC_B,          KC_N, KC_M, KC_COMM,       KC_DOT, KC_SLSH, KC_RALT,
        KC_LCTL,             LT(1, KC_LNG2),       LT(2, KC_SPC),             LT(1,KC_LNG1),                  KC_RCTL
    ),
    [1] = LAYOUT(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_TRNS, KC_TRNS, KC_UP,   KC_TRNS, KC_LBRC, KC_DEL,
        KC_TRNS, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_SCLN, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_RBRC, KC_BSLS, KC_INT3, KC_RWIN,
        KC_TRNS,                   KC_TRNS,          KC_TRNS,                   KC_TRNS,                   KC_TRNS
    ),
    [2] = LAYOUT(
        KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,    KC_F5,   KC_TRNS, KC_TRNS, KC_PGUP, KC_TRNS, KC_EQL,  KC_TRNS,
        KC_TRNS, KC_F6,   KC_F7,   KC_F8,   KC_F9,    KC_F10,  KC_TRNS, KC_HOME, KC_PGDN, KC_END,  KC_QUOT, KC_TRNS,
        KC_TRNS, KC_F11,  KC_F12,  KC_F13,  KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_ASTR, KC_LPRN, KC_INT1, KC_TRNS,
        KC_TRNS,                   KC_TRNS,           KC_TRNS,                   KC_TRNS,                   KC_TRNS
    ),
    [3] = LAYOUT(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS,                   KC_TRNS,          KC_TRNS,                   KC_TRNS,                   KC_TRNS
    )
};
