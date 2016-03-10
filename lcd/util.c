#include "defines.h"
#include "ctrl.h"
#include "data.h"
#include "util.h"

void _lcd_wait(void) {
	_lcd_set_data_mode(MODE_READ);

	while (_lcd_get_data() & MASK_BF);

	return;
}
