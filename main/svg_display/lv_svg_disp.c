/**
 * @file lv_svg_disp.c
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include "esp_log.h"
#include "esp_err.h"
#include "esp_check.h"

#include "thorvg_capi.h"
#include "lv_svg_disp.h"

static const char *TAG = "svg_disp";

/*********************
 *      DEFINES
 *********************/
#define MY_CLASS (&lv_svg_class)

/**********************
 *      TYPEDEFS
 **********************/

typedef struct {
    lv_canvas_t canvas;
    Tvg_Paint * tvg_paint;
    Tvg_Canvas * tvg_canvas;
    Tvg_Animation * tvg_anim;
} lv_svg_t;

/**********************
 *  STATIC PROTOTYPES
 **********************/
static void lv_svg_constructor(const lv_obj_class_t * class_p, lv_obj_t * obj);
static void lv_svg_destructor(const lv_obj_class_t * class_p, lv_obj_t * obj);
static void convert_to_rgb565(uint8_t *in, int width, int height);
// static void anim_exec_cb(void * var, int32_t v);
// static void svg_update(lv_svg_t * svg, int32_t v);

/**********************
 *  STATIC VARIABLES
 **********************/
const lv_obj_class_t lv_svg_class = {
    .constructor_cb = lv_svg_constructor,
    .destructor_cb = lv_svg_destructor,
    .width_def = LV_DPI_DEF,
    .height_def = LV_DPI_DEF,
    .instance_size = sizeof(lv_svg_t),
    .base_class = &lv_canvas_class,
};

/**********************
 *  GLOBAL VARIABLES
 **********************/

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

lv_obj_t * lv_svg_create(lv_obj_t * parent)
{
    LV_LOG_INFO("begin");
    lv_obj_t * obj = lv_obj_class_create_obj(MY_CLASS, parent);
    lv_obj_class_init_obj(obj);
    return obj;
}

void lv_svg_resize(lv_obj_t * obj, int32_t w, int32_t h)
{
    lv_svg_t * svg = (lv_svg_t *)obj;

    lv_img_dsc_t *canvas_draw_buf = lv_canvas_get_img(obj);
    if (canvas_draw_buf) {
        void *temp = realloc((void *)canvas_draw_buf->data, w * h * 4);
        if (temp) {
            canvas_draw_buf->data = temp;
        } else {
            ESP_LOGE("", "canvas_draw_buf alloc failed");
            return;
        }
    } else {
        ESP_LOGE("", "canvas_draw_buf is NULL");
        return;
    }

    tvg_swcanvas_set_target(svg->tvg_canvas, (void *)canvas_draw_buf->data, w, w, h, TVG_COLORSPACE_ARGB8888);
    tvg_canvas_push(svg->tvg_canvas, svg->tvg_paint);
    lv_canvas_set_buffer(obj, (void *)canvas_draw_buf->data, w, h, LV_IMG_CF_TRUE_COLOR);
    tvg_picture_set_size(svg->tvg_paint, w, h);
}

void lv_svg_set_buffer(lv_obj_t * obj, int32_t w, int32_t h, void * buf)
{
    lv_svg_t * svg = (lv_svg_t *)obj;

    tvg_swcanvas_set_target(svg->tvg_canvas, buf, w, w, h, TVG_COLORSPACE_ARGB8888);
    tvg_canvas_push(svg->tvg_canvas, svg->tvg_paint);
    lv_canvas_set_buffer(obj, buf, w, h, LV_IMG_CF_TRUE_COLOR);
    tvg_picture_set_size(svg->tvg_paint, w, h);
}

void lv_svg_set_draw_buf(lv_obj_t * obj, lv_img_dsc_t * draw_buf)
{
    if (draw_buf->header.cf != LV_IMG_CF_TRUE_COLOR) {
        LV_LOG_WARN("The draw buf needs to have ARGB8888 color format");
        return;
    }

    lv_svg_t * svg = (lv_svg_t *)obj;
    tvg_swcanvas_set_target(svg->tvg_canvas, (void *)draw_buf->data, draw_buf->header.w,
                            draw_buf->header.w, draw_buf->header.h, TVG_COLORSPACE_ARGB8888);
    tvg_canvas_push(svg->tvg_canvas, svg->tvg_paint);
    lv_canvas_set_buffer(obj, (void *)draw_buf->data,
                         draw_buf->header.w, draw_buf->header.h, LV_IMG_CF_TRUE_COLOR);
    tvg_picture_set_size(svg->tvg_paint, draw_buf->header.w, draw_buf->header.h);
}

void lv_svg_set_src_data(lv_obj_t * obj, const void * src, size_t src_size)
{
    lv_svg_t * svg = (lv_svg_t *)obj;

    if (svg->tvg_anim) {
        tvg_canvas_clear(svg->tvg_canvas, true);
        tvg_animation_del(svg->tvg_anim);
        // printf("overwrite last svg\n");
        svg->tvg_anim = tvg_animation_new();
        svg->tvg_paint = tvg_animation_get_picture(svg->tvg_anim);
        tvg_canvas_push(svg->tvg_canvas, svg->tvg_paint);
    }

    tvg_picture_load_data(svg->tvg_paint, src, src_size, "svg", true);

    lv_img_dsc_t *canvas_draw_buf = lv_canvas_get_img(obj);
    if (canvas_draw_buf) {
        tvg_picture_set_size(svg->tvg_paint, canvas_draw_buf->header.w, canvas_draw_buf->header.h);
    }

    tvg_canvas_push(svg->tvg_canvas, svg->tvg_paint);
    tvg_canvas_draw(svg->tvg_canvas);
    tvg_canvas_sync(svg->tvg_canvas);
#if LV_COLOR_DEPTH == 16
    convert_to_rgb565((uint8_t *)canvas_draw_buf->data, canvas_draw_buf->header.w, canvas_draw_buf->header.h); 
#endif
    lv_obj_invalidate(obj);
}

void lv_svg_set_src_file(lv_obj_t * obj, const char * src)
{
    lv_svg_t * svg = (lv_svg_t *)obj;

    if (svg->tvg_anim) {
        tvg_canvas_clear(svg->tvg_canvas, true);
        tvg_animation_del(svg->tvg_anim);

        svg->tvg_anim = tvg_animation_new();
        svg->tvg_paint = tvg_animation_get_picture(svg->tvg_anim);
        tvg_canvas_push(svg->tvg_canvas, svg->tvg_paint);
    }

    tvg_picture_load(svg->tvg_paint, src);
    lv_img_dsc_t *canvas_draw_buf = lv_canvas_get_img(obj);
    if (canvas_draw_buf) {
        tvg_picture_set_size(svg->tvg_paint, canvas_draw_buf->header.w, canvas_draw_buf->header.h);
    }

    tvg_canvas_push(svg->tvg_canvas, svg->tvg_paint);
    tvg_canvas_draw(svg->tvg_canvas);
    tvg_canvas_sync(svg->tvg_canvas);
#if LV_COLOR_DEPTH == 16
    convert_to_rgb565((uint8_t *)canvas_draw_buf->data, canvas_draw_buf->header.w, canvas_draw_buf->header.h); 
#endif
    lv_obj_invalidate(obj);
}


/**********************
 *   STATIC FUNCTIONS
 **********************/

#if LV_COLOR_DEPTH == 16
static void convert_to_rgb565(uint8_t *in, int width, int height)
{
    uint16_t *out = (uint16_t *)in;
    int numPixels = width * height;

    for (int i = 0; i < numPixels; i++) {
        uint8_t r = in[i * 4 + 2];
        uint8_t g = in[i * 4 + 1];
        uint8_t b = in[i * 4 + 0];

        uint16_t r565 = (r >> 3) & 0x1F;
        uint16_t g565 = (g >> 2) & 0x3F;
        uint16_t b565 = (b >> 3) & 0x1F;

        uint16_t rgb565Value = (r565 << 11) | (g565 << 5) | b565;
#if LV_COLOR_16_SWAP == 0
        out[i] = rgb565Value;
#else
        out[i] = (((rgb565Value) >> 8) | (((rgb565Value) & 0xFF) << 8));
#endif
    }
}
#endif

static void lv_svg_constructor(const lv_obj_class_t * class_p, lv_obj_t * obj)
{
    LV_UNUSED(class_p);
    LV_TRACE_OBJ_CREATE("begin");

    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);

    lv_svg_t * svg = (lv_svg_t *)obj;

    tvg_engine_init(TVG_ENGINE_SW, 0);
 
    svg->tvg_canvas = tvg_swcanvas_create();

    svg->tvg_anim = tvg_animation_new();

    svg->tvg_paint = tvg_animation_get_picture(svg->tvg_anim);

    LV_TRACE_OBJ_CREATE("finished");
}

static void lv_svg_destructor(const lv_obj_class_t * class_p, lv_obj_t * obj)
{
    LV_UNUSED(class_p);
    lv_svg_t * svg = (lv_svg_t *)obj;

    tvg_animation_del(svg->tvg_anim);
    tvg_canvas_destroy(svg->tvg_canvas);

    tvg_engine_term(TVG_ENGINE_SW);
}
