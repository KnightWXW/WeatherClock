#include <stdbool.h>
#include "stm32f10x.h"
#include "led.h"

#define LED_PORT GPIOC
#define LED_PIN GPIO_Pin_10

void led_init(void)
{
    GPIO_InitTypeDef GPIO_InitStructure;
    GPIO_InitStructure.GPIO_Pin = LED_PIN;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
    GPIO_Init(LED_PORT, &GPIO_InitStructure);
    GPIO_SetBits(LED_PORT, LED_PIN);
    return;
}

void led_set(bool on)
{
    GPIO_SetBits(LED_PORT, LED_PIN);
}

void led_turnon(void)
{
}

void led_turnoff(void)
{
}

void led_switch(void)
{
}