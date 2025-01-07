#pragma once

// default but used in macros
#undef TAPPING_TERM
#define TAPPING_TERM 200
#define TAPPING_TERM_PER_KEY


// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define QUICK_TAP_TERM 0

// Auto Shift
#define NO_AUTO_SHIFT_ALPHA
#define AUTO_SHIFT_TIMEOUT TAPPING_TERM
#define AUTO_SHIFT_NO_SETUP

// Mouse key speed and acceleration.
#undef MOUSEKEY_DELAY
#define MOUSEKEY_DELAY          0
#undef MOUSEKEY_INTERVAL
#define MOUSEKEY_INTERVAL       16
#undef MOUSEKEY_WHEEL_DELAY
#define MOUSEKEY_WHEEL_DELAY    0
#undef MOUSEKEY_MAX_SPEED
#define MOUSEKEY_MAX_SPEED      6
#undef MOUSEKEY_TIME_TO_MAX
#define MOUSEKEY_TIME_TO_MAX    64

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case SFT_T(KC_T):
           return 175;
        case SFT_T(KC_N):
           return 175;
        default:
            return g_tapping_term;
    }
}
