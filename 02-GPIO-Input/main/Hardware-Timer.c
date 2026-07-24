/*
Creating a delay driver: 

*/
#include <stdio.h>

#define GPIO2 2

#define GPIO_ENABLE_REG 0x3FF44020
#define GPIO_OUT_W1TS_REG 0x3FF44008
#define GPIO_OUT_W1TC_REG 0x3FF4400C


void app_main(void)
{

volatile uint32_t* gpio_enable_reg = (volatile uint32_t*) GPIO_ENABLE_REG; 
volatile uint32_t* gpio_out_w1ts_reg = (volatile uint32_t*) GPIO_OUT_W1TS_REG; //high
volatile uint32_t* gpio_out_w1tc_reg = (volatile uint32_t*) GPIO_OUT_W1TC_REG; //low

*gpio_enable_reg |= (1<<GPIO2); 
// *gpio_out_w1ts_reg |= (1<<GPIO2); 
// *gpio_out_w1tc_reg |= (1<<GPIO2); 

}

void delay_microseconds(uint32_t microsecods){
    
}
