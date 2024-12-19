// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.2
// LVGL version: 8.3.11
// Project name: ESPPHONE

#include <stdio.h>
#include "esp_log.h"
#include "ui.h"
#include "ui_helpers.h"

#include "app_animation.h"
#include "lv_numpad.h"

static const char *TAG = "ui";
static int dial_elapsed_sec;

static lv_timer_t *timer_dial = NULL;
static lv_timer_t *timer_svg = NULL;
///////////////////// VARIABLES ////////////////////
void turnOFF_Animation(lv_obj_t * TargetObject, int delay);
void turnON_Animation(lv_obj_t * TargetObject, int delay);

// custom styles for all screens
lv_style_t style_outline;
lv_obj_t * ui_mute_canvas;
// SCREEN: ui_stateLight
void ui_stateLight_screen_init(void);
lv_obj_t * ui_stateLight;
lv_obj_t * ui_LightBar;
lv_obj_t * ui_lightTime;
lv_obj_t * ui_lightBattery;
lv_obj_t * ui_lightWifi;
lv_obj_t * ui_lightMobile;

// SCREEN: ui_dial
void ui_dial_screen_init(void);
void ui_event_dial(lv_event_t *e);
void ui_event_dialBtnans(lv_event_t * e);
char dialTxt[23] = "";
lv_obj_t * ui_dial;
lv_obj_t * ui_dialKeyboard;
lv_obj_t * ui_dialBtnAnswer;


// SCREEN: ui_answer
void ui_answer_screen_init(void);
void ui_event_answer(lv_event_t * e);
void ui_event_ansBtnDec(lv_event_t * e);
lv_obj_t * ui_answer;
lv_obj_t * ui_ansFuc;
lv_obj_t * ui_ansFucmute;
lv_obj_t * ui_ansBtnmute;
lv_obj_t * ui_ansFucLabel1;
lv_obj_t * ui_ansFuckeypad;
void ui_event_ansBtnkeypad(lv_event_t * e);
lv_obj_t * ui_ansBtnkeypad;
lv_obj_t * ui_ansFucLabel2;
lv_obj_t * ui_ansFucaudio;
lv_obj_t * ui_ansBtnaudio;
lv_obj_t * ui_ansFucLabel3;
lv_obj_t * ui_ansFuccall;
lv_obj_t * ui_ansBtncall;
lv_obj_t * ui_ansFucLabel4;
lv_obj_t * ui_ansFucfacetime;
lv_obj_t * ui_ansBtnfacetime;
lv_obj_t * ui_ansFucLabel5;
lv_obj_t * ui_ansFuccontact;
lv_obj_t * ui_ansBtncontact;
lv_obj_t * ui_ansFucLabel6;
lv_obj_t * ui_ansLabelName;
lv_obj_t * ui_ansLabelTime;
lv_obj_t * ui_ansBtnDEC;
lv_obj_t * ui_answerKeyboard;
lv_obj_t * ui_anskeypadEsc;
void ui_event_ansKeypadEsc(lv_event_t * e);

// SCREEN: ui_stateDark
void ui_stateDark_screen_init(void);
lv_obj_t * ui_stateDark;
lv_obj_t * ui_darkBar;
lv_obj_t * ui_darkTime;
lv_obj_t * ui_darkBattery;
lv_obj_t * ui_darkWifi;
lv_obj_t * ui_darkMobile;

// SCREEN: ui_oncall
void ui_oncall_screen_init(void);
void ui_event_oncall(lv_event_t * e);
lv_obj_t * ui_oncall;
lv_obj_t * ui_oncallLabelPhone;
lv_obj_t * ui_oncallLabelName;
lv_obj_t * ui_oncallMsg;
lv_obj_t * ui_oncallFuc;
lv_obj_t * ui_oncallFucRemind;
lv_obj_t * ui_Image7;
lv_obj_t * ui_oncallFucLabel1;
lv_obj_t * ui_oncallFucMsg;
void ui_event_Image1(lv_event_t * e);
lv_obj_t * ui_Image1;
lv_obj_t * ui_oncallFucLabel2;
lv_obj_t * ui_oncallFucAns;
lv_obj_t * ui_oncallBtnAns;
lv_obj_t * ui_Label27;
lv_obj_t * ui_oncallFucDec;
lv_obj_t * ui_oncallBtnDec;
lv_obj_t * ui_Label31;
lv_obj_t * ui____initial_actions0;
void ui_event_oncall_answer(lv_event_t * e);
void ui_event_oncall_decline(lv_event_t * e);
const lv_img_dsc_t * ui_imgset_1496073666[1] = {&ui_img_126583460};

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
#error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
#error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif
///////////////////// CALLBACK FUNCTIONs ////////////////////

static void dial_time_cb(lv_timer_t *tmr)
{
    int hours = (dial_elapsed_sec) / 3600;
    int minutes = ((dial_elapsed_sec) % 3600) / 60;
    int seconds = (dial_elapsed_sec) % 60;
    char time_str[16];
    if (hours) {
        snprintf(time_str, sizeof(time_str), "%02d:%02d:%02d", hours, minutes, seconds);
    } else {
        snprintf(time_str, sizeof(time_str), "%02d:%02d", minutes, seconds);
    }
    lv_label_set_text(ui_ansLabelTime, time_str);
    dial_elapsed_sec++;
}

///////////////////// ANIMATIONS ////////////////////
void turnOFF_Animation(lv_obj_t * TargetObject, int delay)
{
    ui_anim_user_data_t * PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
    PropertyAnimation_0_user_data->target = TargetObject;
    PropertyAnimation_0_user_data->val = -1;
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 500);
    lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_x);
    lv_anim_set_values(&PropertyAnimation_0, 0, -100);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_ease_out);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_deleted_cb(&PropertyAnimation_0, _ui_anim_callback_free_user_data);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_x);
    lv_anim_start(&PropertyAnimation_0);

}
void turnON_Animation(lv_obj_t * TargetObject, int delay)
{
    ui_anim_user_data_t * PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
    PropertyAnimation_0_user_data->target = TargetObject;
    PropertyAnimation_0_user_data->val = -1;
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 500);
    lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_x);
    lv_anim_set_values(&PropertyAnimation_0, 0, 100);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_ease_out);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_deleted_cb(&PropertyAnimation_0, _ui_anim_callback_free_user_data);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_x);
    lv_anim_start(&PropertyAnimation_0);

}

///////////////////// FUNCTIONS ////////////////////
void ui_event_dial(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    if (event_code == LV_EVENT_SCREEN_LOAD_START) {
        lv_numpad_theme(false);
    }
}
void ui_event_dialBtnans(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    if (event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_answer, LV_SCR_LOAD_ANIM_NONE, 0, 0, &ui_answer_screen_init);
        lv_numpad_text_area_clean(ui_dialKeyboard);
    }
}
void ui_event_answer(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);

    if (event_code == LV_EVENT_SCREEN_LOAD_START) {
        timer_dial = lv_timer_create(dial_time_cb, 1000, NULL);
        dial_time_cb(timer_dial);
        lv_numpad_theme(true);
    }
}
void ui_event_ansBtnDec(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    if (event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_dial, LV_SCR_LOAD_ANIM_NONE, 0, 0, &ui_dial_screen_init);
        lv_timer_del(timer_dial);
        dial_elapsed_sec = 0;

        lv_numpad_text_area_clean(ui_answerKeyboard);
        _ui_flag_modify(ui_answerKeyboard, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_anskeypadEsc, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_ansFuc, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_state_modify(ui_ansBtnkeypad, LV_STATE_CHECKED, _UI_MODIFY_STATE_REMOVE); 
        _ui_flag_modify(ui_ansLabelTime, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);

        _ui_state_modify(ui_ansBtnmute, LV_STATE_CHECKED, _UI_MODIFY_STATE_ADD);
        _ui_state_modify(ui_ansBtnaudio, LV_STATE_CHECKED, _UI_MODIFY_STATE_ADD);
    }
}
void ui_event_ansBtnkeypad(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if (event_code == LV_EVENT_VALUE_CHANGED &&  lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_flag_modify(ui_answerKeyboard, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_anskeypadEsc, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_ansFuc, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_ansLabelTime, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    }
}
void ui_event_ansKeypadEsc(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    if (event_code == LV_EVENT_CLICKED) {
        lv_numpad_text_area_clean(ui_answerKeyboard);
        _ui_flag_modify(ui_answerKeyboard, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_anskeypadEsc, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_ansFuc, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_state_modify(ui_ansBtnkeypad, LV_STATE_CHECKED, _UI_MODIFY_STATE_REMOVE); 
        _ui_flag_modify(ui_ansLabelTime, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
    }
}
void ui_event_oncall(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    if (event_code == LV_EVENT_SCREEN_LOAD_START) {
    }
    if (event_code == LV_EVENT_CLICKED) {
        _ui_flag_modify(ui_oncallFuc, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_oncallMsg, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    }
}
void ui_event_Image1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    if (event_code == LV_EVENT_PRESSED) {
        _ui_flag_modify(ui_oncallFuc, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_oncallMsg, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
    }
}
void ui_event_oncall_answer(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    if (event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_answer, LV_SCR_LOAD_ANIM_NONE, 0, 0, &ui_answer_screen_init);
    }
}
void ui_event_oncall_decline(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    if (event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_dial, LV_SCR_LOAD_ANIM_NONE, 0, 0, &ui_dial_screen_init);
    }
}
///////////////////// SCREENS ////////////////////

void custom_style_init(void)
{
    lv_style_init(&style_outline);
    lv_style_set_outline_color(&style_outline, lv_color_hex(0xFB7503));
    lv_style_set_outline_width(&style_outline, 4);
}
void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               false, LV_FONT_DEFAULT);
    custom_style_init();
    lv_disp_set_rotation(dispp, LV_DISP_ROT_270);
    lv_disp_set_theme(dispp, theme);
    ui_dial_screen_init();
    ui_answer_screen_init();
    ui_oncall_screen_init();
    ui____initial_actions0 = lv_obj_create(NULL);
    lv_disp_load_scr(ui_oncall);
}
