#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#include "lvgl.h"
#include "lv_numpad.h"
#include "ui.h"// use custom font(ui_font_OPPOSansBold50)

#define MY_CLASS    &lv_numpad_class

#define KB_NUM_SIZE LV_HOR_RES * 0.23   // Keyboard panels size
#define KB_BTN_SIZE LV_HOR_RES * 0.21   // Keyboard bttons size
#define PAD_ROW     KB_NUM_SIZE * 0.18
#define PAD_COLUMN  KB_NUM_SIZE * 0.28
#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof((arr)[0]))

static void lv_numpad_constructor(const lv_obj_class_t * class_p, lv_obj_t * obj);
static void lv_numpad_destructor(const lv_obj_class_t * class_p, lv_obj_t * obj);
static void lv_numpad_event(const lv_obj_class_t * class_p, lv_event_t * e);
static lv_style_t style_kb_num;
static lv_style_t style_kb_btn;

/**********************
 *   GLOBAL FUNCTIONS
 **********************/
const lv_obj_class_t lv_numpad_class = {
    .constructor_cb = lv_numpad_constructor,
    .destructor_cb  = lv_numpad_destructor,
    .event_cb       = lv_numpad_event,
    .group_def = LV_OBJ_CLASS_GROUP_DEF_TRUE,
    .instance_size  = sizeof(lv_numpad_t),
    .base_class     = &lv_obj_class
};

lv_obj_t * lv_numpad_create(lv_obj_t * parent)
{
    LV_LOG_INFO("begin");
    lv_obj_t * obj = lv_obj_class_create_obj(MY_CLASS, parent);
    lv_obj_class_init_obj(obj);
    return obj;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/
static void lv_numpad_constructor(const lv_obj_class_t * class_p, lv_obj_t * obj)
{
    LV_UNUSED(class_p);
    LV_TRACE_OBJ_CREATE("begin");

    lv_numpad_t * numpad = (lv_numpad_t *)obj;

    lv_obj_set_flex_flow(obj, LV_FLEX_FLOW_ROW_WRAP);
    lv_obj_set_flex_align(obj, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(obj, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(obj, 0 ,LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(obj, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(obj, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_pad_row(obj, PAD_ROW, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_column(obj, PAD_COLUMN, LV_PART_MAIN | LV_STATE_DEFAULT);

    /* obj style init */
    lv_style_init(&style_kb_btn);
    lv_style_set_width(&style_kb_num, KB_NUM_SIZE);
    lv_style_set_height(&style_kb_num, KB_NUM_SIZE);
    lv_style_set_align(&style_kb_num, LV_ALIGN_CENTER);
    lv_style_set_bg_color(&style_kb_num, lv_color_hex(0xFFFFFF));
    lv_style_set_bg_opa(&style_kb_num, 0);
    lv_style_set_border_color(&style_kb_num, lv_color_hex(0x000000));
    lv_style_set_border_opa(&style_kb_num, 255);
    lv_style_set_border_width(&style_kb_num, 0);

    lv_style_init(&style_kb_btn);
    lv_style_set_width(&style_kb_btn, KB_BTN_SIZE);
    lv_style_set_height(&style_kb_btn, KB_BTN_SIZE);
    lv_style_set_align(&style_kb_btn, LV_ALIGN_CENTER);
    lv_style_set_radius(&style_kb_btn, 100);
    lv_style_set_bg_color(&style_kb_btn, lv_color_hex(0xE5E5E5));
    lv_style_set_bg_opa(&style_kb_btn, 255);

    for (int i = 0; i < ARRAY_SIZE(numpad->numpad_panel); i++) {
        // Set the keyboard panel
        numpad->numpad_panel[i] = lv_obj_create(obj);
        lv_obj_clear_flag(numpad->numpad_panel[i], LV_OBJ_FLAG_SCROLLABLE);      /// Flags
        lv_obj_add_style(numpad->numpad_panel[i], &style_kb_num, LV_PART_MAIN | LV_STATE_DEFAULT);
        // Set the keyboard button
        numpad->numpad_button[i] = lv_btn_create(numpad->numpad_panel[i]);
        lv_obj_add_flag(numpad->numpad_button[i], LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
        lv_obj_clear_flag(numpad->numpad_button[i], LV_OBJ_FLAG_SCROLLABLE);      /// Flags
        lv_obj_add_style(numpad->numpad_button[i], &style_kb_btn, LV_PART_MAIN | LV_STATE_DEFAULT);
        // Set the keyboard label top
        numpad->numpad_label_top[i] = lv_label_create(numpad->numpad_panel[i]);
        lv_obj_set_width(numpad->numpad_label_top[i], LV_SIZE_CONTENT);   /// 1
        lv_obj_set_height(numpad->numpad_label_top[i], LV_SIZE_CONTENT);    /// 1
        lv_obj_set_align(numpad->numpad_label_top[i], LV_ALIGN_CENTER);
        lv_obj_set_style_text_font(numpad->numpad_label_top[i], &ui_font_OPPOSansBold50, LV_PART_MAIN | LV_STATE_DEFAULT);
        if (i == 9) {//the top label should be *
            lv_obj_set_x(numpad->numpad_label_top[i], -1);
            lv_obj_set_y(numpad->numpad_label_top[i], 20);
            lv_label_set_text(numpad->numpad_label_top[i], "*");
        } else if (i == 10) {//the top label should be 0
            lv_obj_set_x(numpad->numpad_label_top[i], 0);
            lv_obj_set_y(numpad->numpad_label_top[i], -10);
            lv_label_set_text(numpad->numpad_label_top[i], "0");
        } else if (i == 11) {//the top label should be #
            lv_label_set_text(numpad->numpad_label_top[i], "#");
        } else {
            char label[3];
            sprintf(label, "%d", i + 1);
            lv_obj_set_x(numpad->numpad_label_top[i], 0);
            lv_obj_set_y(numpad->numpad_label_top[i], -10);
            lv_label_set_text(numpad->numpad_label_top[i], label);
        }
    }

    for (int j = 0; j < ARRAY_SIZE(numpad->numpad_label_bottom); j++)
    {   // Set the keyboard label top(part of, only "ABC", "DEF", "GHI", "JKL", "MNO")
        if (j < ARRAY_SIZE(numpad->numpad_label_bottom) - 1) {
            numpad->numpad_label_bottom[j] = lv_label_create(numpad->numpad_button[j + 1]);
            lv_obj_set_width(numpad->numpad_label_bottom[j], LV_SIZE_CONTENT);   /// 1
            lv_obj_set_height(numpad->numpad_label_bottom[j], LV_SIZE_CONTENT);    /// 1
            lv_obj_set_x(numpad->numpad_label_bottom[j], 0);
            lv_obj_set_y(numpad->numpad_label_bottom[j], 30);
            lv_obj_set_align(numpad->numpad_label_bottom[j], LV_ALIGN_CENTER);
            lv_obj_set_style_text_font(numpad->numpad_label_bottom[j], &ui_font_OPPOSansBold14, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_color(numpad->numpad_label_bottom[j], lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
            if (j < ARRAY_SIZE(numpad->numpad_label_bottom) - 4) {
                char c = 'A';
                char str[6];
                sprintf(str, "%c %c %c", c + j, c + 1 + j, c + 2 + j);
                lv_label_set_text(numpad->numpad_label_bottom[j], str);
            }
        } else {
            numpad->numpad_label_bottom[j] = lv_label_create(numpad->numpad_button[10]);
            lv_obj_set_width(numpad->numpad_label_bottom[j], LV_SIZE_CONTENT);   /// 1
            lv_obj_set_height(numpad->numpad_label_bottom[j], LV_SIZE_CONTENT);    /// 1
            lv_obj_set_x(numpad->numpad_label_bottom[j], 0);
            lv_obj_set_y(numpad->numpad_label_bottom[j], 30);
            lv_obj_set_align(numpad->numpad_label_bottom[j], LV_ALIGN_CENTER);
            lv_obj_set_style_text_font(numpad->numpad_label_bottom[j], &ui_font_OPPOSansBold14, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_color(numpad->numpad_label_bottom[j], lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
        }
    }
    // Set the specail str
    lv_label_set_text(numpad->numpad_label_bottom[5], "P Q R S");
    lv_label_set_text(numpad->numpad_label_bottom[6], "T U V");
    lv_label_set_text(numpad->numpad_label_bottom[7], "W X Y Z");
    lv_label_set_text(numpad->numpad_label_bottom[8], "+");

    // lv_obj_add_event_cb(game_2048->btnm, btnm_event_cb, LV_EVENT_ALL, NULL);

    LV_TRACE_OBJ_CREATE("finished");
}


static void lv_numpad_destructor(const lv_obj_class_t * class_p, lv_obj_t * obj)
{
    lv_numpad_t * numpad = (lv_numpad_t *)obj;
    /*Free the widget specific data*/
}

static void lv_numpad_event(const lv_obj_class_t * class_p, lv_event_t * e)
{
    LV_UNUSED(class_p);

    lv_res_t res;

    /*Call the ancestor's event handler*/
    res = lv_obj_event_base(MY_CLASS, e);
    if(res != LV_RES_OK) return;

    /*Add the widget specific event handling here*/
}

