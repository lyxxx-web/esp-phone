/**
 * @file lv_svg_disp.h
 *
 */

#ifndef LV_SVG_DISP_H
#define LV_SVG_DISP_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/

#include "lvgl.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL PROTOTYPES
 **********************/
lv_obj_t * lv_svg_create(lv_obj_t * parent);

void lv_svg_resize(lv_obj_t * obj, int32_t w, int32_t h);

void lv_svg_set_buffer(lv_obj_t * obj, int32_t w, int32_t h, void * buf);

void lv_svg_set_draw_buf(lv_obj_t * obj, lv_img_dsc_t * draw_buf);

void lv_svg_set_src_data(lv_obj_t * obj, const void * src, size_t src_size);

void lv_svg_set_src_file(lv_obj_t * obj, const char * src);

/**********************
 * GLOBAL VARIABLES
 **********************/

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*LV_SVG_DISP_H*/