
#include QMK_KEYBOARD_H

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case SFT_T(KC_T):
           return 175;
        case SFT_T(KC_N):
           return 175;
        default:
            return TAPPING_TERM;
    }
};

enum layer_names {
        _BASE,
		_NAV,
		_MOUSE,
		_MEDIA,
		_NUM,
		_SYM,
		_FUNC
    };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_BASE] = LAYOUT(
		 KC_EQL, KC_1, KC_2, KC_3, KC_4, KC_5, KC_HYPR, KC_HYPR, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_TAB, KC_Q, KC_W, KC_F, KC_P, KC_B, KC_MEH, KC_MEH, KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_BSLS, KC_ESC, LGUI_T(KC_A), LALT_T(KC_R), LCTL_T(KC_S), LSFT_T(KC_T), KC_G, KC_MEH, KC_MEH, KC_M, RSFT_T(KC_N), RCTL_T(KC_E), RALT_T(KC_I), RGUI_T(KC_O), KC_QUOTE, KC_LSFT, KC_Z, KC_X, KC_C, KC_D, KC_V, LT(2, KC_TAB), TO(0), TO(0), LT(6, KC_DEL), KC_K, KC_H, KC_COMMA, KC_DOT, KC_SLASH, KC_RSFT, KC_MEH, LT(3, KC_ESC), LT(1, KC_SPC), LT(2, KC_TAB), KC_HYPR, KC_HYPR, LT(5, KC_BSPC), LT(4, KC_ENTER), LT(6, KC_DEL), KC_MEH 
	) 
,
	[_NAV] = LAYOUT(
		 KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_AGAIN, KC_PASTE, KC_COPY, KC_CUT, KC_UNDO, KC_TRNS, KC_NO, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO, KC_TRNS, KC_TRNS, KC_CAPS, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_DEL, KC_INS, KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_BSPC, KC_ENTER, KC_DEL, KC_TRNS 
	) 
,
	[_MOUSE] = LAYOUT(
		 KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_AGAIN, KC_PASTE, KC_COPY, KC_CUT, KC_UNDO, KC_TRNS, KC_NO, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO, KC_TRNS, KC_TRNS, KC_NO, MS_LEFT, MS_DOWN, MS_UP, MS_RGHT, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, MS_BTN2, KC_NO, MS_WHLL, MS_WHLD, MS_WHLU, MS_WHLR, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MS_BTN3, MS_BTN1, MS_BTN2, KC_TRNS 
	) 
,
	[_MEDIA] = LAYOUT(
		 QK_BOOT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, RGB_TOG, RGB_MOD, RGB_RMOD, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, BL_TOGG, BL_STEP, RGB_HUI, RGB_SAI, RGB_VAI, KC_TRNS, KC_NO, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO, KC_TRNS, KC_TRNS, KC_NO, KC_MPRV, KC_AUDIO_VOL_DOWN, KC_AUDIO_VOL_UP, KC_MNXT, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_AUDIO_MUTE, KC_TRNS, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MEDIA_STOP, KC_MEDIA_PLAY_PAUSE, KC_AUDIO_MUTE, KC_TRNS 
	) 
,
	[_NUM] = LAYOUT(
		 KC_NO, KC_1, KC_2, KC_3, KC_4, KC_5, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TAB, KC_LBRC, KC_7, KC_8, KC_9, KC_RBRC, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_ESC, KC_QUOTE, KC_4, KC_5, KC_6, KC_EQL, KC_TRNS, KC_TRNS, KC_NO, KC_RSFT, KC_RCTL, KC_RALT, KC_RGUI, KC_TRNS, KC_TRNS, KC_GRAVE, KC_1, KC_2, KC_3, KC_BSLS, KC_MINS, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_DOT, KC_0, KC_MINS, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_TRNS 
	) 
,
	[_SYM] = LAYOUT(
		 KC_NO, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERCENT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LCBR, KC_AMPERSAND, KC_ASTR, KC_LPRN, KC_RCBR, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_DQT, KC_DLR, KC_PERCENT, KC_CIRC, KC_PLUS, KC_TRNS, KC_TRNS, KC_NO, KC_RSFT, KC_RCTL, KC_RALT, KC_RGUI, KC_TRNS, KC_TRNS, KC_TILDE, KC_EXLM, KC_AT, KC_HASH, KC_PIPE, KC_UNDERSCORE, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_LPRN, KC_RPRN, KC_UNDERSCORE, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_TRNS 
	) 
,
	[_FUNC] = LAYOUT(
		 QK_BOOT, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_TRNS, KC_TRNS, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, QK_BOOT, KC_TRNS, KC_F12, KC_F7, KC_F8, KC_F9, KC_PRINT_SCREEN, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_F11, KC_F4, KC_F5, KC_F6, KC_SCRL, KC_TRNS, KC_TRNS, KC_NO, KC_RSFT, KC_RCTL, KC_RALT, KC_RGUI, KC_TRNS, KC_TRNS, KC_F10, KC_F1, KC_F2, KC_F3, KC_PAUSE, KC_TAB, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_APP, KC_SPC, KC_TAB, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_TRNS 
	) 
,
    };

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM =
    LAYOUT(
        'L', 'L', 'L', 'L', 'L', 'L',    'L',  'R',     'R', 'R', 'R', 'R', 'R', 'R',
        'L', 'L', 'L', 'L', 'L', 'L',    'L',  'R',     'R', 'R', 'R', 'R', 'R', 'R',
        'L', 'L', 'L', 'L', 'L', 'L',    'L',  'R',     'R', 'R', 'R', 'R', 'R', 'R',
        'L', 'L', 'L', 'L', 'L', 'L','L','L',  'R','R', 'R', 'R', 'R', 'R', 'R', 'R',
                       'L', 'L', 'L','L','L',  'R','R', 'R', 'R', 'R'
    );

#ifdef ENCODER_ENABLE
bool encoder_update_user(uint8_t index, bool clockwise) {
/*    if (!encoder_update_user(index, clockwise)) {
        return false;
    }
*/
    if (index == 0 || index == 1 || index == 2) {
        // Left side
        // Arrow keys
        if (clockwise) {
            tap_code(KC_RIGHT);
        } else {
            tap_code(KC_LEFT);
        }
    } else if (index == 4 || index == 5 || index == 6) {
        // Right side
        // Page up/Page down
        if (clockwise) {
            tap_code(KC_PGDN);
        } else {
            tap_code(KC_PGUP);
        }
    } else if (index == 3 || index == 7) {
        // Myriad
        // Volume control
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    }
    return true;
}
#endif

