#include "header.h"
void main()
{
	

		lcd_init();
		lcd_cmd(0x80);
		lcd_integer(-1500);
		lcd_cmd(0xC0);
		lcd_float(-12.19);
	
// 		lcd_float(12.52);
// 		lcd_float(-12.52);
// 		lcd_float(12.00);
// 		lcd_float(-12.00);
// 		lcd_float(0);
		while(1);

}
