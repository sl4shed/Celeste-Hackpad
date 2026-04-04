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
    
    [0] = LAYOUT(
        KC_NO,   KC_UP,   KC_NO,   KC_NO,
        KC_LEFT, KC_DOWN, KC_RGHT, KC_NO,
        KC_A,    KC_S,    KC_D,    KC_F,
        KC_Z,    KC_X,    KC_C,    KC_V
    )
};

void keyboard_post_init_user(void) {
    rgblight_enable_noeeprom();
    rgblight_sethsv_noeeprom(0, 255, 120);
    rgblight_mode_noeeprom(RGBLIGHT_MODE_RAINBOW_MOOD);
}