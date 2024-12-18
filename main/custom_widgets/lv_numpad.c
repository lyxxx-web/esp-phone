#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#include "lvgl.h"
#include "lv_numpad.h"

#include "ui.h"

#define MY_CLASS    &lv_numpad_class

#define KB_NUM_SIZE LV_HOR_RES * 0.23
#define KB_BTN_SIZE LV_HOR_RES * 0.21
#define KB_PAL_PAD_ROW     KB_NUM_SIZE * 0.18
#define KB_PAL_PAD_COLUMN  KB_NUM_SIZE * 0.28

#define KB_NUM_DISP_W   LV_HOR_RES
#define KB_NUM_DISP_H   KB_NUM_SIZE
#define KB_NUM_DISP_PAD_TOP KB_NUM_DISP_H * 0.4

#define KB_NUM_SIZE_DARK LV_HOR_RES * 0.2
#define KB_BTN_SIZE_DARK LV_HOR_RES * 0.15
#define KB_PAL_PAD_ROW_DARK     0
#define KB_PAL_PAD_COLUMN_DARK  KB_NUM_SIZE_DARK * 0.5

#define KB_BOTTOM_SPACE_W   KB_NUM_SIZE * 2.3 // the width of bottom empty objects(move the button the right position)
#define KB_BOTTOM_SPACE_W_DARK   KB_NUM_SIZE_DARK * 2.5 // the width of bottom empty objects(move the button the right position)

#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof((arr)[0]))

static void lv_numpad_constructor(const lv_obj_class_t * class_p, lv_obj_t * obj);
static void lv_numpad_destructor(const lv_obj_class_t * class_p, lv_obj_t * obj);
static void lv_numpad_event(const lv_obj_class_t * class_p, lv_event_t * e);
static void lv_numpad_button_backspace_event(lv_event_t * e);
static void lv_numpad_button_event(lv_event_t * e);

static lv_style_t style_kb_num;
static lv_style_t style_kb_btn;
static lv_style_t style_kb_disp;
static lv_style_t style_kb_label_top;
static lv_style_t style_kb_label_bottom;

static lv_style_t style_kb_backspace_default;
static lv_style_t style_kb_backspace_pressed;
static lv_style_t style_kb_panel;
static lv_style_t style_kb_spacer_bottom;
// static lv_coord_t keyboard_width;
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

void lv_numpad_theme(bool dark)
{
    if (dark) {
        lv_style_set_bg_color(&style_kb_btn, lv_color_hex(0x2B2B2B));
        lv_style_set_text_color(&style_kb_label_top, lv_color_hex(0xffffff));
        lv_style_set_text_color(&style_kb_label_bottom, lv_color_hex(0xffffff));
        lv_style_set_text_color(&style_kb_disp, lv_color_hex(0xffffff));
        lv_style_set_bg_img_src(&style_kb_backspace_default, &ui_img_backspace_light);
        lv_style_set_bg_img_src(&style_kb_backspace_pressed, &ui_img_backspace_light);

        lv_style_set_width(&style_kb_num, KB_NUM_SIZE_DARK);
        lv_style_set_height(&style_kb_num, KB_NUM_SIZE_DARK);
        lv_style_set_width(&style_kb_btn, KB_BTN_SIZE_DARK);
        lv_style_set_height(&style_kb_btn, KB_BTN_SIZE_DARK);
        lv_style_set_pad_row(&style_kb_panel, KB_PAL_PAD_ROW_DARK);
        lv_style_set_pad_column(&style_kb_panel, KB_PAL_PAD_COLUMN_DARK);

        lv_style_set_text_font(&style_kb_label_top, &ui_font_OPPOSansBold30);
        lv_style_set_text_font(&style_kb_label_bottom, &ui_font_OPPOSansBold10);

        lv_style_set_width(&style_kb_spacer_bottom, KB_BOTTOM_SPACE_W_DARK);

    } else {
        lv_style_set_bg_color(&style_kb_btn, lv_color_hex(0xE5E5E5));
        lv_style_set_text_color(&style_kb_label_top, lv_color_hex(0x000000));
        lv_style_set_text_color(&style_kb_label_bottom, lv_color_hex(0x000000));
        lv_style_set_text_color(&style_kb_disp, lv_color_hex(0x000000));
        lv_style_set_bg_img_src(&style_kb_backspace_default, &ui_img_backspace_dark);
        lv_style_set_bg_img_src(&style_kb_backspace_pressed, &ui_img_backspace_dark);

        lv_style_set_width(&style_kb_num, KB_NUM_SIZE);
        lv_style_set_height(&style_kb_num, KB_NUM_SIZE);
        lv_style_set_width(&style_kb_btn, KB_BTN_SIZE);
        lv_style_set_height(&style_kb_btn, KB_BTN_SIZE);
        lv_style_set_pad_row(&style_kb_panel, KB_PAL_PAD_ROW);
        lv_style_set_pad_column(&style_kb_panel, KB_PAL_PAD_COLUMN);

        lv_style_set_text_font(&style_kb_label_top, &ui_font_OPPOSansBold50);
        lv_style_set_text_font(&style_kb_label_bottom, &ui_font_OPPOSansBold14);

        lv_style_set_width(&style_kb_spacer_bottom, KB_BOTTOM_SPACE_W);

    }
}
/**********************
 *   STATIC FUNCTIONS
 **********************/
static void lv_numpad_style_init(void)
{
    /* Init style of numpad panel (panel contents button, label top and label bottom) */
    lv_style_init(&style_kb_num);
    lv_style_set_width(&style_kb_num, KB_NUM_SIZE);
    lv_style_set_height(&style_kb_num, KB_NUM_SIZE);
    lv_style_set_align(&style_kb_num, LV_ALIGN_CENTER);
    lv_style_set_bg_color(&style_kb_num, lv_color_hex(0xFFFFFF));
    lv_style_set_bg_opa(&style_kb_num, 0);
    lv_style_set_border_color(&style_kb_num, lv_color_hex(0x000000));
    lv_style_set_border_opa(&style_kb_num, 255);
    lv_style_set_border_width(&style_kb_num, 0);

    /* Init style of numpad button */
    lv_style_init(&style_kb_btn);
    lv_style_set_width(&style_kb_btn, KB_BTN_SIZE);
    lv_style_set_height(&style_kb_btn, KB_BTN_SIZE);
    lv_style_set_align(&style_kb_btn, LV_ALIGN_CENTER);
    lv_style_set_radius(&style_kb_btn, 100);
    lv_style_set_bg_color(&style_kb_btn, lv_color_hex(0xE5E5E5));
    lv_style_set_bg_opa(&style_kb_btn, 255);

    /* Init style of numpad text display area */
    lv_style_init(&style_kb_disp);
    lv_style_set_text_align(&style_kb_disp, LV_TEXT_ALIGN_CENTER);
    lv_style_set_width(&style_kb_disp, LV_HOR_RES);   /// 1
    lv_style_set_height(&style_kb_disp, KB_NUM_DISP_H);    /// 1
    lv_style_set_text_font(&style_kb_disp, &ui_font_OPPOSansBold50);
    lv_style_set_pad_top(&style_kb_disp, KB_NUM_DISP_PAD_TOP);
    lv_style_set_text_color(&style_kb_disp, lv_color_hex(0x000000));

    /* Init style of numpad label, both top and bottom*/
    lv_style_init(&style_kb_label_top);
    lv_style_set_width(&style_kb_label_top, LV_SIZE_CONTENT);   /// 1
    lv_style_set_height(&style_kb_label_top, LV_SIZE_CONTENT); 
    lv_style_set_align(&style_kb_label_top, LV_ALIGN_CENTER);
    lv_style_set_text_color(&style_kb_label_top, lv_color_hex(0x000000));
    lv_style_set_text_font(&style_kb_label_top, &ui_font_OPPOSansBold50);

    lv_style_init(&style_kb_label_bottom);
    lv_style_set_width(&style_kb_label_bottom, LV_SIZE_CONTENT);   /// 1
    lv_style_set_height(&style_kb_label_bottom, LV_SIZE_CONTENT); 
    lv_style_set_align(&style_kb_label_bottom, LV_ALIGN_CENTER);
    lv_style_set_text_color(&style_kb_label_bottom, lv_color_hex(0x000000));
    lv_style_set_text_font(&style_kb_label_bottom, &ui_font_OPPOSansBold14);

    /* Init styel of spacer bottom */
    lv_style_init(&style_kb_spacer_bottom);
    lv_style_set_width(&style_kb_spacer_bottom, KB_BOTTOM_SPACE_W);
    lv_style_set_bg_opa(&style_kb_spacer_bottom, 0);
    lv_style_set_border_width(&style_kb_spacer_bottom, 0);

    /* Init style of button backspace (both default and pressed) */
    lv_style_init(&style_kb_backspace_default);
    lv_style_set_width(&style_kb_backspace_default, KB_BTN_SIZE);
    lv_style_set_height(&style_kb_backspace_default, KB_BTN_SIZE);
    lv_style_set_bg_color(&style_kb_backspace_default, lv_color_hex(0x4CC55C));
    lv_style_set_bg_opa(&style_kb_backspace_default, 0);
    lv_style_set_bg_img_src(&style_kb_backspace_default, &ui_img_backspace_dark);
    lv_style_set_bg_img_opa(&style_kb_backspace_default, 100);
    lv_style_set_shadow_width(&style_kb_backspace_default, 0);
    lv_style_set_shadow_spread(&style_kb_backspace_default, 0);

    lv_style_init(&style_kb_backspace_pressed);
    lv_style_set_bg_img_src(&style_kb_backspace_pressed, &ui_img_backspace_dark);
    lv_style_set_width(&style_kb_backspace_pressed, KB_BTN_SIZE);
    lv_style_set_height(&style_kb_backspace_pressed, KB_BTN_SIZE);
    lv_style_set_bg_color(&style_kb_backspace_pressed, lv_color_hex(0x4CC55C));
    lv_style_set_bg_opa(&style_kb_backspace_pressed, 0);
    lv_style_set_bg_img_src(&style_kb_backspace_pressed, &ui_img_backspace_dark);
    lv_style_set_bg_img_opa(&style_kb_backspace_pressed, 220);
    lv_style_set_shadow_width(&style_kb_backspace_pressed, 0);
    lv_style_set_shadow_spread(&style_kb_backspace_pressed, 0);

    /* Init style of keyboard panel*/
    lv_style_init(&style_kb_panel);
    lv_style_set_width(&style_kb_panel, LV_HOR_RES);
    lv_style_set_height(&style_kb_panel, LV_SIZE_CONTENT);
    lv_style_set_bg_color(&style_kb_panel, lv_color_hex(0xFFFFFF));
    lv_style_set_radius(&style_kb_panel, 0);
    lv_style_set_bg_opa(&style_kb_panel, 0);
    lv_style_set_border_color(&style_kb_panel, lv_color_hex(0x000000));
    lv_style_set_border_opa(&style_kb_panel, 255);
    lv_style_set_border_width(&style_kb_panel, 0);
    lv_style_set_pad_row(&style_kb_panel, KB_PAL_PAD_ROW);
    lv_style_set_pad_column(&style_kb_panel, KB_PAL_PAD_COLUMN);

}

static void lv_numpad_constructor(const lv_obj_class_t * class_p, lv_obj_t * obj)
{
    LV_UNUSED(class_p);
    LV_TRACE_OBJ_CREATE("begin");

    lv_numpad_t * numpad = (lv_numpad_t *)obj;
    snprintf(numpad->numpad_disp_txt, sizeof(numpad->numpad_disp_txt), "%s", "\0");

    /* Set style of numpad, use flex layout */
    lv_obj_set_flex_flow(obj, LV_FLEX_FLOW_ROW_WRAP);
    lv_obj_set_flex_align(obj, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_add_style(obj, &style_kb_panel, LV_PART_MAIN | LV_STATE_DEFAULT);

    /* Init custom style */
    lv_numpad_style_init();

    /* Create text display area */
    numpad->numpad_numdisp = lv_label_create(obj);
    lv_label_set_text(numpad->numpad_numdisp, "");
    lv_obj_add_style(numpad->numpad_numdisp, &style_kb_disp, LV_PART_MAIN | LV_STATE_DEFAULT);

    /* Create numpad_panel, numpad_button, numpad_label_label_top */
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
        lv_obj_add_style(numpad->numpad_label_top[i], &style_kb_label_top, LV_PART_MAIN | LV_STATE_DEFAULT);
        if (i == 9) {//the top label should be *
            lv_obj_set_x(numpad->numpad_label_top[i], 0);
            lv_obj_set_y(numpad->numpad_label_top[i], 15);
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

    /* Create numpad_label_bottom */
    for (int j = 0; j < ARRAY_SIZE(numpad->numpad_label_bottom); j++)
    {   // Set the keyboard label top(part of, only "ABC", "DEF", "GHI", "JKL", "MNO")
        if (j < ARRAY_SIZE(numpad->numpad_label_bottom) - 1) {
            numpad->numpad_label_bottom[j] = lv_label_create(numpad->numpad_button[j + 1]);
            lv_obj_add_style(numpad->numpad_label_bottom[j], &style_kb_label_bottom, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_x(numpad->numpad_label_bottom[j], 0);
            lv_obj_set_y(numpad->numpad_label_bottom[j], 30);
            if (j < ARRAY_SIZE(numpad->numpad_label_bottom) - 4) {
                char c = 'A';
                char str[6];
                sprintf(str, "%c %c %c", c + j, c + 1 + j, c + 2 + j);
                lv_label_set_text(numpad->numpad_label_bottom[j], str);
            }
        } else {
            numpad->numpad_label_bottom[j] = lv_label_create(numpad->numpad_button[10]);
            lv_obj_add_style(numpad->numpad_label_bottom[j], &style_kb_label_bottom, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_x(numpad->numpad_label_bottom[j], 0);
            lv_obj_set_y(numpad->numpad_label_bottom[j], 30);
        }
    }

    // Set the specail text of numpad_label_bottom
    lv_label_set_text(numpad->numpad_label_bottom[5], "P Q R S");
    lv_label_set_text(numpad->numpad_label_bottom[6], "T U V");
    lv_label_set_text(numpad->numpad_label_bottom[7], "W X Y Z");
    lv_label_set_text(numpad->numpad_label_bottom[8], "+");

    /* Create numpad bottom spacer, move numpad_button_back to bottom right */
    numpad->numpad_spacer_buttom = lv_obj_create(obj);
    lv_obj_add_style(numpad->numpad_spacer_buttom, &style_kb_spacer_bottom, 0);
    lv_obj_clear_flag(numpad->numpad_spacer_buttom, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_clear_flag(numpad->numpad_spacer_buttom, LV_OBJ_FLAG_CLICKABLE);      /// Flags

    /* Create numpad button back */
    numpad->numpad_button_back = lv_btn_create(obj);
    lv_obj_add_style(numpad->numpad_button_back, &style_kb_backspace_default, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_add_flag(numpad->numpad_button_back, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(numpad->numpad_button_back, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    lv_obj_add_style(numpad->numpad_button_back, &style_kb_backspace_pressed, LV_PART_MAIN | LV_STATE_PRESSED);

    /* Register event callback */
    event_data * data = (event_data *)malloc(ARRAY_SIZE(numpad->numpad_panel) * sizeof(event_data));
    for (int k = 0; k < ARRAY_SIZE(numpad->numpad_panel); k++) {
        data[k].number = k + 1;
        data[k].obj = numpad;
        lv_obj_add_event_cb(numpad->numpad_button[k], lv_numpad_button_event, LV_EVENT_PRESSED, data + k);
    }
     
    lv_obj_add_event_cb(numpad->numpad_button_back, lv_numpad_button_backspace_event, LV_EVENT_ALL, numpad);

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

static void lv_numpad_button_event(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    event_data * user_data = (event_data *)lv_event_get_user_data(e);
    if (event_code == LV_EVENT_PRESSED) {
        // printf("keyboard_number is %d\n", user_data->number);
        char buffer[23];
        strcpy(buffer, user_data->obj->numpad_disp_txt);
        switch (user_data->number) {
            case 10:
                snprintf(user_data->obj->numpad_disp_txt, sizeof(user_data->obj->numpad_disp_txt), "%s %s", buffer, "*");
                break;
            case 11:
                snprintf(user_data->obj->numpad_disp_txt, sizeof(user_data->obj->numpad_disp_txt), "%s %s", buffer, "0");
                break;
            case 12:
                snprintf(user_data->obj->numpad_disp_txt, sizeof(user_data->obj->numpad_disp_txt), "%s %s", buffer, "#");
                break;
            default:
                snprintf(user_data->obj->numpad_disp_txt, sizeof(user_data->obj->numpad_disp_txt), "%s %d", buffer, user_data->number);
                break;
        }
        lv_label_set_text(user_data->obj->numpad_numdisp, user_data->obj->numpad_disp_txt);
    }

}

static void lv_numpad_button_backspace_event(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    lv_numpad_t * numpad_handle = (lv_numpad_t *)lv_event_get_user_data(e);
    if (event_code == LV_EVENT_PRESSED) {
        size_t len = strlen(numpad_handle->numpad_disp_txt);
        if (len) {
            numpad_handle->numpad_disp_txt[len - 2] = '\0';
            lv_label_set_text(numpad_handle->numpad_numdisp, numpad_handle->numpad_disp_txt);
        }
    }
    if (event_code == LV_EVENT_LONG_PRESSED) {
        numpad_handle->numpad_disp_txt[0] = '\0';
        lv_label_set_text(numpad_handle->numpad_numdisp, numpad_handle->numpad_disp_txt);
    }
}

