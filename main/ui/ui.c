// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.2
// LVGL version: 9.1.0
// Project name: ESPPHONE

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
void turnOFF_Animation(lv_obj_t * TargetObject, int delay);
void turnON_Animation(lv_obj_t * TargetObject, int delay);


// SCREEN: ui_statelight
void ui_statelight_screen_init(void);
lv_obj_t * ui_statelight;
lv_obj_t * ui_statesBar;
lv_obj_t * ui_time;
lv_obj_t * ui_Image15;
lv_obj_t * ui_Image2;
lv_obj_t * ui_Image5;


// SCREEN: ui_dial
void ui_dial_screen_init(void);
lv_obj_t * ui_dial;
lv_obj_t * ui_Panel1;
lv_obj_t * ui_Panel2;
lv_obj_t * ui_Button1;
lv_obj_t * ui_Label1;
lv_obj_t * ui_Panel4;
lv_obj_t * ui_Button3;
lv_obj_t * ui_Label3;
lv_obj_t * ui_Label2;
lv_obj_t * ui_Panel5;
lv_obj_t * ui_Button4;
lv_obj_t * ui_Label6;
lv_obj_t * ui_Label4;
lv_obj_t * ui_Panel6;
lv_obj_t * ui_Button5;
lv_obj_t * ui_Label7;
lv_obj_t * ui_Label8;
lv_obj_t * ui_Panel7;
lv_obj_t * ui_Button6;
lv_obj_t * ui_Label9;
lv_obj_t * ui_Label10;
lv_obj_t * ui_Panel8;
lv_obj_t * ui_Button7;
lv_obj_t * ui_Label11;
lv_obj_t * ui_Label12;
lv_obj_t * ui_Panel9;
lv_obj_t * ui_Button8;
lv_obj_t * ui_Label13;
lv_obj_t * ui_Label14;
lv_obj_t * ui_Panel10;
lv_obj_t * ui_Button9;
lv_obj_t * ui_Label15;
lv_obj_t * ui_Label16;
lv_obj_t * ui_Panel11;
lv_obj_t * ui_Button10;
lv_obj_t * ui_Label17;
lv_obj_t * ui_Label18;
lv_obj_t * ui_Panel12;
lv_obj_t * ui_Button11;
lv_obj_t * ui_Label19;
lv_obj_t * ui_Panel13;
lv_obj_t * ui_Button12;
lv_obj_t * ui_Label21;
lv_obj_t * ui_Label22;
lv_obj_t * ui_Panel14;
lv_obj_t * ui_Button13;
lv_obj_t * ui_Label23;
lv_obj_t * ui_Button2;
lv_obj_t * ui_Button36;


// SCREEN: ui_answer
void ui_answer_screen_init(void);
void ui_event_answer(lv_event_t * e);
lv_obj_t * ui_answer;
lv_obj_t * ui_Panel29;
lv_obj_t * ui_Panel15;
void ui_event_Button27(lv_event_t * e);
lv_obj_t * ui_Button27;
lv_obj_t * ui_Label43;
lv_obj_t * ui_panel21;
lv_obj_t * ui_slash;
lv_obj_t * ui_Panel16;
void ui_event_Button14(lv_event_t * e);
lv_obj_t * ui_Button14;
lv_obj_t * ui_Label5;
lv_obj_t * ui_Panel17;
lv_obj_t * ui_Button15;
lv_obj_t * ui_Label24;
lv_obj_t * ui_Panel18;
lv_obj_t * ui_Button16;
lv_obj_t * ui_Label26;
lv_obj_t * ui_Panel19;
lv_obj_t * ui_Button17;
lv_obj_t * ui_Label28;
lv_obj_t * ui_Panel20;
lv_obj_t * ui_Button18;
lv_obj_t * ui_Label30;
lv_obj_t * ui_Label20;
lv_obj_t * ui_Label25;
lv_obj_t * ui_Button26;
lv_obj_t * ui_Panel36;
lv_obj_t * ui_Panel21;
lv_obj_t * ui_Button35;
lv_obj_t * ui_Label54;
lv_obj_t * ui_Panel23;
lv_obj_t * ui_Button34;
lv_obj_t * ui_Label29;
lv_obj_t * ui_Label32;
lv_obj_t * ui_Panel24;
lv_obj_t * ui_Button22;
lv_obj_t * ui_Label33;
lv_obj_t * ui_Label34;
lv_obj_t * ui_Panel25;
lv_obj_t * ui_Button23;
lv_obj_t * ui_Label36;
lv_obj_t * ui_Label37;
lv_obj_t * ui_Panel26;
lv_obj_t * ui_Button24;
lv_obj_t * ui_Label38;
lv_obj_t * ui_Label39;
lv_obj_t * ui_Panel27;
lv_obj_t * ui_Button25;
lv_obj_t * ui_Label40;
lv_obj_t * ui_Label41;
lv_obj_t * ui_Panel28;
lv_obj_t * ui_Button28;
lv_obj_t * ui_Label42;
lv_obj_t * ui_Label44;
lv_obj_t * ui_Panel30;
lv_obj_t * ui_Button29;
lv_obj_t * ui_Label45;
lv_obj_t * ui_Label46;
lv_obj_t * ui_Panel31;
lv_obj_t * ui_Button30;
lv_obj_t * ui_Label47;
lv_obj_t * ui_Label48;
lv_obj_t * ui_Panel32;
lv_obj_t * ui_Button31;
lv_obj_t * ui_Label49;
lv_obj_t * ui_Panel33;
lv_obj_t * ui_Button32;
lv_obj_t * ui_Label50;
lv_obj_t * ui_Label51;
lv_obj_t * ui_Panel34;
lv_obj_t * ui_Button33;
lv_obj_t * ui_Label52;


// SCREEN: ui_statedark
void ui_statedark_screen_init(void);
lv_obj_t * ui_statedark;
lv_obj_t * ui_statesBar1;
lv_obj_t * ui_time1;
lv_obj_t * ui_Image3;
lv_obj_t * ui_Image4;
lv_obj_t * ui_Image6;


// SCREEN: ui_oncall
void ui_oncall_screen_init(void);
void ui_event_oncall(lv_event_t * e);
lv_obj_t * ui_oncall;
lv_obj_t * ui_Label55;
lv_obj_t * ui_Label35;
lv_obj_t * ui_Roller1;
lv_obj_t * ui_Panel37;
lv_obj_t * ui_Panel38;
lv_obj_t * ui_Image7;
lv_obj_t * ui_Label56;
lv_obj_t * ui_Panel35;
void ui_event_Image1(lv_event_t * e);
lv_obj_t * ui_Image1;
lv_obj_t * ui_Label53;
lv_obj_t * ui_Panel3;
lv_obj_t * ui_Button21;
lv_obj_t * ui_Label27;
lv_obj_t * ui_Panel22;
lv_obj_t * ui_Button20;
lv_obj_t * ui_Label31;
lv_obj_t * ui____initial_actions0;
const lv_image_dsc_t * ui_imgset_1496073666[1] = {&ui_img_126583460};

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 32
    #error "LV_COLOR_DEPTH should be 32bit to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////
void turnOFF_Animation(lv_obj_t * TargetObject, int delay)
{
    ui_anim_user_data_t * PropertyAnimation_0_user_data = lv_malloc(sizeof(ui_anim_user_data_t));
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
    ui_anim_user_data_t * PropertyAnimation_0_user_data = lv_malloc(sizeof(ui_anim_user_data_t));
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
void ui_event_dial(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_SCREEN_LOAD_START){
        lv_obj_set_parent(ui_dial, ui_statelight);
    }
}
void ui_event_answer(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
        if(event_code == LV_EVENT_SCREEN_LOAD_START){
        lv_obj_set_parent(ui_answer, ui_statedark);
    }
    if(event_code == LV_EVENT_PRESSED) {
        _ui_flag_modify(ui_Panel36, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Panel29, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_state_modify(ui_Button14, LV_STATE_CHECKED, _UI_MODIFY_STATE_REMOVE);
    }
}
void ui_event_hangup(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_PRESSED) {
        _ui_screen_change(&ui_answer, LV_SCR_LOAD_ANIM_NONE, 0, 0, &ui_answer_screen_init);
    }    
}
void ui_event_Button27(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED &&  !lv_obj_has_state(target, LV_STATE_CHECKED)) {
        turnOFF_Animation(ui_slash, 0);
    }
    if(event_code == LV_EVENT_VALUE_CHANGED &&  lv_obj_has_state(target, LV_STATE_CHECKED)) {
        turnON_Animation(ui_slash, 0);
    }
}
void ui_event_Button14(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED &&  lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_flag_modify(ui_Panel36, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Panel29, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    }
}
void ui_event_oncall(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_SCREEN_LOAD_START){
        lv_obj_set_parent(ui_dial, ui_statedark);
    }
    if(event_code == LV_EVENT_CLICKED) {
        _ui_flag_modify(ui_Panel37, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Roller1, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    }
}
void ui_event_button_answer(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_PRESSED) {
        _ui_screen_change(&ui_oncall, LV_SCR_LOAD_ANIM_NONE, 0, 0, &ui_answer_screen_init);
    }
}
void ui_event_button_decline(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_PRESSED) {
        _ui_screen_change(&ui_oncall, LV_SCR_LOAD_ANIM_NONE, 0, 0, &ui_dial_screen_init);
    }
}
void ui_event_Image1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_PRESSED) {
        _ui_flag_modify(ui_Panel37, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Roller1, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
    }
}

///////////////////// SCREENS ////////////////////

void ui_init(void)
{
    lv_disp_t * dispp = lv_display_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_statelight_screen_init();
    ui_dial_screen_init();
    ui_answer_screen_init();
    ui_statedark_screen_init();
    ui_oncall_screen_init();
    ui____initial_actions0 = lv_obj_create(NULL);
    lv_disp_load_scr(ui_oncall);
}