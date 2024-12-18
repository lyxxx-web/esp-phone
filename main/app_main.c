#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"
#include "esp_err.h"
#include "esp_check.h"

#include "app_animation.h"

#define MAX_TASKS 20
static const char *TAG = "main";
void print_all_tasks_stack_usage()
{
    TaskStatus_t task_status_array[MAX_TASKS];
    UBaseType_t task_count;
    unsigned long total_runtime;

    task_count = uxTaskGetSystemState(task_status_array, MAX_TASKS, &total_runtime);
    ESP_LOGI(TAG, "Task Name         | Stack Left (bytes) | State");

    for (UBaseType_t i = 0; i < task_count; i++)
    {
        TaskStatus_t *task_status = &task_status_array[i];
        uint32_t stack_high_water_mark = task_status->usStackHighWaterMark * sizeof(StackType_t);
        ESP_LOGI(TAG, "%-17s | %-18d | %d",
                 task_status->pcTaskName,
                 stack_high_water_mark,
                 task_status->eCurrentState);
    }
        printf("\n");
}
void task_monitor(void *param)
{
    while (1)
    {
        print_all_tasks_stack_usage();
        vTaskDelay(pdMS_TO_TICKS(5000));
    }
}
void app_main(void)
{
    app_animation_start();
    xTaskCreate(task_monitor, "task_monitor", 4096, NULL, 1, NULL);
}
