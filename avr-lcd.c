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

	lcd_putchar('a', NULL);

	exit(0);
}

void init(void) {
	DDRC = 0xFF;
	PORTC = ~0x80;

	lcd_init();

	cli();

	return;
}
