#include <stdbool.h>
#include "stm32f10x.h"
#include "led.h"

#define LED_PORT GPIOC
#define LED_PIN GPIO_Pin_10

bool led_state = false;

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
    led_state = on;
    GPIO_WriteBit(LED_PORT, LED_PIN, led_state ? Bit_RESET : Bit_SET);
    return;
}

void led_turnon(void)
{
    led_set(Bit_RESET);
    return;
}

void led_turnoff(void)
{
    led_set(Bit_SET);
    return;
}

void led_switch(void)
{
    led_set(!led_state);
    return;
}