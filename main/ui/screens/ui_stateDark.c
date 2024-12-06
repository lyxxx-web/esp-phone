// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.2
// LVGL version: 8.3.11
// Project name: ESPPHONE

#include "../ui.h"

void ui_stateDark_screen_init(void)
{
    ui_stateDark = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_stateDark, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_stateDark, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_stateDark, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_darkBar = lv_obj_create(ui_stateDark);
    lv_obj_set_width(ui_darkBar, 720);
    lv_obj_set_height(ui_darkBar, 20);
    lv_obj_set_align(ui_darkBar, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_darkBar, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_darkBar, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_darkBar, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_darkBar, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_darkBar, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_darkTime = lv_label_create(ui_darkBar);
    lv_obj_set_width(ui_darkTime, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_darkTime, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_darkTime, -331);
    lv_obj_set_y(ui_darkTime, 1);
    lv_obj_set_align(ui_darkTime, LV_ALIGN_CENTER);
    lv_label_set_text(ui_darkTime, "12:39");
    lv_obj_set_style_text_color(ui_darkTime, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_darkTime, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_darkTime, &ui_font_OPPOSansBold14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_darkBattery = lv_img_create(ui_darkBar);
    lv_img_set_src(ui_darkBattery, &ui_img_1328003813);
    lv_obj_set_width(ui_darkBattery, LV_SIZE_CONTENT);   /// 32
    lv_obj_set_height(ui_darkBattery, LV_SIZE_CONTENT);    /// 32
    lv_obj_set_x(ui_darkBattery, 321);
    lv_obj_set_y(ui_darkBattery, 0);
    lv_obj_set_align(ui_darkBattery, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_darkBattery, LV_OBJ_FLAG_CLICKABLE);     /// Flags
    lv_obj_clear_flag(ui_darkBattery, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_darkBattery, 220);

    ui_darkWifi = lv_img_create(ui_darkBar);
    lv_img_set_src(ui_darkWifi, &ui_img_667377057);
    lv_obj_set_width(ui_darkWifi, LV_SIZE_CONTENT);   /// 32
    lv_obj_set_height(ui_darkWifi, LV_SIZE_CONTENT);    /// 32
    lv_obj_set_x(ui_darkWifi, 274);
    lv_obj_set_y(ui_darkWifi, -1);
    lv_obj_set_align(ui_darkWifi, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_darkWifi, LV_OBJ_FLAG_CLICKABLE);     /// Flags
    lv_obj_clear_flag(ui_darkWifi, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_darkWifi, 200);

    ui_darkMobile = lv_img_create(ui_darkBar);
    lv_img_set_src(ui_darkMobile, &ui_img_336861511);
    lv_obj_set_width(ui_darkMobile, LV_SIZE_CONTENT);   /// 20
    lv_obj_set_height(ui_darkMobile, LV_SIZE_CONTENT);    /// 16
    lv_obj_set_x(ui_darkMobile, 226);
    lv_obj_set_y(ui_darkMobile, 0);
    lv_obj_set_align(ui_darkMobile, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_darkMobile, LV_OBJ_FLAG_CLICKABLE);     /// Flags
    lv_obj_clear_flag(ui_darkMobile, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_darkMobile, 130);

}