#include <avr/interrupt.h>
#include <stdlib.h>
#include <util/delay.h>
#include "lcd/lcd.h"
#include "io.h"

void init(void);

int main(void) {
	const char* MSGS[] = {
		"\rATMega32 LCD Display\nDemo - Homework 4",
		"\rHello\nWorld!",
		"\rWe choose to go to\nthe moon... not",
		"\rbecause it is\neasy, but because it",
		"\ris hard.\n  -JFK",
	};
	const uint8_t SIZE = 5;
	uint8_t i;

	init();

	lcd_power(POWER_ON);

	i = 0;
	while (1) {
		lcd_clear();
		fprintf(stdlcd, "%s", MSGS[i]);

		_delay_ms(2000);

		i = (i + 1) % SIZE;
	}

	exit(0);
}

void init(void) {
	lcd_init();

	cli();

	return;
}
