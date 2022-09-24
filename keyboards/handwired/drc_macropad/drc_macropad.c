#include "drc_macropad.h"

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if(clockwise) {
            tap_code(KC_VOLU);
        }
        else {
            tap_code(KC_VOLD);
        }
    }

    return true;
}