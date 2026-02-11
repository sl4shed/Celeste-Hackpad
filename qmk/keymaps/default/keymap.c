// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┐
     * │ a │ s │ d │ f │   │   │   │ ^ │   │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼
     * │ z │ x │ c │ v │   │   │ < │ v │ > │
     * └───┴───┴───┴───┴───┴───┴───┴───┴───┘
     */
    /*
    [0] = LAYOUT(
        KC_A, KC_S, KC_D, KC_F, _______, KC_UP, _______,
        KC_Z, KC_X, KC_C, KC_V, KC_LEFT, KC_DOWN, KC_RGHT
    )};
    */

    [0] = LAYOUT(KC_A, KC_S, KC_D, KC_F, KC_UP, KC_Z, KC_X, KC_C, KC_V, KC_LEFT, KC_DOWN, KC_RGHT)};

#ifdef OLED_ENABLE

#    include <stdio.h>
#    include <oled.c>

#endif // OLED_ENABLE