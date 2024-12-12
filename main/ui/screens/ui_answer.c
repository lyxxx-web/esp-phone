// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.2
// LVGL version: 8.3.11
// Project name: ESPPHONE

#include <stdio.h>
#include "../ui.h"
#include "lv_numpad.h"

#define PANEL_SIZE  LV_HOR_RES * 0.23
#define BTN_SIZE    LV_HOR_RES * 0.21
#define ANS_FUC_PAD_COLUMN  PANEL_SIZE * 0.38

#define PANEL_UP_BTN -PANEL_SIZE * 0.14
#define PANEL_DOWN_LABEL    PANEL_SIZE * 0.51

#define POSY_OFFSET -BTN_SIZE * 0.3
#define POSX_OFFSET -(BTN_SIZE + ANS_FUC_PAD_COLUMN)

void ui_answer_screen_init(void)
{
    // printf("load in answer page\n");
    ui_answer = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_answer, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_answer, lv_color_hex(0x141414), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_answer, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // lv_obj_set_parent(ui_darkBar, ui_answer);
    // lv_obj_set_align(ui_answer, LV_ALIGN_TOP_MID);

    ui_ansFuc = lv_obj_create(ui_answer);
    lv_obj_set_width(ui_ansFuc, LV_HOR_RES);
    lv_obj_set_height(ui_ansFuc, LV_SIZE_CONTENT);
    lv_obj_set_x(ui_ansFuc, 0);
    lv_obj_set_y(ui_ansFuc, -50);
    lv_obj_set_align(ui_ansFuc, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_ansFuc, LV_FLEX_FLOW_ROW_WRAP);
    lv_obj_set_flex_align(ui_ansFuc, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_ansFuc, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ansFuc, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ansFuc, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_ansFuc, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_ansFuc, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_ansFuc, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_row(ui_ansFuc, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_column(ui_ansFuc, ANS_FUC_PAD_COLUMN, LV_PART_MAIN | LV_STATE_DEFAULT);
    // lv_obj_add_style(ui_ansFuc, &style_outline, LV_PART_MAIN || LV_STATE_DEFAULT);

    ui_ansFucmute = lv_obj_create(ui_ansFuc);
    lv_obj_set_width(ui_ansFucmute, PANEL_SIZE);
    lv_obj_set_height(ui_ansFucmute, PANEL_SIZE * 1.5);
    lv_obj_clear_flag(ui_ansFucmute, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ansFucmute, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ansFucmute, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_ansFucmute, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_ansFucmute, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_ansFucmute, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ansBtnmute = lv_btn_create(ui_ansFucmute);
    lv_obj_set_width(ui_ansBtnmute, BTN_SIZE);
    lv_obj_set_height(ui_ansBtnmute, BTN_SIZE);
    lv_obj_set_x(ui_ansBtnmute, 0);
    lv_obj_set_y(ui_ansBtnmute, PANEL_UP_BTN);
    lv_obj_set_align(ui_ansBtnmute, LV_ALIGN_CENTER);
    lv_obj_add_state(ui_ansBtnmute, LV_STATE_CHECKED);       /// States
    lv_obj_add_flag(ui_ansBtnmute, LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ansBtnmute, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_ansBtnmute, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_ansBtnmute, lv_color_hex(0x2B2B2B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ansBtnmute, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_ansBtnmute, &ui_img_988448286, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_ansBtnmute, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_ansBtnmute, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_ansBtnmute, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_ansBtnmute, 255, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_img_src(ui_ansBtnmute, &ui_img_753335661, LV_PART_MAIN | LV_STATE_CHECKED);

    ui_ansFucLabel1 = lv_label_create(ui_ansFucmute);
    lv_obj_set_width(ui_ansFucLabel1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ansFucLabel1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ansFucLabel1, 0);
    lv_obj_set_y(ui_ansFucLabel1, PANEL_DOWN_LABEL);
    lv_obj_set_align(ui_ansFucLabel1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ansFucLabel1, "mute");
    lv_obj_set_style_text_color(ui_ansFucLabel1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ansFucLabel1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ansFucLabel1, &ui_font_OPPOSansRegular20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ansFuckeypad = lv_obj_create(ui_ansFuc);
    lv_obj_set_width(ui_ansFuckeypad, PANEL_SIZE);
    lv_obj_set_height(ui_ansFuckeypad, PANEL_SIZE * 1.5);
    lv_obj_clear_flag(ui_ansFuckeypad, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ansFuckeypad, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ansFuckeypad, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_ansFuckeypad, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_ansFuckeypad, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_ansFuckeypad, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ansBtnkeypad = lv_btn_create(ui_ansFuckeypad);
    lv_obj_set_width(ui_ansBtnkeypad, BTN_SIZE);
    lv_obj_set_height(ui_ansBtnkeypad, BTN_SIZE);
    lv_obj_set_x(ui_ansBtnkeypad, 0);
    lv_obj_set_y(ui_ansBtnkeypad, PANEL_UP_BTN);
    lv_obj_set_align(ui_ansBtnkeypad, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ansBtnkeypad, LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ansBtnkeypad, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_ansBtnkeypad, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_ansBtnkeypad, lv_color_hex(0x2B2B2B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ansBtnkeypad, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_ansBtnkeypad, &ui_img_keypad_png, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_ansBtnkeypad, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_ansBtnkeypad, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_ansBtnkeypad, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_ansBtnkeypad, 255, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_img_src(ui_ansBtnkeypad, &ui_img_1143594758, LV_PART_MAIN | LV_STATE_CHECKED);

    ui_ansFucLabel2 = lv_label_create(ui_ansFuckeypad);
    lv_obj_set_width(ui_ansFucLabel2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ansFucLabel2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ansFucLabel2, 0);
    lv_obj_set_y(ui_ansFucLabel2, PANEL_DOWN_LABEL);
    lv_obj_set_align(ui_ansFucLabel2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ansFucLabel2, "keypad");
    lv_obj_set_style_text_color(ui_ansFucLabel2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ansFucLabel2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ansFucLabel2, &ui_font_OPPOSansRegular20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ansFucaudio = lv_obj_create(ui_ansFuc);
    lv_obj_set_width(ui_ansFucaudio, PANEL_SIZE);
    lv_obj_set_height(ui_ansFucaudio, PANEL_SIZE * 1.5);
    lv_obj_clear_flag(ui_ansFucaudio, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ansFucaudio, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ansFucaudio, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_ansFucaudio, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_ansFucaudio, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_ansFucaudio, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ansBtnaudio = lv_btn_create(ui_ansFucaudio);
    lv_obj_set_width(ui_ansBtnaudio, BTN_SIZE);
    lv_obj_set_height(ui_ansBtnaudio, BTN_SIZE);
    lv_obj_set_x(ui_ansBtnaudio, 0);
    lv_obj_set_y(ui_ansBtnaudio, PANEL_UP_BTN);
    lv_obj_set_align(ui_ansBtnaudio, LV_ALIGN_CENTER);
    lv_obj_add_state(ui_ansBtnaudio, LV_STATE_CHECKED);       /// States
    lv_obj_add_flag(ui_ansBtnaudio, LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ansBtnaudio, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_ansBtnaudio, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_ansBtnaudio, lv_color_hex(0x2B2B2B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ansBtnaudio, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_ansBtnaudio, &ui_img_1817873855, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_ansBtnaudio, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_ansBtnaudio, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_ansBtnaudio, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_ansBtnaudio, 255, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_img_src(ui_ansBtnaudio, &ui_img_495558844, LV_PART_MAIN | LV_STATE_CHECKED);

    ui_ansFucLabel3 = lv_label_create(ui_ansFucaudio);
    lv_obj_set_width(ui_ansFucLabel3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ansFucLabel3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ansFucLabel3, 0);
    lv_obj_set_y(ui_ansFucLabel3, PANEL_DOWN_LABEL);
    lv_obj_set_align(ui_ansFucLabel3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ansFucLabel3, "audio");
    lv_obj_set_style_text_color(ui_ansFucLabel3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ansFucLabel3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ansFucLabel3, &ui_font_OPPOSansRegular20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ansFuccall = lv_obj_create(ui_ansFuc);
    lv_obj_set_width(ui_ansFuccall, PANEL_SIZE);
    lv_obj_set_height(ui_ansFuccall, PANEL_SIZE * 1.5);
    lv_obj_clear_flag(ui_ansFuccall, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ansFuccall, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ansFuccall, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_ansFuccall, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_ansFuccall, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_ansFuccall, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ansBtncall = lv_btn_create(ui_ansFuccall);
    lv_obj_set_width(ui_ansBtncall, BTN_SIZE);
    lv_obj_set_height(ui_ansBtncall, BTN_SIZE);
    lv_obj_set_x(ui_ansBtncall, 0);
    lv_obj_set_y(ui_ansBtncall, PANEL_UP_BTN);
    lv_obj_set_align(ui_ansBtncall, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ansBtncall, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ansBtncall, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_ansBtncall, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_ansBtncall, lv_color_hex(0x2B2B2B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ansBtncall, PANEL_SIZE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_ansBtncall, &ui_img_addcontacts_png, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_opa(ui_ansBtncall, PANEL_SIZE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_ansBtncall, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_ansBtncall, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ansFucLabel4 = lv_label_create(ui_ansFuccall);
    lv_obj_set_width(ui_ansFucLabel4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ansFucLabel4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ansFucLabel4, 0);
    lv_obj_set_y(ui_ansFucLabel4, PANEL_DOWN_LABEL);
    lv_obj_set_align(ui_ansFucLabel4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ansFucLabel4, "add call");
    lv_obj_set_style_text_color(ui_ansFucLabel4, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ansFucLabel4, PANEL_SIZE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ansFucLabel4, &ui_font_OPPOSansRegular20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ansFucfacetime = lv_obj_create(ui_ansFuc);
    lv_obj_set_width(ui_ansFucfacetime, PANEL_SIZE);
    lv_obj_set_height(ui_ansFucfacetime, PANEL_SIZE * 1.5);
    lv_obj_clear_flag(ui_ansFucfacetime, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ansFucfacetime, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ansFucfacetime, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_ansFucfacetime, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_ansFucfacetime, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_ansFucfacetime, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ansBtnfacetime = lv_btn_create(ui_ansFucfacetime);
    lv_obj_set_width(ui_ansBtnfacetime, BTN_SIZE);
    lv_obj_set_height(ui_ansBtnfacetime, BTN_SIZE);
    lv_obj_set_x(ui_ansBtnfacetime, 0);
    lv_obj_set_y(ui_ansBtnfacetime, PANEL_UP_BTN);
    lv_obj_set_align(ui_ansBtnfacetime, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ansBtnfacetime, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ansBtnfacetime, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_ansBtnfacetime, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_ansBtnfacetime, lv_color_hex(0x2B2B2B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ansBtnfacetime, PANEL_SIZE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_ansBtnfacetime, &ui_img_facetime_fill_png, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_opa(ui_ansBtnfacetime, PANEL_SIZE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_ansBtnfacetime, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_ansBtnfacetime, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ansFucLabel5 = lv_label_create(ui_ansFucfacetime);
    lv_obj_set_width(ui_ansFucLabel5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ansFucLabel5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ansFucLabel5, 0);
    lv_obj_set_y(ui_ansFucLabel5, PANEL_DOWN_LABEL);
    lv_obj_set_align(ui_ansFucLabel5, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ansFucLabel5, "FaceTime");
    lv_obj_set_style_text_color(ui_ansFucLabel5, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ansFucLabel5, PANEL_SIZE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ansFucLabel5, &ui_font_OPPOSansRegular20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ansFuccontact = lv_obj_create(ui_ansFuc);
    lv_obj_set_width(ui_ansFuccontact, PANEL_SIZE);
    lv_obj_set_height(ui_ansFuccontact, PANEL_SIZE * 1.5);
    lv_obj_clear_flag(ui_ansFuccontact, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ansFuccontact, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ansFuccontact, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_ansFuccontact, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_ansFuccontact, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_ansFuccontact, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ansBtncontact = lv_btn_create(ui_ansFuccontact);
    lv_obj_set_width(ui_ansBtncontact, BTN_SIZE);
    lv_obj_set_height(ui_ansBtncontact, BTN_SIZE);
    lv_obj_set_x(ui_ansBtncontact, 0);
    lv_obj_set_y(ui_ansBtncontact, PANEL_UP_BTN);
    lv_obj_set_align(ui_ansBtncontact, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ansBtncontact, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ansBtncontact, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_ansBtncontact, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_ansBtncontact, lv_color_hex(0x2B2B2B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ansBtncontact, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_ansBtncontact, &ui_img_contacts_png, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_ansBtncontact, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_ansBtncontact, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ansFucLabel6 = lv_label_create(ui_ansFuccontact);
    lv_obj_set_width(ui_ansFucLabel6, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ansFucLabel6, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ansFucLabel6, 0);
    lv_obj_set_y(ui_ansFucLabel6, PANEL_DOWN_LABEL);
    lv_obj_set_align(ui_ansFucLabel6, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ansFucLabel6, "contacts");
    lv_obj_set_style_text_color(ui_ansFucLabel6, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ansFucLabel6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ansFucLabel6, &ui_font_OPPOSansRegular20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ansLabelName = lv_label_create(ui_answer);
    lv_obj_set_width(ui_ansLabelName, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ansLabelName, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ansLabelName, 0);
    lv_obj_set_y(ui_ansLabelName, -1.5 * POSY_OFFSET);
    lv_obj_set_align(ui_ansLabelName, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_ansLabelName, "ESP_Friends");
    lv_obj_set_style_text_color(ui_ansLabelName, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ansLabelName, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ansLabelName, &ui_font_OPPOSansBold60, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ansLabelTime = lv_label_create(ui_answer);
    lv_obj_set_width(ui_ansLabelTime, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ansLabelTime, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ansLabelTime, 0);
    lv_obj_set_y(ui_ansLabelTime, -4 * POSY_OFFSET);
    lv_obj_set_align(ui_ansLabelTime, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_ansLabelTime, "00:00");
    lv_obj_set_style_text_color(ui_ansLabelTime, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ansLabelTime, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ansLabelTime, &ui_font_OPPOSansRegular20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ansBtnDEC = lv_btn_create(ui_answer);
    lv_obj_set_width(ui_ansBtnDEC, BTN_SIZE);
    lv_obj_set_height(ui_ansBtnDEC, BTN_SIZE);
    lv_obj_set_align(ui_ansBtnDEC, LV_ALIGN_BOTTOM_MID);
    lv_obj_set_y(ui_ansBtnDEC, POSY_OFFSET);
    lv_obj_add_flag(ui_ansBtnDEC, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ansBtnDEC, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_ansBtnDEC, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_ansBtnDEC, lv_color_hex(0xF44937), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ansBtnDEC, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_ansBtnDEC, &ui_img_352369578, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_anskeypadEsc = lv_btn_create(ui_answer);
    lv_obj_set_width(ui_anskeypadEsc, BTN_SIZE);
    lv_obj_set_height(ui_anskeypadEsc, BTN_SIZE);
    lv_obj_set_align(ui_anskeypadEsc, LV_ALIGN_BOTTOM_MID);
    lv_obj_set_y(ui_anskeypadEsc, POSY_OFFSET);
    lv_obj_set_x(ui_anskeypadEsc, POSX_OFFSET);
    lv_obj_add_flag(ui_anskeypadEsc, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_anskeypadEsc, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_add_flag(ui_anskeypadEsc, LV_OBJ_FLAG_HIDDEN);
    lv_obj_set_style_bg_color(ui_anskeypadEsc, lv_color_hex(0xffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_anskeypadEsc, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_anskeypadEsc, &ui_img_keypadEsc, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_opa(ui_anskeypadEsc, 225, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_anskeypadEsc, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_anskeypadEsc, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_anskeypadEsc, &ui_img_keypadEsc, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_img_opa(ui_anskeypadEsc, 100, LV_PART_MAIN | LV_STATE_PRESSED);
    
    ui_answerKeyboard = lv_numpad_create(ui_answer);
    lv_obj_clear_flag(ui_answerKeyboard, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_clear_flag(ui_answerKeyboard, LV_OBJ_FLAG_CLICKABLE);
    lv_obj_set_align(ui_answerKeyboard, LV_ALIGN_BOTTOM_MID);
    lv_obj_set_y(ui_answerKeyboard, POSY_OFFSET);
    lv_obj_add_flag(ui_answerKeyboard, LV_OBJ_FLAG_HIDDEN);     /// Flags

    lv_obj_add_event_cb(ui_ansBtnkeypad, ui_event_ansBtnkeypad, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_answer, ui_event_answer, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ansBtnDEC, ui_event_ansBtnDec, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_anskeypadEsc, ui_event_ansKeypadEsc, LV_EVENT_ALL, NULL);

}
