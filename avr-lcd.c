#include <avr/io.h>
#include <avr/interrupt.h>
#include <inttypes.h>
#include <stdlib.h>
#include <util/delay.h>
#include "lcd/lcd.h"

void init(void);

int main(void) {
	init();

	PORTD = 0xFF;

	lcd_power(1);
	lcd_clear();
	lcd_putchar('H', NULL);
	lcd_putchar('e', NULL);
	lcd_putchar('l', NULL);
	lcd_putchar('l', NULL);
	lcd_putchar('o', NULL);
	lcd_putchar('\n', NULL);
	lcd_putchar('W', NULL);
	lcd_putchar('o', NULL);
	lcd_putchar('r', NULL);
	lcd_putchar('l', NULL);
	lcd_putchar('d', NULL);
	lcd_putchar('!', NULL);

	exit(0);
}

void init(void) {
	DDRC = 0xFF;
	PORTC = ~0x80;

	lcd_init();

	cli();

	return;
}
