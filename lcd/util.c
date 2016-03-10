#include <util/delay.h>
#include "defines.h"
#include "ctrl.h"
#include "data.h"
#include "util.h"

void _lcd_wait(void) {
	uint8_t in;

	_lcd_set_data_mode(MODE_READ);

	do {
		_lcd_set_ctrl(0, 1, 1);
		_delay_ms(5);
		_lcd_set_ctrl(0, 1, 0);
		in = _lcd_get_data();
	} while (in & MASK_BF);

	return;
}
