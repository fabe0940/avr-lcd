#ifndef _LCD_CTRL_H_
#define _LCD_CTRL_H_

#include <inttypes.h>

void _lcd_set_ctrl_mode(uint8_t mode);
void _lcd_set_data_mode(uint8_t mode);
void _lcd_set_ctrl_e(uint8_t val);
void _lcd_set_ctrl_rs(uint8_t val);
void _lcd_set_ctrl_rw(uint8_t val);

#endif /* _LCD_CTRL_H_ */
