#include <avr/io.h>
#include <inttypes.h>
#include <stdio.h>
#include "ctrl.h"
#include "data.h"
#include "defines.h"
#include "lcd.h"
#include "util.h"

int lcd_init(void) {
	_lcd_set_ctrl_mode(MODE_WRITE);
	_lcd_set_data_mode(MODE_WRITE);
	
	return 0;
}

int lcd_clear(void) {
	return 0;
}

int lcd_putchar(char ch, FILE *stream) {
	return 0;
}
