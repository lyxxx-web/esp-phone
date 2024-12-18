#ifndef LV_NUMPAD_H
#define LV_NUMPAD_H

#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"

// #define MATRIX_SIZE     4

typedef struct {
    lv_obj_t obj;
    lv_obj_t * numpad_numdisp;
    char numpad_disp_txt[23];
    lv_obj_t * numpad_panel[12];
    lv_obj_t * numpad_button[12];
    lv_obj_t * numpad_label_top[12];
    lv_obj_t * numpad_label_bottom[9];
    lv_obj_t * numpad_button_back;
    lv_obj_t * numpad_spacer_buttom;
} lv_numpad_t;

typedef struct 
{
   int number;
   lv_numpad_t * obj;
} event_data;

lv_obj_t * lv_numpad_create(lv_obj_t * parent);

void lv_numpad_text_area_clean(lv_obj_t * obj);

void lv_numpad_theme(bool dark);
#endif  /*LV_USE_100ASK_2048*/

#ifdef __cplusplus
} /*extern "C"*/
#endif