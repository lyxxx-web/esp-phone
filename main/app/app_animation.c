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
#include "mmap_generate_svg_assets.h"

static const char *TAG = "app_animation";

mmap_assets_handle_t asset_svg;
esp_lv_fs_handle_t fs_drive_handle;

lvgl_port_cfg_t custom_cfg = {
    .task_priority = 4,       \
    .task_stack = 6000,       \
    .task_affinity = -1,      \
    .task_max_sleep_ms = 500, \
    .timer_period_ms = 5,  
};

static void app_mount_mmap_fs()
{
    const mmap_assets_config_t config_svg = {
        .partition_label = "svg",
        .max_files = MMAP_SVG_ASSETS_FILES,
        .checksum = MMAP_SVG_ASSETS_CHECKSUM,
        .flags = {
            .mmap_enable = true,
            .app_bin_check = true,
        },
    };

    mmap_assets_new(&config_svg, &asset_svg);
    ESP_LOGI(TAG, "[%s]stored_files:%d", config_svg.partition_label, mmap_assets_get_stored_files(asset_svg));
}

static esp_err_t lv_fs_add(void)
{
    fs_cfg_t fs_cfg;
    fs_cfg.fs_letter = 'A';
    fs_cfg.fs_assets = asset_svg;
    fs_cfg.fs_nums = MMAP_SVG_ASSETS_FILES;

    esp_err_t ret = esp_lv_fs_desc_init(&fs_cfg, &fs_drive_handle);
    if (ret != ESP_OK) {
        ESP_LOGE(TAG, "Failed to initialize FS");
        return ret;
    }
    return ESP_OK;
}

struct timeval tv_now = {
    .tv_sec = 0,
    .tv_usec = 0
};

static void lv_timer_cb(lv_timer_t *timer)
{
    struct tm timeinfo;
    static char time_str[6];

    gettimeofday(&tv_now, NULL);
    localtime_r(&tv_now.tv_sec, &timeinfo);

    snprintf(time_str, sizeof(time_str), "%02d:%02d", timeinfo.tm_hour, timeinfo.tm_min);
    lv_label_set_text(ui_darkTime, time_str);
    lv_label_set_text(ui_lightTime, time_str);
    
}

static void ui_init_timer()
{
    lv_timer_t * timer_clock = lv_timer_create(lv_timer_cb, 1000, NULL);
    lv_timer_cb(timer_clock);
}

static void app_lvgl_display(void)
{
    bsp_display_lock(0);

    ui_init();
    ui_init_timer();

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

    app_mount_mmap_fs();

    ESP_ERROR_CHECK(lv_fs_add());

    /* Add and show objects on display*/
    app_lvgl_display();
    return ESP_OK;
}