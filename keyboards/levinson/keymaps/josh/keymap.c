#include QMK_KEYBOARD_H

// Helpful defines
#define _______ KC_TRNS
#define xxxxxxx KC_NO

// Shorten Keynames
define SGUI SCMD(xxxxxxx)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Colemac Mod DH                                                                                                                                                    
   * ,-----------------------------------------------------------------------------------.                                                                     
   * | Esc  |   Q  |   W  |   F  |   P  |   B  |   J  |   L  |   U  |   Y  |   '  | Bksp |                                                                     
   * |------+------+------+------+------+-------------+------+------+------+------+------|                                                                     
   * | Tab  |   A  |   R  |   S  |   T  |   G  |   K  |   N  |   E  |   I  |   O  |Enter |                                                                     
   * |------+------+------+------+------+------|------+------+------+------+------+------|                                                                     
   * | LGUI |   Z  |   X  |   C  |   D  |   V  |   M  |   H  |   ,  |   ,  |   ;  | LALT |                                                                     
   * |------+------+------+------+------+------+------+------+------+------+------+------|                                                                     
   * | Ctrl |MO(4) | SGUI |MO(2) | MO(3)|LSHFT |Space | MO(1)| Left | Down |  Up  |Right |                                                                     
   * `-----------------------------------------------------------------------------------'                                                                     
   */      
  [0] = LAYOUT_ortho_4x12(
      KC_GESC, KC_Q,    KC_W,    KC_F,   KC_P,     KC_B,    KC_J,    KC_L,    KC_U,    KC_Y,    KC_QUOT, KC_BSPC,
      KC_TAB,  KC_A,    KC_R,    KC_S,   KC_T,     KC_G,    KC_K,    KC_N,    KC_E,    KC_I,    KC_O,    KC_ENT,
      KC_LGUI, KC_Z,    KC_X,    KC_C,   KC_D,     KC_V,    KC_M,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH, KC_LALT,
      KC_LCTL, MO(4),   SGUI,    MO(2),  MO(3),    KC_LSFT, KC_SPC,  MO(1),   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT),

	[1] = LAYOUT_ortho_4x12(
      KC_GESC, xxxxxxx, xxxxxxx, KC_F10, KC_F11,   KC_F12,  xxxxxxx, KC_PSLS, KC_7,    KC_8,    KC_9,    KC_PCMM,
      KC_TAB,  xxxxxxx, xxxxxxx, KC_F7,  KC_F8,    KC_F9,   xxxxxxx, KC_PAST, KC_4,    KC_5,    KC_6,    KC_PEQL,
      KC_LGUI, xxxxxxx, xxxxxxx, KC_F4,  KC_F5,    KC_F6,   xxxxxxx, KC_PMNS, KC_1,    KC_2,    KC_3,    KC_RALT,
      KC_LCTL, xxxxxxx, _______, KC_F1,  KC_F2,    KC_F3,   KC_SPC,  _______, KC_0,    KC_PDOT, xxxxxxx, KC_PPLS),

	[2] = LAYOUT_ortho_4x12(
      KC_GESC, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, KC_MINS, KC_EQL,  KC_DEL,
      KC_TAB,  xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, KC_INS,
      KC_LGUI, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, KC_LBRC, KC_RBRC, KC_BSLS, KC_SCLN,
      KC_LCTL, xxxxxxx, _______, _______, xxxxxxx, KC_LSFT, xxxxxxx, xxxxxxx, KC_HOME, KC_PGDN, KC_PGUP, KC_END),

	[3] = LAYOUT_ortho_4x12(
      KC_GESC, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, xxxxxxx,
      KC_TAB,  xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx,
      KC_LGUI, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx,
      KC_LCTL, xxxxxxx, xxxxxxx, xxxxxxx, _______, KC_LSFT, xxxxxxx, xxxxxxx, KC_MUTE, KC_VOLD, KC_VOLU, xxxxxxx),

	[4] = LAYOUT_ortho_4x12(
      LGUI(KC_HOME), xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, LGUI(KC_END),
      xxxxxxx,       xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx,
      xxxxxxx,       xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx,
      xxxxxxx,       _______, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, RESET,   xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx)
};

