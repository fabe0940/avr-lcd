#ifndef _LCD_H_
#define _LCDLH_

#include <stdio.h>

int lcd_init(void);
int lcd_clear(void);
int lcd_power(uint8_t pwr);
int lcd_putchar(char ch, FILE *stream);

#endif /* _LCD_H_ */
