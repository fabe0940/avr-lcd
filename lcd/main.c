#include <avr/io.h>
#include <util/delay.h>
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

	_lcd_set_ctrl(0, 0, 0);

	_delay_ms(20);

	_lcd_set_ctrl(0, 0, 0);
	_lcd_set_data(0x30);
	_lcd_set_ctrl(0, 0, 1);

	_delay_ms(5);

	_lcd_set_ctrl(0, 0, 0);
	_lcd_set_data(0x30);
	_lcd_set_ctrl(0, 0, 1);

	_delay_ms(5);

	_lcd_set_ctrl(0, 0, 0);
	_lcd_set_data(0x30);
	_lcd_set_ctrl(0, 0, 1);

	_delay_ms(5);

	_lcd_set_ctrl(0, 0, 0);
	_lcd_set_data(0x38);
	_lcd_set_ctrl(0, 0, 1);

	_delay_ms(5);

	_lcd_set_ctrl(0, 0, 0);
	_lcd_set_data(0x08);
	_lcd_set_ctrl(0, 0, 1);

	_delay_ms(5);

	_lcd_set_ctrl(0, 0, 0);
	_lcd_set_data(0x01);
	_lcd_set_ctrl(0, 0, 1);

	_delay_ms(5);

	_lcd_set_ctrl(0, 0, 0);
	_lcd_set_data(0x06);
	_lcd_set_ctrl(0, 0, 1);

	_delay_ms(5);
	
	return 0;
}

int lcd_power(uint8_t pwr) {
	_lcd_set_ctrl_mode(MODE_WRITE);
	_lcd_set_data_mode(MODE_WRITE);

	_lcd_set_ctrl(0, 0, 1);
	_lcd_set_data(0x0A | (pwr << 2));
	_lcd_set_ctrl(0, 0, 0);

	_delay_ms(5);

	return 0;
}

int lcd_clear(void) {
	_lcd_set_ctrl_mode(MODE_WRITE);
	_lcd_set_data_mode(MODE_WRITE);

	_lcd_set_ctrl(0, 0, 0);
	_lcd_set_data(0x01);
	_lcd_set_ctrl(0, 0, 1);

	_delay_ms(5);

	return 0;
}

int lcd_putchar(char ch, FILE *stream) {
	_lcd_set_ctrl_mode(MODE_WRITE);
	_lcd_set_data_mode(MODE_WRITE);

	switch (ch) {
		case '\n':
			_lcd_set_ctrl(0, 0, 1);
			_lcd_set_data(0xC0);
			_lcd_set_ctrl(0, 0, 0);
			break;
		case '\r':
			_lcd_set_ctrl(0, 0, 1);
			_lcd_set_data(0x02);
			_lcd_set_ctrl(0, 0, 0);
			break;
		default:
			_lcd_set_ctrl(1, 0, 1);
			_lcd_set_data(ch);
			_lcd_set_ctrl(1, 0, 0);
	}

	_delay_ms(5);

	return 0;
}
