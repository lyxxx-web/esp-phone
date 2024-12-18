/*
 * SPDX-FileCopyrightText: 2024 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: CC0-1.0
 */
#include <string.h>
#include <time.h>
#include <sys/time.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"
#include "esp_err.h"
#include "esp_check.h"
#include "esp_timer.h"
#include "esp_lv_fs.h"
#include "bsp/esp-bsp.h"
#include "bsp/display.h"
#include "lvgl.h"

#include "app_animation.h"
#include "ui/ui.h"

static const char *TAG = "app_animation";

lvgl_port_cfg_t custom_cfg = {
    .task_priority = 4,       \
    .task_stack = 30 * 1024,       \
    .task_affinity = -1,      \
    .task_max_sleep_ms = 500, \
    .timer_period_ms = 5,  
};

static void app_lvgl_display(void)
{
    bsp_display_lock(0);

    ui_init();

    bsp_display_unlock();
}

esp_err_t app_animation_start(void)
{
    bsp_display_cfg_t cfg = {
        .lvgl_port_cfg = custom_cfg,
        .buffer_size = BSP_LCD_DRAW_BUFF_SIZE,
        .double_buffer = BSP_LCD_DRAW_BUFF_DOUBLE,
        .flags = {
            .buff_dma = true,
            .buff_spiram = false,
            .sw_rotate = true,
        }
    };
    bsp_display_start_with_config(&cfg);
    bsp_display_backlight_on();

    /* Add and show objects on display*/
    app_lvgl_display();
    return ESP_OK;
}