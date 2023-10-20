// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_ortho_4x4(
        KC_A,   KC_1,   KC_P9,   QK_BOOT,
        KC_MINS,   KC_NUHS,   KC_F1,   KC_F12,
        KC_LSFT,   KC_LCTL,   KC_P3,   KC_PMNS
    )
};
