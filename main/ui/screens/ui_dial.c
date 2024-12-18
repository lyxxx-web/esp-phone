// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.2
// LVGL version: 8.3.11
// Project name: ESPPHONE

#include "../ui.h"
#include "lv_numpad.h"
#include <stdio.h>
#include "lv_svg_disp.h"
#include "esp_mmap_assets.h"
#include "mmap_generate_svg_assets.h"

#define BTN_SIZE    LV_HOR_RES * 0.21
#define POSY_OFFSET -BTN_SIZE * 0.3

#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof((arr)[0]))

extern mmap_assets_handle_t asset_svg;
void ui_dial_screen_init(void)
{

    ui_dial = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_dial, LV_OBJ_FLAG_SCROLLABLE);      /// Flags


    ui_dialKeyboard = lv_numpad_create(ui_dial);
    lv_obj_set_align(ui_dialKeyboard, LV_ALIGN_BOTTOM_MID);
    lv_obj_set_y(ui_dialKeyboard, POSY_OFFSET);

    ui_dialBtnAnswer = lv_btn_create(ui_dial);
    lv_obj_set_align(ui_dialBtnAnswer, LV_ALIGN_BOTTOM_MID);
    lv_obj_set_y(ui_dialBtnAnswer, POSY_OFFSET);
    lv_obj_set_width(ui_dialBtnAnswer, BTN_SIZE);
    lv_obj_set_height(ui_dialBtnAnswer, BTN_SIZE);
    lv_obj_add_flag(ui_dialBtnAnswer, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_dialBtnAnswer, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_dialBtnAnswer, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_dialBtnAnswer, lv_color_hex(0x4CC55C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_dialBtnAnswer, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_dialBtnAnswer, &ui_img_352369578, LV_PART_MAIN | LV_STATE_DEFAULT);

    // lv_obj_add_style(ui_dialKeyboard, &style_outline, LV_PART_MAIN | LV_STATE_DEFAULT);
    ui_mute_canvas = lv_svg_create(ui_dial);
    static uint8_t *fb = NULL;
    if (fb == NULL) {
        fb = malloc(200 * 200 * 4);
        assert(fb);
        lv_svg_set_buffer(ui_mute_canvas, 200, 200, fb);
    }
    const void *data = mmap_assets_get_mem(asset_svg, MMAP_SVG_ASSETS_1372943623_SVG);
    printf("data addr: %p\n", data);
    size_t size = mmap_assets_get_size(asset_svg, MMAP_SVG_ASSETS_1372943623_SVG);
    lv_svg_set_src_data(ui_mute_canvas, data, size);
    lv_obj_set_align(ui_mute_canvas, LV_ALIGN_CENTER);
    lv_obj_set_width(ui_mute_canvas, 200);
    lv_obj_set_height(ui_mute_canvas, 200);

    lv_obj_add_event_cb(ui_dialBtnAnswer, ui_event_dialBtnans, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_dial, ui_event_dial, LV_EVENT_ALL, NULL);

}
