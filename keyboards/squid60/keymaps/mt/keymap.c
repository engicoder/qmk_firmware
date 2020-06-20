
#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _DEF 0

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Memorex Telex (MT) layout 
   * ,-----------------------------------------------------------.
   * | 00 |01| 02| 03| 04| 05| 06| 07| 08| 09| 0a| 0b| 0c| 0d| 0e|
   * |-----------------------------------------------------------|
   * | 10  | 11| 12| 13| 14| 15| 16| 17| 18| 19| 1a| 1b| 1c|     |
   * |-----------------------------------------------------|     |
   * | 20    | 21| 22| 23| 24| 25| 26| 27| 28| 29| 2a| 2b|  2d   |
   * |-----------------------------------------------------------|
   * |   30    | 32| 33| 34| 35| 36| 37| 38| 39| 3a| 3b|   3d    |
   * |-----------------------------------------------------------|
   * | 40 | 41 | 42 |              47            | 4b | 4d | 4e  |
   * `-----------------------------------------------------------'
 */
    [_DEF] = LAYOUT_mt(
        KC_ESC,   KC_1,    KC_2,    KC_3, KC_4, KC_5, KC_6, KC_7, KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS, KC_BSPC, \
        KC_TAB,   KC_Q,    KC_W,    KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, \
        KC_CAPS,  KC_A,    KC_S,    KC_D, KC_F, KC_G, KC_H, KC_J, KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,   \
        KC_LSFT,  KC_Z,    KC_X,    KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT,  KC_SLSH,                   KC_RSFT,  \
        KC_LCTL,  KC_LGUI, KC_LALT,            KC_SPC,                                       KC_RALT, KC_APP,  KC_RCTL)
};

void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
  debug_enable=true;
  debug_matrix=true;
  //debug_keyboard=true;
  //debug_mouse=true;
}