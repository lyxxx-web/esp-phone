/*
 * SPDX-FileCopyrightText: 2024 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: CC0-1.0
 */

#pragma once

#include <stdbool.h>
#include "esp_err.h"
#include "mmap_generate_svg_assets.h"

#ifdef __cplusplus
extern "C" {
#endif

extern mmap_assets_handle_t asset_svg;
esp_err_t app_animation_start(void);

#ifdef __cplusplus
}
#endif