// Copyright 2025 NyxKeys (@Shiva1796)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT(
        KC_F4,   KC_F3,   KC_F2,   KC_F1,
        KC_PMNS, KC_PAST, KC_PSLS, MO(1),
        KC_PPLS, KC_P9,   KC_P8,   KC_P7,
        KC_BSPC, KC_P6,   KC_P5,   KC_P4,
        KC_PENT, KC_P3,   KC_P2,   KC_P1,
        KC_TAB,  KC_PDOT, KC_PEQL, KC_P0
    ),

    [1] = LAYOUT(
        KC_F8,   KC_F7,   KC_F6,   KC_F5,
        KC_F12,  KC_F11,  KC_F10,  _______,
        _______, KC_PGUP, KC_UP,   KC_HOME,
        QK_BOOT, KC_RGHT, XXXXXXX, KC_LEFT,
        _______, KC_PGDN, KC_DOWN, KC_END,
        _______, _______, _______, _______
    ),

    [2] = LAYOUT(
        _______, _______, _______, _______,
        _______, _______, _______, _______,
        _______, _______, _______, _______,
        _______, _______, _______, _______,
        _______, _______, _______, _______,
        _______, _______, _______, _______
    ),

    [3] = LAYOUT(
        _______, _______, _______, _______,
        _______, _______, _______, _______,
        _______, _______, _______, _______,
        _______, _______, _______, _______,
        _______, _______, _______, _______,
        _______, _______, _______, _______
    )
};
