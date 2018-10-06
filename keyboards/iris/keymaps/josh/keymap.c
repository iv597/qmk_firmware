#include QMK_KEYBOARD_H
#include "quantum.h"

// Helpful defines
#define _______ KC_TRNS
#define xxxxxxx KC_NO


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
      KC_GESC, KC_1,    KC_2,    KC_3,   KC_4, KC_5,                    KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC,
      KC_TAB,  KC_QUOT, KC_COMM, KC_DOT, KC_P, KC_Y,                    KC_F, KC_G, KC_C, KC_R, KC_L, KC_SLSH,
      KC_LGUI, KC_A,    KC_O,    KC_E,   KC_U, KC_I,                    KC_D, KC_H, KC_T, KC_N, KC_S, KC_ENTER,
      KC_LCTL, KC_SCLN, KC_Q,    KC_J,   KC_K, KC_X, MO(2),     MO(1),  KC_B, KC_M, KC_W, KC_V, KC_Z, KC_LALT,
                                  KC_LEFT, KC_RGHT,  KC_LSHIFT, KC_SPC,   KC_UP, KC_DOWN
  ),
  [1] = LAYOUT(
      KC_GRV,  xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx,                   KC_F10, KC_F11, KC_F12, xxxxxxx, xxxxxxx, KC_SLSH,
      xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx,                   KC_F7,  KC_F8,  KC_F9,  xxxxxxx, xxxxxxx, xxxxxxx,
      xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, KC_INS,                    KC_F4,  KC_F5,  KC_F6,  xxxxxxx, xxxxxxx, xxxxxxx,
      RESET,   xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, _______, KC_F1,  KC_F2,  KC_F3,  xxxxxxx, xxxxxxx, xxxxxxx,
                                          KC_HOME, KC_END,  _______, xxxxxxx, KC_PGUP, KC_PGDN
  ),
  [2] = LAYOUT(
      KC_MUTE, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx,                   xxxxxxx, xxxxxxx, xxxxxxx, KC_LBRC, KC_RBRC, KC_DEL,
      xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx,                   xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, KC_BSLS,
      KC_RGUI, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx,                   xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, KC_MINS,
      xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, _______, KC_VOLU, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, KC_RALT,
                                         KC_HOME, KC_END,   _______, KC_VOLD,    KC_PGUP, KC_PGDN
  )
};
