#ifndef _LED_H_
#define _LED_H_

#include <stdbool.h>

void led_init(void);
void led_set(bool on);
void led_turnon(void);
void led_turnoff(void);
void led_switch(void);

#endif /* _LED_H_ */