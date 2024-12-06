#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"
#include "esp_err.h"
#include "esp_check.h"

#include "app_animation.h"

static const char *TAG = "main";
void app_main(void)
{
    app_animation_start();
}
