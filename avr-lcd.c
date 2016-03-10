#include <avr/interrupt.h>
#include <avr/io.h>
#include <inttypes.h>
#include <stdlib.h>
#include "lcd/lcd.h"

void init(void);

int main(void) {
	init();

	while (1) {
	}
	
	exit(0);
}

void init(void) {
	lcd_init();

	return;
}
