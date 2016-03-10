#include <avr/io.h>
#include <inttypes.h>
#include "ctrl.h"
#include "defines.h"
#include "data.h"

void _lcd_set_data(uint8_t dat) {
	_lcd_set_data_mode(MODE_WRITE);
	PORTB = dat;
	return;
}

uint8_t _lcd_get_data(void) {
	_lcd_set_data_mode(MODE_READ);
	return PINB;
}
