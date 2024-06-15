#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "driver/gpio.h"
#include "esp_log.h"
#include "driver/touch_pad.h"
#include <string>

static const char *TAG = "MAIN";
static char *test = "S";
bool hasChanged = false;
bool noPress = true;

#define ROW_1 GPIO_NUM_14
#define ROW_2 GPIO_NUM_27
#define ROW_3 GPIO_NUM_26
#define ROW_4 GPIO_NUM_25
#define COL_1 GPIO_NUM_13
#define COL_2 GPIO_NUM_21
#define COL_3 GPIO_NUM_22
#define COL_4 GPIO_NUM_23

gpio_num_t pin1;
gpio_num_t pin2;
gpio_num_t pin3;
gpio_num_t pin4;
gpio_num_t pin5;
gpio_num_t pin6;
gpio_num_t pin7;
gpio_num_t pin8;

int statusPin1;
int statusPin2;
int statusPin3;
int statusPin4;
int statusPin5;
int statusPin6;
int statusPin7;
int statusPin8;

void reset()
{
    // RESET:
    gpio_set_level(ROW_1,0);
    gpio_set_level(ROW_2,0);
    gpio_set_level(ROW_3,0);
    gpio_set_level(ROW_4,0);
    gpio_set_level(COL_1,0);
    gpio_set_level(COL_2,0);
    gpio_set_level(COL_3,0);
    gpio_set_level(COL_4,0);
}

extern "C" void app_main(void)
{
    // ROWS:
    esp_rom_gpio_pad_select_gpio(ROW_1);
    gpio_set_direction(ROW_1, GPIO_MODE_OUTPUT);
    gpio_pullup_dis(ROW_1);
    gpio_pulldown_en(ROW_1);
    esp_rom_gpio_pad_select_gpio(ROW_2);
    gpio_set_direction(ROW_2, GPIO_MODE_OUTPUT);
    gpio_pullup_dis(ROW_2);
    gpio_pulldown_en(ROW_2);
    esp_rom_gpio_pad_select_gpio(ROW_3);
    gpio_set_direction(ROW_3, GPIO_MODE_OUTPUT);
    gpio_pullup_dis(ROW_3);
    gpio_pulldown_en(ROW_3);
    esp_rom_gpio_pad_select_gpio(ROW_4);
    gpio_set_direction(ROW_4, GPIO_MODE_OUTPUT);
    gpio_pullup_dis(ROW_4);
    gpio_pulldown_en(ROW_4);

    // COLS:
    esp_rom_gpio_pad_select_gpio(COL_1);
    gpio_set_direction(COL_1, GPIO_MODE_INPUT);
    gpio_pullup_dis(COL_1);
    gpio_pulldown_en(COL_1);
    esp_rom_gpio_pad_select_gpio(COL_2);
    gpio_set_direction(COL_2, GPIO_MODE_INPUT);
    gpio_pullup_dis(COL_2);
    gpio_pulldown_en(COL_2);
    esp_rom_gpio_pad_select_gpio(COL_3);
    gpio_set_direction(COL_3, GPIO_MODE_INPUT);
    gpio_pullup_dis(COL_3);
    gpio_pulldown_en(COL_3);
    esp_rom_gpio_pad_select_gpio(COL_4);
    gpio_set_direction(COL_4, GPIO_MODE_INPUT);
    gpio_pullup_dis(COL_4);
    gpio_pulldown_en(COL_4);


    bool statusRow1 = false;
    bool statusRow2 = false;
    bool statusRow3 = false;
    bool statusRow4 = false;
    bool statusCol1 = false;
    bool statusCol2 = false;
    bool statusCol3 = false;
    bool statusCol4 = false;

    reset();

    for (size_t i = 0; i < 1000; i++)
    {
        gpio_set_level(ROW_1, 1);
        statusRow1 = true;

        if(gpio_get_level(COL_1)>0.8)
        {
            //statusCol1 = true;
            test="1";
            hasChanged = true;
            //gpio_set_level(COL_1,0);
        }
        else if(gpio_get_level(COL_2)>0.8)
        {
            //statusCol2 = true;
            test="2";
            hasChanged = true;
            //gpio_set_level(COL_2,0);
        }
        else if(gpio_get_level(COL_3)>0.8)
        {
            //statusCol3 = true;
            test="3";
            hasChanged = true;
            //gpio_set_level(COL_3,0);
        }
        else if(gpio_get_level(COL_4)>0.8)
        {
            //statusCol4 = true;
            test="A";
            hasChanged = true;
            //gpio_set_level(COL_4,0);
        }

        //gpio_set_level(ROW_1, 0);
        reset();
        statusRow1 = false;

        // =================================

        gpio_set_level(ROW_2, 1);
        statusRow2 = true;

        if(gpio_get_level(COL_1)>0.8)
        {
            //statusCol1 = true;
            test="4";
            hasChanged = true;
            //gpio_set_level(COL_1,0);
        }
        else if(gpio_get_level(COL_2)>0.8)
        {
            //statusCol2 = true;
            test="5";
            hasChanged = true;
            //gpio_set_level(COL_2,0);
        }
        else if(gpio_get_level(COL_3)>0.8)
        {
            //statusCol3 = true;
            test="6";
            hasChanged = true;
            //gpio_set_level(COL_3,0);
        }
        else if(gpio_get_level(COL_4)>0.8)
        {
            //statusCol4 = true;
            test="B";
            hasChanged = true;
            //gpio_set_level(COL_4,0);
        }

        //gpio_set_level(ROW_2, 0);
        reset();
        statusRow2 = false;

        // =================================

        gpio_set_level(ROW_3, 1);
        statusRow3 = true;

        if(gpio_get_level(COL_1)>0.7)
        {
            //statusCol1 = true;
            test="7";
            hasChanged = true;
            //gpio_set_level(COL_1,0);
        }
        else if(gpio_get_level(COL_2)>0.7)
        {
            //statusCol2 = true;
            test="8";
            hasChanged = true;
            //gpio_set_level(COL_2,0);
        }
        else if(gpio_get_level(COL_3)>0.7)
        {
            //statusCol3 = true;
            test="9";
            hasChanged = true;
            //gpio_set_level(COL_3,0);
        }
        else if(gpio_get_level(COL_4)>0.7)
        {
            //statusCol4 = true;
            test="C";
            hasChanged = true;
            //gpio_set_level(COL_4,0);
        }

        //gpio_set_level(ROW_3, 0);
        reset();
        statusRow3 = false;

        // =================================

        gpio_set_level(ROW_4, 1);
        statusRow4 = true;

        if(gpio_get_level(COL_1)>0.8)
        {
            //statusCol1 = true;
            test="*";
            hasChanged = true;
            //gpio_set_level(COL_1,0);
        }
        else if(gpio_get_level(COL_2)>0.8)
        {
            //statusCol2 = true;
            test="0";
            hasChanged = true;
            //gpio_set_level(COL_2,0);
        }
        else if(gpio_get_level(COL_3)>0.8)
        {
            //statusCol3 = true;
            test="#";
            hasChanged = true;
            //gpio_set_level(COL_3,0);
        }
        else if(gpio_get_level(COL_4)>0.8)
        {
            //statusCol4 = true;
            test="D";
            hasChanged = true;
            //gpio_set_level(COL_4,0);
        }

        //gpio_set_level(ROW_4, 0);
        reset();
        //statusRow4 = false;

        // =================================

        if(hasChanged)
        {
             
            ESP_LOGI(TAG,"%s",test);
            vTaskDelay(pdMS_TO_TICKS(200));
            hasChanged = false;
        }

        //ESP_LOGI(TAG,"Testing Col --> %s <--", test);
        //ESP_LOGI(TAG,"Testing Led_1 %d", statusPin1);
        vTaskDelay(pdMS_TO_TICKS(200));
    }
}