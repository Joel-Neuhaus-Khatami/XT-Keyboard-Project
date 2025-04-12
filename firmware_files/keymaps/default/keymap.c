// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_default(
        // Row 1
        F1,   F6,   ESC,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINUS, KC_EQUAL, KC_BSPC, F11,  DEL,   INS,
        
        // Row 2
        F2,   F7,   KC_TAB, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRACKET, KC_RBRACKET, KC_BSLS, F12,  HOME,   VOL_UP,
        
        // Row 3
        F3,   F8,   KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_COLON, KC_QUOTE, KC_ENTER, F13,  END,    VOL_DOWN,
        
        // Row 4
        F4,   F9,   KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMMA, KC_DOT,  KC_SLASH, KC_RSFT, PREV_TRACK, KC_UP,   NEXT_TRACK,
        
        // Row 5
        F5,   F10,  KC_GUI, KC_LALT, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_RALT, KC_FN,   KC_LEFT, KC_DOWN, KC_RIGHT
    )

};
