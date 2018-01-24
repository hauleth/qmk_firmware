/* Copyright 2017 Hauleth
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include "xd75.h"

#define _______ KC_TRNS

enum layers {
  _QWERTY = 0,
  _COLEMAK,
  _LOWER,
  _RAISE,
  _FUNCTION
};

#define MLOSPC MO(_LOWER)
#define MRASPC MO(_RAISE)
#define MFUNCT MO(_FUNCTION)
#define CTRESC LCTL_T(KC_ESC)
#define ALGSPC ALGR_T(KC_SPC)
#define CMDSPC GUI_T(KC_SPC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* QWERTY
 * .--------------------------------------------------------------------------------------------------------------------------------------.
 * | `      | 1      | 2      | 3      | 4      | 5      | RGB VD | RGB TG | RGB VI | 6      | 7      | 8      | 9      | 0      | BACKSP |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
 * | TAB    | Q      | W      | E      | R      | T      | RGB HD | RGB MO | RGB HI | Y      | U      | I      | O      | P      | '      |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------|
 * | CTRESC | A      | S      | D      | F      | G      | HOME   | DEL    | PG UP  | H      | J      | K      | L      | ;      | ENTER  |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------+--------|
 * | LSHIFT | Z      | X      | C      | V      | B      | END    | INS    | PG DN  | N      | M      | ,      | .      | /      | RSHIFT |
 * |--------+--------+--------+--------+--------+-----------------+--------+--------+--------+--------+-----------------+--------+--------|
 * | LCTRL  | LALT   | LGUI   | FN     | LOWSPC | CMDSPC | SPC    | SPC    | SPC    | ALGSPC | RAISPC | LEFT   | DOWN   | UP     | RIGHT  |
 * '--------------------------------------------------------------------------------------------------------------------------------------'
 */

 [_QWERTY] = { /* QWERTY */
  { KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,   KC_5,   RGB_VAD, RGB_TOG, RGB_VAI,  KC_6,   KC_7,   KC_8,    KC_9,    KC_0,    KC_BSPC },
  { KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,   KC_T,   RGB_HUD, RGB_MOD, RGB_HUI,  KC_Y,   KC_U,   KC_I,    KC_O,    KC_P,    KC_QUOT },
  { CTRESC,  KC_A,    KC_S,    KC_D,    KC_F,   KC_G,   KC_HOME, KC_DEL,  KC_PGUP,  KC_H,   KC_J,   KC_K,    KC_L,    KC_SCLN, KC_ENT  },
  { KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,   KC_B,   KC_END,  KC_INS,  KC_PGDN,  KC_N,   KC_M,   KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT },
  { KC_LCTL, KC_LALT, KC_LGUI, MFUNCT,  MLOSPC, CMDSPC, KC_SPC,  KC_SPC,  KC_SPC,   ALGSPC, MRASPC, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT },
 },

/* COLEMAK
 * .--------------------------------------------------------------------------------------------------------------------------------------.
 * | `      | 1      | 2      | 3      | 4      | 5      | RGB VD | RGB TG | RGB VI | 6      | 7      | 8      | 9      | 0      | BACKSP |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
 * | TAB    | Q      | W      | F      | P      | G      | RGB HD | RGB MO | RGB HI | J      | L      | U      | Y      | ;      | '      |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------|
 * | CTRESC | A      | R      | S      | T      | D      | HOME   | DEL    | PG UP  | H      | N      | E      | I      | O      | ENTER  |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------+--------|
 * | LSHIFT | Z      | X      | C      | V      | B      | END    | INS    | PG DN  | K      | M      | ,      | .      | /      | RSHIFT |
 * |--------+--------+--------+--------+--------+-----------------+--------+--------+--------+--------+-----------------+--------+--------|
 * | LCTRL  | LALT   | LGUI   | FN     | LOWSPC | CMDSPC | MS B1  | MS B2  | MS B3  | ALGSPC | RAISPC | LEFT   | DOWN   | UP     | RIGHT  |
 * '--------------------------------------------------------------------------------------------------------------------------------------'
 */

 [_COLEMAK] = { /* COLEMAK */
  { KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,   KC_5,   RGB_VAD, RGB_TOG, RGB_VAI,  KC_6,   KC_7,   KC_8,    KC_9,    KC_0,    KC_BSPC },
  { KC_TAB,  KC_Q,    KC_W,    KC_F,    KC_P,   KC_G,   RGB_HUD, RGB_MOD, RGB_HUI,  KC_J,   KC_L,   KC_U,    KC_Y,    KC_SCLN, KC_QUOT },
  { CTRESC,  KC_A,    KC_R,    KC_S,    KC_T,   KC_D,   KC_HOME, KC_DEL,  KC_PGUP,  KC_H,   KC_N,   KC_E,    KC_I,    KC_O,    KC_ENT  },
  { KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,   KC_B,   KC_END,  KC_INS,  KC_PGDN,  KC_K,   KC_M,   KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT },
  { KC_LCTL, KC_LALT, KC_LGUI, MFUNCT,  MLOSPC, CMDSPC, KC_BTN1, KC_BTN2, KC_BTN2,  ALGSPC, MRASPC, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT },
 },

/* LOWER
 * .--------------------------------------------------------------------------------------------------------------------------------------.
 * |        |        |        |        |        |        |        |        |        |        |        |        | -      | =      | F12    |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        | RGB SD |        | RGB SI |        |        |        | [      | ]      | \      |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        | PLAIN  | BREATH | RAINBO | LEFT   | DOWN   | UP     | RIGHT  |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        | SWIRL  | SNAKE  | CYLON  |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        | XMAS   | GRADIE |        |        |        |        |        |        |        |
 * '--------------------------------------------------------------------------------------------------------------------------------------'
 */

 [_LOWER] = { /* LOWER */
  { _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_MINS, KC_EQL,  KC_DEL  },
  { _______, _______, _______, _______, _______, _______, RGB_SAD, _______, RGB_SAI, _______, _______, _______, KC_LBRC, KC_RBRC, KC_BSLS },
  { _______, _______, _______, _______, _______, _______, RGB_M_P, RGB_M_B, RGB_M_R, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______ },
  { _______, _______, _______, _______, _______, _______, RGB_M_SW,RGB_M_SN,RGB_M_K, _______, _______, _______, _______, _______, _______ },
  { _______, _______, _______, _______, _______, _______, RGB_M_X, RGB_M_G, _______, _______, _______, _______, _______, _______, _______ },
 },

/* RAISE
 * .--------------------------------------------------------------------------------------------------------------------------------------.
 * |        |        |        |        |        |        | NUM LK | P/     | P*     | F7     | F8     | F9     | F10    | F11    | F12    |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        | P7     | P8     | P9     | -      |        |        | PR SCR | SCR LK | PR SCR |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        | P4     | P5     | P6     | +      |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        | P1     | P2     | P3     | PENT   |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        | P0     |        | P.     | PENT   | PENT   | FN     |        |        |        |
 * '--------------------------------------------------------------------------------------------------------------------------------------'
 */

 [_RAISE] = { /* RAISE */
  { _______, _______, _______, _______, _______, _______, KC_NLCK, KC_SLSH, KC_ASTR, _______, _______, _______, KC_MINS, KC_EQL,  KC_DEL  },
  { _______, _______, _______, _______, _______, _______, KC_P7,   KC_P8,   KC_P9,   KC_MINS, _______, _______, KC_LBRC, KC_RBRC, KC_BSLS },
  { _______, _______, _______, _______, _______, _______, KC_P6,   KC_P5,   KC_P4,   KC_PLUS, _______, _______, _______, _______, _______ },
  { _______, _______, _______, _______, _______, _______, KC_P3,   KC_P2,   KC_P1,   _______, _______, _______, _______, _______, _______ },
  { _______, _______, _______, _______, _______, _______, KC_KP_0, _______, KC_PDOT, KC_PENT, _______, _______, _______, _______, _______ },
 },

/* FUNCTION
 * .--------------------------------------------------------------------------------------------------------------------------------------.
 * | F1     | F2     | F3     | F4     | F5     | F6     | NUM LK | P/     | P*     | F7     | F8     | F9     | F10    | F11    | F12    |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * | F7     | F8     | F9     | F10    | F11    | F12    | P7     | P8     | P9     | -      |        |        |        |        | POWER  |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * | CAPS L | PREV   | PLAY   | NEXT   | STOP   |        | P4     | P5     | P6     | +      |        |        |        |        | SLEEP  |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        | VOL-   | MUTE   | VOL+   |        |        | P1     | P2     | P3     |        |        |        |        |        | WAKE   |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        | P0     |        | P.     | PENT   |        |        |        |        | RESET  |
 * '--------------------------------------------------------------------------------------------------------------------------------------'
 */

 [_FUNCTION] = { /* FUNCTION */
  { KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,  KC_NLCK, KC_SLSH, KC_ASTR, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_PWR  },
  { KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12, KC_P7,   KC_P8,   KC_P9,   KC_MINS, _______, _______, _______, _______, KC_SLEP },
  { KC_CAPS, KC_MPRV, KC_MPLY, KC_MNXT, KC_MSTP, KC_SPC, KC_P6,   KC_P5,   KC_P4,   KC_PLUS, _______, _______, _______, _______, KC_WAKE },
  { _______, KC_VOLD, KC_MUTE, KC_VOLU, KC_APP,  KC_SPC, KC_P3,   KC_P2,   KC_P1,   _______, _______, _______, _______, _______, _______ },
  { _______, _______, _______, _______, _______, KC_SPC, KC_KP_0, _______, KC_PDOT, KC_PENT, _______, _______, _______, _______, RESET   },
 },
};

const uint16_t PROGMEM fn_actions[] = {
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
      switch(id) {
        case 0:
          if (record->event.pressed) {
            register_code(KC_RSFT);
            #ifdef BACKLIGHT_ENABLE
              backlight_step();
            #endif
          } else {
            unregister_code(KC_RSFT);
          }
        break;
      }
    return MACRO_NONE;
};
