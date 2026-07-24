#include <stdio.h> 
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

#define GPIO2 2

//GPIO Register Addresses 
#define GPIO_ENABLE_REG 0x3FF44020
#define GPIO_OUT_W1TS_REG 0x3FF44008
#define GPIO_OUT_W1TC_REG 0x3FF4400C

#define DELAY_MS 200 

void app_main(void){

//Create pointer variables to map onto physical addresses 

volatile uint32_t* gpio_enable_reg = (volatile uint32_t*) GPIO_ENABLE_REG;
volatile uint32_t* gpio_out_w1ts_reg = (volatile uint32_t*) GPIO_OUT_W1TS_REG;
volatile uint32_t* gpio_out_w1tc_reg = (volatile uint32_t*) GPIO_OUT_W1TC_REG;

*gpio_enable_reg |= (1 << GPIO2); //Go into this address and manipulate bit values

while(1){
*gpio_out_w1ts_reg |= (1 << GPIO2);
vTaskDelay(pdMS_TO_TICKS(DELAY_MS));
*gpio_out_w1tc_reg |= (1 << GPIO2);
vTaskDelay(pdMS_TO_TICKS(DELAY_MS));
}

}