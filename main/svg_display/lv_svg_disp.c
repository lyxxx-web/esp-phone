/**
 * @file lv_svg.c
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
    // Tvg_Animation * tvg_anim;
    // lv_anim_t * anim;
    // int32_t last_rendered_time;

    // float total_frames;


    // uint32_t start;
    // uint32_t end;
    // bool loop;
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

    /*Force updating when the buffer changes*/
    // float f_current;
    // tvg_animation_get_frame(svg->tvg_anim, &f_current);
    // anim_exec_cb(obj, (int32_t) f_current);
}

void lv_svg_set_buffer(lv_obj_t * obj, int32_t w, int32_t h, void * buf)
{
    lv_svg_t * svg = (lv_svg_t *)obj;

    tvg_swcanvas_set_target(svg->tvg_canvas, buf, w, w, h, TVG_COLORSPACE_ARGB8888);
    tvg_canvas_push(svg->tvg_canvas, svg->tvg_paint);
    lv_canvas_set_buffer(obj, buf, w, h, LV_IMG_CF_TRUE_COLOR);
    tvg_picture_set_size(svg->tvg_paint, w, h);

    /*Force updating when the buffer changes*/
    // float f_current;
    // tvg_animation_get_frame(svg->tvg_anim, &f_current);
    // anim_exec_cb(obj, (int32_t) f_current);
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

    /*Force updating when the buffer changes*/
    // float f_current;
    // tvg_animation_get_frame(svg->tvg_anim, &f_current);
    // anim_exec_cb(obj, (int32_t) f_current);
}

void lv_svg_set_src_data(lv_obj_t * obj, const void * src, size_t src_size)
{
    lv_svg_t * svg = (lv_svg_t *)obj;

    // if (svg->tvg_anim) {
    //     tvg_canvas_clear(svg->tvg_canvas, true);
    //     tvg_animation_del(svg->tvg_anim);

    //     svg->tvg_anim = tvg_animation_new();
    //     svg->tvg_paint = tvg_animation_get_picture(svg->tvg_anim);
    //     tvg_canvas_push(svg->tvg_canvas, svg->tvg_paint);
    // }
    tvg_picture_load_data(svg->tvg_paint, src, src_size, "svg", true);

    lv_img_dsc_t *canvas_draw_buf = lv_canvas_get_img(obj);
    if (canvas_draw_buf) {
        tvg_picture_set_size(svg->tvg_paint, canvas_draw_buf->header.w, canvas_draw_buf->header.h);
        #if LV_COLOR_DEPTH == 16
            // lv_img_dsc_t *canvas_draw_buf = lv_canvas_get_img(obj);
            convert_to_rgb565((uint8_t *)canvas_draw_buf->data, canvas_draw_buf->header.w, canvas_draw_buf->header.h); 
        #endif
    }

    // float f_total;
    // tvg_animation_get_total_frame(svg->tvg_anim, &f_total);
    // tvg_animation_set_segment(svg->tvg_anim, 1, f_total);
    // lv_anim_set_time(svg->anim, (int32_t)f_total * 1000 / 60); /*60 FPS*/

    // lv_anim_set_values(svg->anim, 0, (int32_t)f_total);
    // svg->anim->act_time = 0;
    // svg->anim->playback_now = false;
    // svg->total_frames = f_total;
    // svg->start = 0;
    // svg->end = f_total;
    // svg->loop = true;

    // svg_update(svg, 0);   /*Render immediately*/
    // ESP_LOGI("svg", "total frames:%.2f, playback_now:%d", 
    //                 f_total, 
    //                 svg->anim->playback_now, 
    //                 svg->anim->playback_now);
}

// void lv_svg_set_src_file(lv_obj_t * obj, const char * src)
// {
//     lv_svg_t * svg = (lv_svg_t *)obj;

//     if (svg->tvg_anim) {
//         tvg_canvas_clear(svg->tvg_canvas, true);
//         // tvg_animation_del(svg->tvg_anim);

//         svg->tvg_anim = tvg_animation_new();
//         svg->tvg_paint = tvg_animation_get_picture(svg->tvg_anim);
//         tvg_canvas_push(svg->tvg_canvas, svg->tvg_paint);
//     }

//     tvg_picture_load(svg->tvg_paint, src);
//     lv_img_dsc_t *canvas_draw_buf = lv_canvas_get_img(obj);
//     if (canvas_draw_buf) {
//         tvg_picture_set_size(svg->tvg_paint, canvas_draw_buf->header.w, canvas_draw_buf->header.h);
//     }

//     #if LV_COLOR_DEPTH == 16
//         lv_img_dsc_t *canvas_draw_buf = lv_canvas_get_img(obj);
//         if (canvas_draw_buf) {
//             convert_to_rgb565((uint8_t *)canvas_draw_buf->data, canvas_draw_buf->header.w, canvas_draw_buf->header.h);
//         }
//     #endif
//     float f_total;
//     tvg_animation_get_total_frame(svg->tvg_anim, &f_total);
//     lv_anim_set_time(svg->anim, (int32_t)f_total * 1000 / 60); /*60 FPS*/
//     svg->anim->act_time = 0;
//     svg->anim->end_value = (int32_t)f_total;
//     svg->anim->playback_now = false;
//     svg->total_frames = f_total;
//     svg->start = 0;
//     svg->end = f_total;
//     svg->loop = true;

//     svg_update(svg, 0);   /*Render immediately*/
// }

// lv_anim_t * lv_svg_get_anim(lv_obj_t * obj)
// {
//     LV_ASSERT_OBJ(obj, MY_CLASS);
//     lv_svg_t * svg = (lv_svg_t *)obj;
//     return svg->anim;
// }

// void lv_svg_set_segment(lv_obj_t * obj, uint32_t begin, uint32_t end, bool loop)
// {
//     LV_ASSERT_OBJ(obj, MY_CLASS);
//     lv_svg_t * svg = (lv_svg_t *)obj;

//     uint32_t clamped_begin = (begin < svg->total_frames) ? begin : svg->total_frames - 1;
//     uint32_t clamped_end = (end < svg->total_frames) ? end : svg->total_frames - 1;

//     if (clamped_begin > clamped_end) {
//         ESP_LOGW(TAG, "Invalid range: begin (%u) > end (%u). Swapping values.", clamped_begin, clamped_end);
//         uint32_t temp = clamped_begin;
//         clamped_begin = clamped_end;
//         clamped_end = temp;
//     }

//     svg->start = clamped_begin;
//     svg->end = clamped_end;
//     svg->loop = loop;
//     tvg_animation_set_frame(svg->tvg_anim, clamped_begin);

//     ESP_LOGI(TAG, "Set frame range: [%.2f, %.2f], loop: %s",
//              (float)clamped_begin, (float)clamped_end, loop ? "yes" : "no");

//     ESP_LOGI(TAG, "repeat_cnt:%d, playback_now:%d", svg->anim->repeat_cnt, svg->anim->playback_now);

//     return;
// }

// uint32_t lv_svg_get_start_f(lv_obj_t * obj)
// {
//     LV_ASSERT_OBJ(obj, MY_CLASS);
//     lv_svg_t * svg = (lv_svg_t *)obj;

//     return svg->start;
// }

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

    // svg->tvg_anim = tvg_animation_new();

    svg->tvg_paint = tvg_shape_new();
    // tvg_canvas_push(svg->tvg_canvas, svg->tvg_paint);
    // tvg_canvas_draw(svg->tvg_canvas);
    // tvg_canvas_sync(svg->tvg_canvas);

    // lv_anim_t a;
    // lv_anim_init(&a);
    // lv_anim_set_exec_cb(&a, anim_exec_cb);
    // lv_anim_set_var(&a, obj);
    // lv_anim_set_repeat_count(&a, LV_ANIM_REPEAT_INFINITE);
    // svg->anim = lv_anim_start(&a);

    LV_TRACE_OBJ_CREATE("finished");
}

static void lv_svg_destructor(const lv_obj_class_t * class_p, lv_obj_t * obj)
{
    LV_UNUSED(class_p);
    lv_svg_t * svg = (lv_svg_t *)obj;

    // tvg_animation_del(svg->tvg_anim);
    tvg_canvas_destroy(svg->tvg_canvas);

    tvg_engine_term(TVG_ENGINE_SW);
}

// static void anim_exec_cb(void * var, int32_t v)
// {
//     lv_svg_t * svg = var;

//     /*Do not render not visible animations.*/
//     if (lv_obj_is_visible(var)) {
//         svg_update(svg, v);
//         if (svg->anim) {
//             svg->last_rendered_time = svg->anim->act_time;
//         }
//     } else {
//         /*Artificially keep the animation on the last rendered frame's time
//          *To avoid a jump when the widget becomes visible*/
//         if (svg->anim) {
//             svg->anim->act_time = svg->last_rendered_time;
//         }
//     }
// }

// static void svg_update(lv_svg_t * svg, int32_t v)
// {
//     lv_obj_t * obj = (lv_obj_t *) svg;
    
//     float f = 0;
//     float f_p = 0;
//     tvg_animation_get_frame(svg->tvg_anim, &f);
//     f++;
//     if(f > svg->end) {
//         if (true == svg->loop) {
//             f_p = svg->start;
//         } else {
//             f_p = svg->end;
//         }
//     } else if(f < svg->start) {
//         f_p = svg->start;
//     } else {
//         f_p = f;
//     }

//     tvg_animation_set_frame(svg->tvg_anim, f_p);
//     tvg_canvas_update(svg->tvg_canvas);

//     tvg_canvas_draw(svg->tvg_canvas);
//     tvg_canvas_sync(svg->tvg_canvas);

// #if LV_COLOR_DEPTH == 16
//     lv_img_dsc_t *canvas_draw_buf = lv_canvas_get_img(obj);
//     if (canvas_draw_buf) {
//         convert_to_rgb565((uint8_t *)canvas_draw_buf->data, canvas_draw_buf->header.w, canvas_draw_buf->header.h);
//     }
// #endif

//     lv_obj_invalidate(obj);
// }
