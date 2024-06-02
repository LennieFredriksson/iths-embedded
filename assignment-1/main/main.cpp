#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "driver/gpio.h"
#include "esp_log.h"

static const char *TAG = "MAIN";

extern "C" void app_main(void)
{
    for (size_t i = 0; i < 10; i++)
    {
        ESP_LOGI(TAG,"Testing");
        vTaskDelay(pdMS_TO_TICKS(1000));
    }
}