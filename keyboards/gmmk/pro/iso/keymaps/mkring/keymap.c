/* Copyright 2021 Glorious, LLC <salman@pcgamingrace.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H
#include "keymap_swedish.h"
#include "rgb_matrix_map.h"

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

//      ESC      F1       F2       F3       F4       F5       F6       F7       F8       F9       F10      F11      F12	     Prt           Rotary(Mute)
//      ~        1        2        3        4        5        6        7        8        9        0         -       (=)	     BackSpc           Del
//      Tab      Q        W        E        R        T        Y        U        I        O        P        [        ]                          PgUp
//      Caps     A        S        D        F        G        H        J        K        L        ;        "        #        Enter             PgDn
//      Sh_L     /        Z        X        C        V        B        N        M        ,        .        ?                 Sh_R     Up       End
//      Ct_L     Win_L    Alt_L                               SPACE                               Alt_R    FN       Ct_R     Left     Down     Right


    // The FN key by default maps to a momentary toggle to layer 1 to provide access to the RESET key (to put the board into bootloader mode). Without
    // this mapping, you have to open the case to hit the button on the bottom of the PCB (near the USB cable attachment) while plugging in the USB
    // cable to get the board into bootloader mode - definitely not fun when you're working on your QMK builds. Remove this and put it back to KC_RGUI
    // if that's your preference.
    //
    // To put the keyboard in bootloader mode, use FN+backspace. If you accidentally put it into bootloader, you can just unplug the USB cable and
    // it'll be back to normal when you plug it back in.
    //
    // This keyboard defaults to 6KRO instead of NKRO for compatibility reasons (some KVMs and BIOSes are incompatible with NKRO).
    // Since this is, among other things, a "gaming" keyboard, a key combination to enable NKRO on the fly is provided for convenience.
    // Press Fn+N to toggle between 6KRO and NKRO. This setting is persisted to the EEPROM and thus persists between restarts.

// SWEDISH LAYOUT

/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ § │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ + │ ´ │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ Å │ ¨ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │ A │ S │ D │ F │ G │ H │ J │ K │ L │ Ö │ Ä │ ' │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ < │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ - │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */

    [_BASE] = LAYOUT(
        KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,   KC_F12,  KC_PSCR,          KC_MUTE,
        SE_SECT, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    SE_PLUS,  SE_ACUT, KC_BSPC,          KC_DEL,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    SE_ARNG,  SE_DIAE,                   KC_PGUP,
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    SE_ODIA, SE_ADIA,  SE_QUOT, KC_ENT,           KC_PGDN,
        KC_LSFT, SE_LABK, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,           KC_RSFT, KC_UP,   KC_END,
        KC_LCTL, KC_LGUI, KC_LALT,                            KC_SPC,                             KC_RALT, MO(_FN1), KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
    ),

    [_FN1] = LAYOUT(
         KC_TRNS, KC_MYCM, KC_WHOM,  KC_CALC, KC_MSEL, KC_MPRV, KC_MNXT, KC_MPLY, KC_MSTP, KC_MUTE, KC_VOLD, KC_VOLU, KC_TRNS,     KC_TRNS,           KC_TRNS,
         KC_TRNS, RGB_TOG, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     RESET,             KC_TRNS,
         KC_TRNS, KC_TRNS, RGB_VAI,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                        KC_TRNS,
         KC_TRNS, KC_TRNS, RGB_VAD,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS,           KC_TRNS,
         KC_TRNS, KC_TRNS, RGB_LOL,  RGB_HUI, KC_TRNS, KC_TRNS, KC_TRNS, NK_TOGG, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,              KC_TRNS, RGB_MOD,  KC_TRNS,
         KC_TRNS, KC_TRNS, KC_TRNS,                             KC_TRNS,                            KC_TRNS, KC_TRNS, MO(_ERST), RGB_SPD, RGB_RMOD, RGB_SPI
    ),

    [_ERST] = LAYOUT( 
         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,
         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, EEP_RST,          KC_TRNS,
         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS,
         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,
         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS,
         KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS,                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),

};

/* // clang-format on

#ifdef ENCODER_ENABLE
    bool encoder_update_user(uint8_t index, bool clockwise) {
        if (clockwise) {
        tap_code(KC_VOLU);
        } else {
        tap_code(KC_VOLD);
        }
        return true;
} */

#if defined(ENCODER_ENABLE) && !defined(ENCODER_DEFAULTACTIONS_ENABLE)     // Encoder Functionality when not using userspace defaults

void encoder_action_rgbhue(bool clockwise) {
        if (clockwise)
            rgblight_increase_hue_noeeprom();
        else
            rgblight_decrease_hue_noeeprom();
    }

    bool encoder_update_user(uint8_t index, bool clockwise) {
        uint8_t mods_state = get_mods();
        if (mods_state & MOD_BIT(KC_LSFT) ) { // If you are holding L shift, encoder changes layers
            encoder_action_layerchange(clockwise);
        } else if (mods_state & MOD_BIT(KC_RSFT) ) { // If you are holding R shift, Page up/dn
            unregister_mods(MOD_BIT(KC_RSFT));
            encoder_action_navpage(clockwise);
            register_mods(MOD_BIT(KC_RSFT));
        } else if (mods_state & MOD_BIT(KC_LCTL)) {  // if holding Left Ctrl, navigate next/prev word
            encoder_action_navword(clockwise);
        } else if (mods_state & MOD_BIT(KC_RCTL)) {  // if holding Right Ctrl, change rgb hue/colour
            encoder_action_rgbhue(clockwise);
        } else if (mods_state & MOD_BIT(KC_LALT)) {  // if holding Left Alt, change media next/prev track
            encoder_action_mediatrack(clockwise);
        } else  {
            switch(get_highest_layer(layer_state)) {
            case _FN1:
                #ifdef IDLE_TIMEOUT_ENABLE
                    timeout_update_threshold(clockwise);
                #endif
                break;
            default:
                encoder_action_volume(clockwise);       // Otherwise it just changes volume
                break;
            }
        }
        return true;
    }
#endif

#ifdef RGB_MATRIX_ENABLE

    if (get_rgb_lolmode()) {

        // Color LoL keys
        rgb_matrix_set_color_all(RGB_BLACK);
        rgb_matrix_set_color(LED_LIST_LOL_ABILITIES, RGB_GREEN);
        rgb_matrix_set_color(LED_LIST_LOL_SUMMS, RGB_BLUE);
        rgb_matrix_set_color(LED_LIST_LOL_ITEMS, RGB_GOLD);
        rgb_matrix_set_color(LED_LIST_LOL_MISC, RGB_ORANGE);
        rgb_matrix_set_color(LED_LIST_LOL_MISC, RGB_WHITE);
        rgb_matrix_set_color(LED_LIST_LOL_MISC, RGB_WHITE);

        // Color modifier key
        rgb_matrix_set_color(LED_RCTL, RGB_WHITE);

        // Color LEDs on the sides
        rgb_matrix_set_color(LED_L1, RGB_WHITE);
        rgb_matrix_set_color(LED_L2, RGB_WHITE);
        rgb_matrix_set_color(LED_L3, RGB_WHITE);
        rgb_matrix_set_color(LED_L4, RGB_WHITE);
        rgb_matrix_set_color(LED_L5, RGB_WHITE);
        rgb_matrix_set_color(LED_L6, RGB_WHITE);
        rgb_matrix_set_color(LED_L7, RGB_WHITE);
        rgb_matrix_set_color(LED_L8, RGB_WHITE);
        rgb_matrix_set_color(LED_R1, RGB_WHITE);
        rgb_matrix_set_color(LED_R2, RGB_WHITE);
        rgb_matrix_set_color(LED_R3, RGB_WHITE);
        rgb_matrix_set_color(LED_R4, RGB_WHITE);
        rgb_matrix_set_color(LED_R5, RGB_WHITE);
        rgb_matrix_set_color(LED_R6, RGB_WHITE);
        rgb_matrix_set_color(LED_R7, RGB_WHITE);
        rgb_matrix_set_color(LED_R8, RGB_WHITE);
        
    } else {
        rgb_matrix_set_color_all(RGB_SKYEBLUE);
    }
    

    layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
    case _BASE:
        // Color modifier key
        rgb_matrix_set_color(LED_FN, RGB_WHITE);
        break;
    case _FN1:
        // Color media keys
        rgb_matrix_set_color(LED_F5, RGB_GOLD); // prev.
        rgb_matrix_set_color(LED_F6, RGB_GOLD); // next.
        rgb_matrix_set_color(LED_F7, RGB_GREEN); // play.
        rgb_matrix_set_color(LED_F8, RGB_ORANGE); // stop. 
        // Color modifier key
        rgb_matrix_set_color(LED_RCTL, RGB_WHITE);
        // Color reset key
        rgb_matrix_set_color(LED_BSPC, RGB_RED);
        break;
    case _ERST:
        // Color reset key
        rgb_matrix_set_color(LED_BSPC, RGB_RED);
        break;
    default: //  for any other layers, or the default layer
        rgb_matrix_set_color_all(RGB_SKYEBLUE); // Default startup colour
        break;
    }
    return state;
    }
    
    void rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
        
        // Om caps lock på - tangenterna och sido LEDs lyser rött
        if (host_keyboard_led_state().caps_lock) {
            for (uint8_t i = led_min; i <= led_max; i++) {
                if (g_led_config.flags[i] & LED_FLAG_KEYLIGHT) {
                    rgb_matrix_set_color(i, RGB_RED);
                }
            }
            rgb_matrix_set_color(LED_L1, RGB_RED);
            rgb_matrix_set_color(LED_L2, RGB_RED);
            rgb_matrix_set_color(LED_L3, RGB_RED);
            rgb_matrix_set_color(LED_L4, RGB_RED);
            rgb_matrix_set_color(LED_L5, RGB_RED);
            rgb_matrix_set_color(LED_L6, RGB_RED);
            rgb_matrix_set_color(LED_L7, RGB_RED);
            rgb_matrix_set_color(LED_L8, RGB_RED);
            rgb_matrix_set_color(LED_R1, RGB_RED);
            rgb_matrix_set_color(LED_R2, RGB_RED);
            rgb_matrix_set_color(LED_R3, RGB_RED);
            rgb_matrix_set_color(LED_R4, RGB_RED);
            rgb_matrix_set_color(LED_R5, RGB_RED);
            rgb_matrix_set_color(LED_R6, RGB_RED);
            rgb_matrix_set_color(LED_R7, RGB_RED);
            rgb_matrix_set_color(LED_R8, RGB_RED);
        }

        // Tänd enbart Win key röd när tangentbordet disabled
        if (keymap_config.no_gui) {
            rgb_matrix_set_color(LED_LWIN, RGB_RED);  
        } 
    }

    void keyboard_post_init_user(void) {
        #ifdef RGB_MATRIX_ENABLE
            rgb_matrix_mode(RGB_MATRIX_SOLID_COLOR); //
            rgb_matrix_set_color_all(RGB_SKYEBLUE); // Default startup colour
            activate_rgb_lolmode(false);  // Set to true if you want to startup in nightmode, otherwise use Fn + Z to toggle
        #endif
    }

#endif