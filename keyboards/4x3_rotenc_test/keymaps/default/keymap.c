// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌─────┬─────┬─────┬─────┐
     * │   1 │   2 │   3 │   4 │
     * ├─────┼─────┼─────┼─────┤
     * │   5 │   6 │   7 │   8 │
     * ├─────┼─────┼─────┼─────┤
     * │   9 │  10 │  11 │  12 │
     * ├─────┼─────┼─────┼─────┤
     * │     │     │     │ enc │
     * └─────┴─────┴─────┴─────┘
     */
    /*[0] = LAYOUT_ortho_4x4(
        LCTL(LALT(KC_S)),   KC_E,               KC_Q,               LCTL(LSFT(KC_C)),
        KC_L,               KC_R,               KC_C,               LCTL(LSFT(KC_P)),
        KC_D,               LCTL(LSFT(KC_I)),   LCTL(LSFT(KC_R)),   LCTL(KC_P),
        QK_BOOT,            KC_A,               KC_A,               DF(1)
    ),*/
    [0] = LAYOUT_ortho_4x4(
        KC_A,   KC_B,   KC_C,   KC_D,
        KC_E,   KC_F,   KC_G,   KC_H,
        KC_I,   KC_J,   KC_K,   KC_L,
        KC_M,   KC_N,   KC_O,   KC_P
    )
    /*[1] = LAYOUT_ortho_4x4(
        LCTL(LALT(KC_L)),   LCTL(LALT(KC_D)),   LCTL(LSFT(KC_R)),   LCTL(KC_D),
        LCTL(KC_T),         LCTL(KC_V),         LCTL(KC_1),         KC_PAST,
        LCTL(LSFT(KC_C)),   LCTL(LSFT(KC_N)),   LCTL(LSFT(KC_V)),   LCTL(KC_M),
        QK_BOOT,            KC_A,               KC_B,               DF(0)
    )*/
};

bool encoder_update_user(uint8_t index, bool clockwise) {
  if (index == 0) {
    if (clockwise) {
      tap_code(KC_W);
    } else {
      tap_code(KC_X);
    }
  } else if (index == 1) {
    if (clockwise) {
      tap_code(KC_Y);
    } else {
      tap_code(KC_Z);
    }
  }
  return false;
}
