#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
//Onboard LED on ESP32 is GPIO 2 
/*
Turning an LED ON/OFF: 
- Determine GPIO pin connected to LED
- Enable GPIO pin as an OUTPUT 
- Set HIGH -> LED ON 
- Set LOW -> LED OFF 
*/

//Define Addresses using #define macros 
#define GPIO2 2 
#define GPIO_ENABLE_REG 0x3FF44020 // OUTPUT (1), INPUT (0)
#define GPIO_OUT_W1TS_REG 0x3FF44008 // "Write 1 to Set", Set GPIO HIGH 
#define GPIO_OUT_W1TC_REG 0x3FF4400C // "Write 1 to Clear", Set GPIO LOW 
#define DELAY_MS 200 



void app_main(void)
{
    // Create pointer variables to map onto physical addresses

    volatile uint32_t* gpio_enable_reg = (volatile uint32_t*) GPIO_ENABLE_REG; 
    volatile uint32_t* gpio_out_w1ts_reg = (volatile uint32_t*) GPIO_OUT_W1TS_REG; 
    volatile uint32_t* gpio_out_w1tc_reg = (volatile uint32_t*) GPIO_OUT_W1TC_REG; 

    *gpio_enable_reg = (1 << 2); //Go into this address and manipulate bit values 

    while(1){
    *gpio_out_w1ts_reg |= (1 << 2); 
    vTaskDelay(pdMS_TO_TICKS(DELAY_MS)); 
    *gpio_out_w1tc_reg |= (1 << 2); 
    vTaskDelay(pdMS_TO_TICKS(DELAY_MS)); 
    }
   

}
