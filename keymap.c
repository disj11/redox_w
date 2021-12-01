#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _WIN 0
#define _MAC 1
#define _SYMB 2
#define _IDEA_W 3
#define _IDEA_M 4
#define _ADJUST 5
#define _CSFT_W MOD_LCTL|MOD_LSFT
#define _CSFT_M MOD_LGUI|MOD_LSFT

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_WIN] = LAYOUT(
  //┌────────────┬────────────┬────────────┬────────────┬────────────┬────────────┐                                                           ┌────────────┬────────────┬────────────┬────────────┬────────────┬────────────┐
     LT(_IDEA_W,KC_GRV),KC_1    ,KC_2        ,KC_3        ,KC_4        ,KC_5      ,                                                            KC_7        ,KC_8        ,KC_9        ,KC_0        ,KC_MINS     ,LT(_IDEA_W,KC_EQL),
  //├────────────┼────────────┼────────────┼────────────┼────────────┼────────────┼────────────┐                                 ┌────────────┼────────────┼────────────┼────────────┼────────────┼────────────┼────────────┤
     KC_TAB      ,KC_Q        ,KC_W        ,KC_E        ,KC_R        ,KC_T        ,KC_6        ,                                  TO(_MAC)    ,KC_Y        ,KC_U        ,KC_I        ,KC_O        ,KC_P        ,KC_BSLS     ,
  //├────────────┼────────────┼────────────┼────────────┼────────────┼────────────┼────────────┤                                 ├────────────┼────────────┼────────────┼────────────┼────────────┼────────────┼────────────┤
     KC_ESC      ,KC_A        ,KC_S        ,KC_D        ,KC_F        ,KC_G        ,KC_HOME     ,                                  KC_END      ,KC_H        ,KC_J        ,KC_K        ,KC_L        ,KC_SCLN     ,KC_QUOT     ,
  //├────────────┼────────────┼────────────┼────────────┼────────────┼────────────┼────────────┼────────────┐       ┌────────────┼────────────┼────────────┼────────────┼────────────┼────────────┼────────────┼────────────┤
     KC_LSFT     ,KC_Z        ,KC_X        ,KC_C        ,KC_V        ,KC_B        ,KC_CAPS     ,KC_NLCK     ,        MO(_ADJUST) ,KC_INS      ,KC_N        ,KC_M        ,KC_COMM     ,KC_DOT      ,KC_SLSH     ,KC_RSFT     ,
  //├────────────┼────────────┼────────────┼────────────┼──────┬─────┴─────┬──────┼────────────┼────────────┤       ├────────────┼────────────┼──────┬─────┴─────┬──────┼────────────┼────────────┼────────────┼────────────┤
     OSM(_CSFT_W),KC_LCTRL    ,KC_LGUI     ,LALT_T(KC_LANG1)   ,LT(_SYMB,KC_SPC)  ,LCTL_T(KC_TAB),KC_DEL    ,        KC_BSPC     ,KC_ENT      ,      LT(_SYMB,KC_SPC)   ,KC_LEFT     ,KC_DOWN     ,KC_UP       ,KC_RGHT
  //└────────────┴────────────┴────────────┴────────────┘      └───────────┘      └────────────┴────────────┘       └────────────┴────────────┘      └───────────┘      └────────────┴────────────┴────────────┴────────────┘
  ),

  [_MAC] = LAYOUT(
  //┌────────────┬────────────┬────────────┬────────────┬────────────┬────────────┐                                                           ┌────────────┬────────────┬────────────┬────────────┬────────────┬────────────┐
     LT(_IDEA_M,KC_GRV),KC_1    ,KC_2        ,KC_3        ,KC_4        ,KC_5      ,                                                            KC_7        ,KC_8        ,KC_9        ,KC_0        ,KC_MINS     ,LT(_IDEA_M,KC_EQL),
  //├────────────┼────────────┼────────────┼────────────┼────────────┼────────────┼────────────┐                                 ┌────────────┼────────────┼────────────┼────────────┼────────────┼────────────┼────────────┤
     KC_TAB      ,KC_Q        ,KC_W        ,KC_E        ,KC_R        ,KC_T        ,KC_6        ,                                  TO(_WIN)    ,KC_Y        ,KC_U        ,KC_I        ,KC_O        ,KC_P        ,KC_BSLS     ,
  //├────────────┼────────────┼────────────┼────────────┼────────────┼────────────┼────────────┤                                 ├────────────┼────────────┼────────────┼────────────┼────────────┼────────────┼────────────┤
     KC_ESC      ,KC_A        ,KC_S        ,KC_D        ,KC_F        ,KC_G        ,KC_HOME     ,                                  KC_END      ,KC_H        ,KC_J        ,KC_K        ,KC_L        ,KC_SCLN     ,KC_QUOT     ,
  //├────────────┼────────────┼────────────┼────────────┼────────────┼────────────┼────────────┼────────────┐       ┌────────────┼────────────┼────────────┼────────────┼────────────┼────────────┼────────────┼────────────┤
     KC_LSFT     ,KC_Z        ,KC_X        ,KC_C        ,KC_V        ,KC_B        ,KC_CAPS     ,KC_NLCK     ,        MO(_ADJUST) ,KC_INS      ,KC_N        ,KC_M        ,KC_COMM     ,KC_DOT      ,KC_SLSH     ,KC_RSFT     ,
  //├────────────┼────────────┼────────────┼────────────┼──────┬─────┴─────┬──────┼────────────┼────────────┤       ├────────────┼────────────┼──────┬─────┴─────┬──────┼────────────┼────────────┼────────────┼────────────┤
     OSM(_CSFT_M),KC_LCTRL    ,KC_LCMD     ,LOPT_T(KC_LANG1)   ,LT(_SYMB,KC_SPC)  ,LCMD_T(KC_TAB),KC_DEL    ,        KC_BSPC     ,KC_ENT      ,      LT(_SYMB,KC_SPC)   ,KC_LEFT     ,KC_DOWN     ,KC_UP       ,KC_RGHT
  //└────────────┴────────────┴────────────┴────────────┘      └───────────┘      └────────────┴────────────┘       └────────────┴────────────┘      └───────────┘      └────────────┴────────────┴────────────┴────────────┘
  ),

  [_SYMB] = LAYOUT(
  //┌────────────┬────────────┬────────────┬────────────┬────────────┬────────────┐                                                           ┌────────────┬────────────┬────────────┬────────────┬────────────┬────────────┐
     KC_TRNS     ,KC_F1       ,KC_F2       ,KC_F3       ,KC_F4       ,KC_F5       ,                                                            KC_F7       ,KC_F8       ,KC_F9       ,KC_F10       ,KC_F11     ,KC_F12      ,
  //├────────────┼────────────┼────────────┼────────────┼────────────┼────────────┼────────────┐                                 ┌────────────┼────────────┼────────────┼────────────┼────────────┼────────────┼────────────┤
     KC_TRNS     ,KC_PPLS     ,KC_DLR      ,KC_LCBR     ,KC_RCBR     ,KC_SLASH    ,KC_F6       ,                                  KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,KC_UP       ,KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,
  //├────────────┼────────────┼────────────┼────────────┼────────────┼────────────┼────────────┤                                 ├────────────┼────────────┼────────────┼────────────┼────────────┼────────────┼────────────┤
     KC_CAPS     ,KC_PAST     ,KC_HASH     ,KC_LPRN     ,KC_RPRN     ,KC_AMPR     ,KC_TRNS     ,                                  KC_TRNS     ,KC_TRNS     ,KC_LEFT     ,KC_DOWN     ,KC_RGHT     ,KC_TRNS     ,KC_TRNS     ,
  //├────────────┼────────────┼────────────┼────────────┼────────────┼────────────┼────────────┼────────────┐       ┌────────────┼────────────┼────────────┼────────────┼────────────┼────────────┼────────────┼────────────┤
     KC_TRNS     ,KC_PEQL     ,KC_MINS     ,KC_LBRC     ,KC_RBRC     ,KC_GT       ,KC_TRNS     ,KC_TRNS     ,        KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,
  //├────────────┼────────────┼────────────┼────────────┼──────┬─────┴─────┬──────┼────────────┼────────────┤       ├────────────┼────────────┼──────┬─────┴─────┬──────┼────────────┼────────────┼────────────┼────────────┤
     KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,KC_TRNS            ,KC_TRNS           ,KC_TRNS     ,KC_TRNS     ,        KC_TRNS     ,KC_TRNS     ,       KC_TRNS    ,       KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,KC_TRNS
  //└────────────┴────────────┴────────────┴────────────┘      └───────────┘      └────────────┴────────────┘       └────────────┴────────────┘      └───────────┘      └────────────┴────────────┴────────────┴────────────┘
  ),

  [_IDEA_W] = LAYOUT(
  //┌────────────┬────────────┬────────────┬────────────┬────────────┬────────────┐                                                           ┌────────────┬────────────┬────────────┬────────────┬────────────┬────────────┐
     KC_TRNS     ,LALT(KC_F1) ,KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,                                                            LOPT(KC_F7) ,KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,LCTL(KC_F12),
  //├────────────┼────────────┼────────────┼────────────┼────────────┼────────────┼────────────┐                                 ┌────────────┼────────────┼────────────┼────────────┼────────────┼────────────┼────────────┤
     KC_TRNS     ,LALT(KC_Q)  ,KC_TRNS     ,KC_TRNS     ,S(KC_F6)    ,KC_TRNS     ,S(KC_F6)    ,                                  KC_TRNS     ,KC_TRNS     ,LOPT(KC_F7) ,KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,
  //├────────────┼────────────┼────────────┼────────────┼────────────┼────────────┼────────────┤                                 ├────────────┼────────────┼────────────┼────────────┼────────────┼────────────┼────────────┤
     KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,LCTL(KC_LBRC),                                LCTL(KC_RBRC),C(S(KC_H))  ,KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,
  //├────────────┼────────────┼────────────┼────────────┼────────────┼────────────┼────────────┼────────────┐       ┌────────────┼────────────┼────────────┼────────────┼────────────┼────────────┼────────────┼────────────┤
     KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,        KC_TRNS     ,KC_TRNS     ,LCA(KC_N)   ,LCTL(KC_F12),KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,
  //├────────────┼────────────┼────────────┼────────────┼──────┬─────┴─────┬──────┼────────────┼────────────┤       ├────────────┼────────────┼──────┬─────┴─────┬──────┼────────────┼────────────┼────────────┼────────────┤
     KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,KC_TRNS            ,KC_TRNS    ,       KC_LCMD     ,KC_TRNS     ,        KC_TRNS     ,KC_TRNS     ,       KC_TRNS    ,       KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,KC_TRNS
  //└────────────┴────────────┴────────────┴────────────┘      └───────────┘      └────────────┴────────────┘       └────────────┴────────────┘      └───────────┘      └────────────┴────────────┴────────────┴────────────┘
  ),

  [_IDEA_M] = LAYOUT(
  //┌────────────┬────────────┬────────────┬────────────┬────────────┬────────────┐                                                           ┌────────────┬────────────┬────────────┬────────────┬────────────┬────────────┐
     KC_TRNS     ,LOPT(KC_F1) ,KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,                                                            LOPT(KC_F7) ,KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,LCMD(KC_F12),
  //├────────────┼────────────┼────────────┼────────────┼────────────┼────────────┼────────────┐                                 ┌────────────┼────────────┼────────────┼────────────┼────────────┼────────────┼────────────┤
     KC_TRNS     ,C(S(KC_Q))  ,KC_TRNS     ,KC_TRNS     ,S(KC_F6)    ,KC_TRNS     ,S(KC_F6)    ,                                  KC_TRNS     ,KC_TRNS     ,LOPT(KC_F7) ,KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,
  //├────────────┼────────────┼────────────┼────────────┼────────────┼────────────┼────────────┤                                 ├────────────┼────────────┼────────────┼────────────┼────────────┼────────────┼────────────┤
     KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,LAG(KC_LBRC),                                  LAG(KC_RBRC),SCMD(KC_H)  ,KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,
  //├────────────┼────────────┼────────────┼────────────┼────────────┼────────────┼────────────┼────────────┐       ┌────────────┼────────────┼────────────┼────────────┼────────────┼────────────┼────────────┼────────────┤
     KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,        KC_TRNS     ,KC_TRNS     ,LCA(KC_N)   ,LCMD(KC_F12),KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,
  //├────────────┼────────────┼────────────┼────────────┼──────┬─────┴─────┬──────┼────────────┼────────────┤       ├────────────┼────────────┼──────┬─────┴─────┬──────┼────────────┼────────────┼────────────┼────────────┤
     KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,KC_TRNS            ,KC_TRNS    ,       KC_LCMD     ,KC_TRNS     ,        KC_TRNS     ,KC_TRNS     ,       KC_TRNS    ,       KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,KC_TRNS
  //└────────────┴────────────┴────────────┴────────────┘      └───────────┘      └────────────┴────────────┘       └────────────┴────────────┘      └───────────┘      └────────────┴────────────┴────────────┴────────────┘
  ),

  [_ADJUST] = LAYOUT(
  //┌────────────┬────────────┬────────────┬────────────┬────────────┬────────────┐                                                           ┌────────────┬────────────┬────────────┬────────────┬────────────┬────────────┐
     KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,                                                            KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,
  //├────────────┼────────────┼────────────┼────────────┼────────────┼────────────┼────────────┐                                 ┌────────────┼────────────┼────────────┼────────────┼────────────┼────────────┼────────────┤
     KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,RESET       ,KC_TRNS     ,KC_TRNS     ,                                  KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,
  //├────────────┼────────────┼────────────┼────────────┼────────────┼────────────┼────────────┤                                 ├────────────┼────────────┼────────────┼────────────┼────────────┼────────────┼────────────┤
     KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,                                  KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,
  //├────────────┼────────────┼────────────┼────────────┼────────────┼────────────┼────────────┼────────────┐       ┌────────────┼────────────┼────────────┼────────────┼────────────┼────────────┼────────────┼────────────┤
     KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,        KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,
  //├────────────┼────────────┼────────────┼────────────┼──────┬─────┴─────┬──────┼────────────┼────────────┤       ├────────────┼────────────┼──────┬─────┴─────┬──────┼────────────┼────────────┼────────────┼────────────┤
     KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,KC_TRNS            ,KC_TRNS    ,       KC_LCMD     ,KC_TRNS     ,        KC_TRNS     ,KC_TRNS     ,       KC_TRNS    ,       KC_TRNS     ,KC_TRNS     ,KC_TRNS     ,KC_TRNS
  //└────────────┴────────────┴────────────┴────────────┘      └───────────┘      └────────────┴────────────┘       └────────────┴────────────┘      └───────────┘      └────────────┴────────────┴────────────┴────────────┘
  )
};

layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
        case _WIN:
        case _MAC:
            set_led_off;
            break;
        case _SYMB:
            set_led_green;
            break;
        case _IDEA_W:
        case _IDEA_M:
            set_led_green;
            break;
        case _ADJUST:
            set_led_green;
            break;
        default:
            break;
    }
    return state;
}


