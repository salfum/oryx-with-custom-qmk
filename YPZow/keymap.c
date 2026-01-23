#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
};



enum tap_dance_codes {
  DANCE_0,
};

#define DUAL_FUNC_0 LT(4, KC_N)
#define DUAL_FUNC_1 LT(10, KC_F8)
#define DUAL_FUNC_2 LT(7, KC_F7)
#define DUAL_FUNC_3 LT(12, KC_F9)
#define DUAL_FUNC_4 LT(7, KC_F14)
#define DUAL_FUNC_5 LT(1, KC_H)
#define DUAL_FUNC_6 LT(11, KC_F23)
#define DUAL_FUNC_7 LT(3, KC_F11)
#define DUAL_FUNC_8 LT(12, KC_F2)
#define DUAL_FUNC_9 LT(6, KC_F9)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    LSFT(KC_RIGHT_CTRL),KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_NO,          
    LALT(KC_LEFT_SHIFT),MT(MOD_LALT, KC_A),MT(MOD_LCTL, KC_S),MT(MOD_LSFT, KC_D),MT(MOD_RGUI, KC_F),KC_G,                                           KC_H,           MT(MOD_RGUI, KC_J),MT(MOD_RSFT, KC_K),MT(MOD_RCTL, KC_L),MT(MOD_RALT, KC_SCLN),KC_QUOTE,       
    KC_GRAVE,       KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_LBRC,        
                                                    LT(5, KC_SPACE),OSL(1),                                         OSL(6),         LT(2, KC_BSPC)
  ),
  [1] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          LSFT(KC_TAB),   KC_MINUS,       KC_HASH,        KC_EQUAL,       KC_PLUS,                                        RU_COLN,        RU_COMM,        KC_ASTR,        KC_GRAVE,       LSFT(KC_ENTER), KC_NO,          
    KC_NO,          KC_ESCAPE,      KC_UNDS,        KC_LBRC,        KC_RBRC,        DUAL_FUNC_0,                                    DUAL_FUNC_2,    DUAL_FUNC_3,    KC_RPRN,        KC_COLN,        KC_ENTER,       LSFT(KC_INSERT),
    KC_NO,          KC_TAB,         KC_NO,          KC_LABK,        DUAL_FUNC_1,    KC_PIPE,                                        KC_NO,          DUAL_FUNC_4,    KC_RCBR,        KC_AMPR,        KC_DELETE,      KC_NO,          
                                                    TO(0),          KC_TRANSPARENT,                                 LALT(KC_LEFT_SHIFT),TO(2)
  ),
  [2] = LAYOUT_voyager(
    TO(4),          RGB_MODE_FORWARD,RGB_TOG,        RGB_VAD,        RGB_VAI,        TOGGLE_LAYER_COLOR,                                RGB_HUD,        KC_MEDIA_PLAY_PAUSE,KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,RGB_HUI,        QK_BOOT,        
    QK_DYNAMIC_TAPPING_TERM_UP,LSFT(KC_TAB),   QK_LLCK,        KC_MS_UP,       LCTL(KC_TAB),   QK_DYNAMIC_TAPPING_TERM_PRINT,                                KC_HOME,        DUAL_FUNC_5,    DUAL_FUNC_6,    DUAL_FUNC_7,    LSFT(KC_ENTER), KC_NO,          
    KC_WWW_BACK,    KC_ESCAPE,      KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_BRIGHTNESS_UP,                                KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_ENTER,       KC_WWW_FORWARD, 
    QK_DYNAMIC_TAPPING_TERM_DOWN,KC_TAB,         KC_MS_BTN3,     KC_NO,          TD(DANCE_0),    KC_BRIGHTNESS_DOWN,                                DUAL_FUNC_8,    KC_MS_WH_DOWN,  KC_MS_WH_UP,    KC_AUDIO_VOL_UP,KC_DELETE,      TO(3),          
                                                    KC_MS_BTN1,     KC_MS_BTN2,                                     TO(0),          TO(0)
  ),
  [3] = LAYOUT_voyager(
    TO(0),          KC_5,           KC_1,           KC_2,           KC_3,           KC_4,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    DUAL_FUNC_9,    KC_T,           KC_Q,           KC_W,           KC_E,           KC_R,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    MT(MOD_LCTL, KC_ESCAPE),KC_G,           KC_A,           KC_S,           KC_D,           KC_F,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_B,           KC_Z,           KC_X,           KC_C,           KC_V,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_LEFT_SHIFT,  KC_SPACE,                                       KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_voyager(
    TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_F,           KC_P,           KC_B,                                           KC_J,           KC_L,           KC_U,           KC_Y,           KC_SCLN,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_A,           KC_R,           KC_S,           MT(MOD_LGUI, KC_T),KC_G,                                           KC_M,           MT(MOD_RGUI, KC_N),KC_E,           KC_I,           KC_O,           KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_Z,           KC_X,           KC_C,           KC_D,           KC_V,                                           KC_K,           KC_H,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          LSFT(KC_TAB),   KC_F7,          KC_F8,          KC_F9,          KC_NO,                                          KC_KP_EQUAL,    KC_7,           KC_8,           KC_9,           KC_KP_ASTERISK, KC_KP_SLASH,    
    KC_NO,          KC_ESCAPE,      MT(MOD_LCTL, KC_F1),MT(MOD_LSFT, KC_F2),MT(MOD_RGUI, KC_F3),KC_F10,                                         KC_0,           MT(MOD_LGUI, KC_1),MT(MOD_RSFT, KC_2),MT(MOD_RCTL, KC_3),KC_ENTER,       KC_KP_MINUS,    
    KC_NO,          KC_TAB,         KC_F4,          KC_F5,          KC_F6,          KC_NO,                                          KC_KP_COMMA,    KC_4,           KC_5,           KC_6,           KC_KP_DOT,      KC_KP_PLUS,     
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_NUM,         KC_BSPC
  ),
  [6] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, LSFT(KC_TAB),   KC_Q,           OSM(MOD_LSFT),  KC_NO,          RU_YO,                                          KC_NO,          KC_Y,           OSM(MOD_RSFT),  KC_LBRC,        LSFT(KC_ENTER), KC_TRANSPARENT, 
    KC_NO,          KC_ESCAPE,      KC_NO,          OSM(MOD_LSFT),  ST_MACRO_0,     KC_NO,                                          KC_NO,          ST_MACRO_1,     KC_RIGHT_SHIFT, KC_NO,          KC_ENTER,       KC_NO,          
    KC_NO,          KC_TAB,         KC_Z,           KC_NO,          KC_NO,          RU_SHTI,                                        KC_NO,          RU_HARD,        KC_NO,          RU_HA,          KC_DELETE,      KC_NO,          
                                                    TO(0),          KC_TRANSPARENT,                                 LALT(KC_LEFT_SHIFT),TO(2)
  ),
};



uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_V:
            return g_tapping_term -20;
        case LT(5, KC_SPACE):
            return g_tapping_term -20;
        case KC_M:
            return g_tapping_term -20;
        case LT(2, KC_BSPC):
            return g_tapping_term -30;
        default:
            return g_tapping_term;
    }
}


extern rgb_config_t rgb_matrix_config;

RGB hsv_to_rgb_with_value(HSV hsv) {
  RGB rgb = hsv_to_rgb( hsv );
  float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
  return (RGB){ f * rgb.r, f * rgb.g, f * rgb.b };
}

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {123,227,201}, {0,0,0}, {0,0,0}, {0,0,0}, {123,227,201}, {0,0,0}, {0,0,0}, {0,0,0}, {123,227,201}, {0,0,0}, {0,0,0}, {0,0,0}, {123,227,201}, {0,0,0}, {0,0,0}, {0,0,0}, {123,227,201}, {0,217,190}, {14,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {123,227,201}, {0,0,0}, {0,0,0}, {0,0,0}, {123,227,201}, {0,0,0}, {0,0,0}, {0,0,0}, {123,227,201}, {0,0,0}, {0,0,0}, {0,0,0}, {123,227,201}, {0,0,0}, {0,0,0}, {0,0,0}, {123,227,201}, {0,0,0}, {14,218,204}, {0,217,190} },

    [1] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {150,208,255}, {38,183,238}, {38,183,238}, {38,183,238}, {38,183,238}, {0,0,0}, {150,208,255}, {11,162,246}, {11,162,246}, {11,162,246}, {11,162,246}, {0,0,0}, {150,208,255}, {0,0,0}, {250,145,181}, {250,145,181}, {250,145,181}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {38,183,238}, {38,183,238}, {38,183,238}, {0,0,0}, {150,208,255}, {0,0,0}, {11,162,246}, {11,162,246}, {11,162,246}, {11,162,246}, {150,208,255}, {0,0,0}, {0,0,0}, {250,145,181}, {250,145,181}, {0,0,0}, {150,208,255}, {0,0,0}, {150,208,255}, {0,0,0} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {150,208,255}, {0,0,0}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {150,208,255}, {41,255,255}, {41,255,255}, {41,255,255}, {0,0,0}, {0,0,0}, {150,208,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {31,255,255}, {31,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {38,183,238}, {38,183,238}, {38,183,238}, {38,183,238}, {150,208,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {150,208,255}, {0,0,0}, {31,255,255}, {31,255,255} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {6,162,187}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [4] = { {0,183,238}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {123,227,201}, {0,0,0}, {0,0,0}, {0,0,0}, {123,227,201}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {123,227,201}, {0,0,0}, {0,0,0}, {123,227,201}, {0,0,0}, {0,0,0}, {0,0,0}, {123,227,201}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {123,227,201}, {0,0,0}, {0,0,0}, {123,227,201}, {0,0,0}, {0,0,0}, {0,0,0}, {123,227,201}, {0,0,0}, {0,0,0}, {123,227,201}, {0,0,0}, {123,227,201}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [5] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {150,208,255}, {123,227,201}, {123,227,201}, {123,227,201}, {0,0,0}, {0,0,0}, {150,208,255}, {174,243,255}, {174,243,255}, {174,243,255}, {123,227,201}, {0,0,0}, {150,208,255}, {123,227,201}, {123,227,201}, {123,227,201}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {47,253,255}, {123,227,201}, {123,227,201}, {123,227,201}, {47,253,255}, {47,253,255}, {123,227,201}, {174,243,255}, {174,243,255}, {174,243,255}, {150,208,255}, {47,253,255}, {47,253,255}, {123,227,201}, {123,227,201}, {123,227,201}, {47,253,255}, {47,253,255}, {47,253,255}, {0,0,0} },

    [6] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {150,208,255}, {0,0,0}, {14,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {150,208,255}, {0,0,0}, {14,218,204}, {14,218,204}, {0,0,0}, {0,0,0}, {150,208,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {14,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {14,218,204}, {0,0,0}, {150,208,255}, {0,0,0}, {0,0,0}, {14,218,204}, {14,218,204}, {0,0,0}, {150,208,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {150,208,255}, {0,0,0}, {150,208,255}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb_with_value(hsv);
        rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (!keyboard_config.disable_layer_led) { 
    switch (biton32(layer_state)) {
      case 0:
        set_layer_color(0);
        break;
      case 1:
        set_layer_color(1);
        break;
      case 2:
        set_layer_color(2);
        break;
      case 3:
        set_layer_color(3);
        break;
      case 4:
        set_layer_color(4);
        break;
      case 5:
        set_layer_color(5);
        break;
      case 6:
        set_layer_color(6);
        break;
     default:
        if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
          rgb_matrix_set_color_all(0, 0, 0);
        }
    }
  } else {
    if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
      rgb_matrix_set_color_all(0, 0, 0);
    }
  }

  return true;
}



typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,      
    SINGLE_HOLD,         
    DOUBLE_TAP,          
    DOUBLE_HOLD,         
    DOUBLE_SINGLE_TAP,   
    MORE_TAPS            
};

static tap dance_state[1];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LSFT(KC_PSCR));
        tap_code16(LSFT(KC_PSCR));
        tap_code16(LSFT(KC_PSCR));
    }
    if(state->count > 3) {
        tap_code16(LSFT(KC_PSCR));
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(LSFT(KC_PSCR)); break;
        case DOUBLE_TAP: register_code16(KC_PSCR); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LSFT(KC_PSCR)); register_code16(LSFT(KC_PSCR));
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(LSFT(KC_PSCR)); break;
        case DOUBLE_TAP: unregister_code16(KC_PSCR); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LSFT(KC_PSCR)); break;
    }
    dance_state[0].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case QK_MODS ... QK_MODS_MAX: 
    // Mouse keys with modifiers work inconsistently across operating systems, this makes sure that modifiers are always
    // applied to the mouse key that was pressed.
    if (IS_MOUSE_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode))) {
    if (record->event.pressed) {
        add_mods(QK_MODS_GET_MODS(keycode));
        send_keyboard_report();
        wait_ms(2);
        register_code(QK_MODS_GET_BASIC_KEYCODE(keycode));
        return false;
      } else {
        wait_ms(2);
        del_mods(QK_MODS_GET_MODS(keycode));
      }
    }
    break;
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_LEFT_SHIFT)));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_LEFT_SHIFT)));
    }
    break;

    case DUAL_FUNC_0:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_DQUO);
        } else {
          unregister_code16(KC_DQUO);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_BSLS);
        } else {
          unregister_code16(KC_BSLS);
        }  
      }  
      return false;
    case DUAL_FUNC_1:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_RABK);
        } else {
          unregister_code16(KC_RABK);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_PIPE);
        } else {
          unregister_code16(KC_PIPE);
        }  
      }  
      return false;
    case DUAL_FUNC_2:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_GRAVE);
        } else {
          unregister_code16(KC_GRAVE);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_SLASH);
        } else {
          unregister_code16(KC_SLASH);
        }  
      }  
      return false;
    case DUAL_FUNC_3:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_LPRN);
        } else {
          unregister_code16(KC_LPRN);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_RPRN);
        } else {
          unregister_code16(KC_RPRN);
        }  
      }  
      return false;
    case DUAL_FUNC_4:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_LCBR);
        } else {
          unregister_code16(KC_LCBR);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_PERC);
        } else {
          unregister_code16(KC_PERC);
        }  
      }  
      return false;
    case DUAL_FUNC_5:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_PGDN);
        } else {
          unregister_code16(KC_PGDN);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_MS_ACCEL0);
        } else {
          unregister_code16(KC_MS_ACCEL0);
        }  
      }  
      return false;
    case DUAL_FUNC_6:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_PAGE_UP);
        } else {
          unregister_code16(KC_PAGE_UP);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_MS_ACCEL1);
        } else {
          unregister_code16(KC_MS_ACCEL1);
        }  
      }  
      return false;
    case DUAL_FUNC_7:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_END);
        } else {
          unregister_code16(KC_END);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_MS_ACCEL2);
        } else {
          unregister_code16(KC_MS_ACCEL2);
        }  
      }  
      return false;
    case DUAL_FUNC_8:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_AUDIO_VOL_DOWN);
        } else {
          unregister_code16(KC_AUDIO_VOL_DOWN);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_AUDIO_MUTE);
        } else {
          unregister_code16(KC_AUDIO_MUTE);
        }  
      }  
      return false;
    case DUAL_FUNC_9:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_TAB);
        } else {
          unregister_code16(KC_TAB);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_TAB));
        } else {
          unregister_code16(LSFT(KC_TAB));
        }  
      }  
      return false;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}
