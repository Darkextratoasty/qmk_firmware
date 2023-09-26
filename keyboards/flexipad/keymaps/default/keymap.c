// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

//notation: capital C, S, A = ctrl, shift, alt (ex. CAv = ctrl+alt+v, SAm = shift+alt+m)
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* numpad layer
     * ┌───┬───┬───┬───┐
     * │DF1│ / │ * │ - │
     * ├───┼───┼───┼───┤
     * │ 7 │ 8 │ 9 │ + │
     * ├───┼───┼───┼───┤
     * │ 4 │ 5 │ 6 │TAB│
     * ├───┼───┼───┼───┤
     * │ 1 │ 2 │ 3 │ENT│
     * ├───┼───┼───┼───┤
     * │CAL│ 0 │ . │ENT│ //CAL=launch calculator
     * └───┴───┴───┴───┘
     */
    [0] = LAYOUT_numpad_5x4(
        DF(1),              KC_PSLS,            KC_PAST,            KC_PMNS,
        KC_P7,              KC_P8,              KC_P9,              KC_PPLS,
        KC_P4,              KC_P5,              KC_P6,              KC_TAB,
        KC_P1,              KC_P2,              KC_P3,              KC_PENT,
        KC_CALC,            KC_P0,              KC_PDOT,            KC_PENT
    ),

    /* Autodesk EAGLE PCB layer
     * ┌───┬───┬───┬───┐
     * │DF2│ C1│CAv│ Cm│
     * ├───┼───┼───┼───┤
     * │ Cy│ An│CAd│CSc│
     * ├───┼───┼───┼───┤
     * │ Cz│CSv│ Ch│ Ct│
     * ├───┼───┼───┼───┤
     * │ENT│CSn│CSr│CSl│
     * ├───┼───┼───┼───┤
     * │ESC│CSa│ Cd│ Cs│
     * └───┴───┴───┴───┘
     */
    [1] = LAYOUT_numpad_5x4(
        DF(2),              LCTL(KC_1),            LCTL(LALT(KC_V)),      LCTL(KC_M),
        LCTL(KC_Y),            LALT(KC_N),            LCTL(LALT(KC_D)),      LCTL(LSFT(KC_C)),
        LCTL(KC_Z),            LCTL(LSFT(KC_V)),      LCTL(KC_H),            LCTL(KC_T),
        KC_ENT,             LCTL(LSFT(KC_N)),      LCTL(LSFT(KC_R)),      LCTL(LSFT(KC_L)),
        KC_ESC,             LCTL(LSFT(KC_A)),      LCTL(KC_D),            LCTL(KC_S)
    ),

    /* Autodesk Fusion360 3D layer
     * ┌───┬───┬───┬───┐
     * │DF3│CAm│ j │CSp│
     * ├───┼───┼───┼───┤
     * │CAs│CSc│ q │CAh│
     * ├───┼───┼───┼───┤
     * │TAB│CSr│ e │SAm│
     * ├───┼───┼───┼───┤
     * │ENT│ i │CAy│CAf│
     * ├───┼───┼───┼───┤
     * │ESC│SAc│CAx│ f │
     * └───┴───┴───┴───┘
     */
    [2] = LAYOUT_numpad_5x4(
        DF(3),              LCTL(LALT(KC_M)),      KC_J,               LCTL(LSFT(KC_P)),
        LCTL(LALT(KC_S)),      LCTL(LSFT(KC_C)),      KC_Q,               LCTL(LALT(KC_H)),
        KC_TAB,             LCTL(LSFT(KC_R)),      KC_E,               LSFT(LALT(KC_M)),
        KC_ENT,             KC_I,               LCTL(LALT(KC_Y)),      LCTL(LALT(KC_F)),
        KC_ESC,             LSFT(LALT(KC_C)),      LCTL(LALT(KC_X)),      KC_F
    ),

    /* Autodesk Fusion360 Sketch layer
     * ┌───┬───┬───┬───┐
     * │DF4│ o │SAh│CSp│
     * ├───┼───┼───┼───┤
     * │SAf│CSc│SAp│SAm│
     * ├───┼───┼───┼───┤
     * │TAB│CSr│ l │SAe│
     * ├───┼───┼───┼───┤
     * │ENT│ d │ c │SAt│
     * ├───┼───┼───┼───┤
     * │ESC│ p │ r │SAc│
     * └───┴───┴───┴───┘
     */
    [3] = LAYOUT_numpad_5x4(
        DF(4),              KC_O,               LSFT(LALT(KC_H)),      LCTL(LSFT(KC_P)),
        LSFT(LALT(KC_F)),      LCTL(LSFT(KC_C)),      LSFT(LALT(KC_P)),      LSFT(LALT(KC_M)),
        KC_TAB,             LCTL(LSFT(KC_R)),      KC_L,               LSFT(LALT(KC_E)),
        KC_ENT,             KC_D,               KC_C,               LSFT(LALT(KC_T)),
        KC_ESC,             KC_P,               KC_R,               LSFT(LALT(KC_C))
    ),
    /* Special maintenance + adjustment layer
     * ┌───┬───┬───┬───┐
     * │DF0│BLC│BTG│   │ //BLC=backlight level cycle, BTG=backlight toggle
     * ├───┼───┼───┼───┤
     * │DBG│BLD│EPC│RBT│ //DBG=debug toggle, BLD=enter bootloader, EPC=clear EEPROM, RBT=reboot
     * ├───┼───┼───┼───┤
     * │SYS│SYW│   │   │ //SYS=system sleep, SYM=system wake
     * ├───┼───┼───┼───┤
     * │RM1│RM2│RMS│   │ //RMx=record macro number x, RMS=stop recording macro
     * ├───┼───┼───┼───┤
     * │PM1│PM2│   │   │ //PMx=playback macro number x
     * └───┴───┴───┴───┘
     */
    [4] = LAYOUT_numpad_5x4(
        DF(0),      BL_STEP,        BL_TOGG,        XXXXXXX,
        DB_TOGG,      QK_BOOT,          EE_CLR,          QK_RBT,
        KC_SLEP,      KC_WAKE,          XXXXXXX,          XXXXXXX,
        DM_REC1,      DM_REC2,          DM_RSTP,          XXXXXXX,
        DM_PLY1,    DM_PLY1,          XXXXXXX,        XXXXXXX
    ),
};

const rgblight_segment_t PROGMEM my_layer0_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 26, HSV_WHITE}
);
const rgblight_segment_t PROGMEM my_layer1_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 26, HSV_PURPLE}
);
const rgblight_segment_t PROGMEM my_layer2_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 26, HSV_BLUE}
);
const rgblight_segment_t PROGMEM my_layer3_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 26, HSV_CYAN}
);
const rgblight_segment_t PROGMEM my_layer4_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 26, HSV_RED}
);

const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    my_layer0_layer,
    my_layer1_layer,
    my_layer2_layer,
    my_layer3_layer,
    my_layer4_layer
);

void keyboard_post_init_user(void) {
    rgblight_layers = my_rgb_layers;
}

layer_state_t default_layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(0, layer_state_cmp(state, 0));
    rgblight_set_layer_state(1, layer_state_cmp(state, 1));
    rgblight_set_layer_state(2, layer_state_cmp(state, 2));
    rgblight_set_layer_state(3, layer_state_cmp(state, 3));
    rgblight_set_layer_state(4, layer_state_cmp(state, 4));
    return state;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(1, layer_state_cmp(state, 1));
    rgblight_set_layer_state(2, layer_state_cmp(state, 2));
    rgblight_set_layer_state(3, layer_state_cmp(state, 3));
    rgblight_set_layer_state(4, layer_state_cmp(state, 4));
    return state;
}