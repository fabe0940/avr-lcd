#include <avr/io.h>
#include <inttypes.h>
#include "defines.h"
#include "ctrl.h"

void _lcd_set_ctrl_mode(uint8_t mode) {
	DDRA = mode;
	return;
}

void _lcd_set_data_mode(uint8_t mode) {
	DDRB = mode;
	return;
}

void _lcd_set_ctrl_e(uint8_t val) {
	_lcd_set_ctrl_mode(MODE_WRITE);
	PORTA = (PORTA & ~MASK_E) | (val << E);
	return;
}

void _lcd_set_ctrl_rs(uint8_t val) {
	_lcd_set_ctrl_mode(MODE_WRITE);
	PORTA = (PORTA & ~MASK_RS) | (val << RS);
	return;
}

void _lcd_set_ctrl_rw(uint8_t val) {
	_lcd_set_ctrl_mode(MODE_WRITE);
	PORTA = (PORTA & ~MASK_RW) | (val << RW);
	return;
}
