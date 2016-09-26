/*
 * Program: lcd_AutoWrap.c
 * Author:  D. O. Corlett
 *
 * Displays a long string of multiple words
 * to the LCD without splitting any words
 * between the lines of the LCD.
 */

#include <util/delay.h>
//#include <util/delay_basic.h>
#include "lcd.h"

/*
static inline void delay_us(unsigned int microsecs)
{
	_delay_loop_2(4*microsecs);
}


void my_lcd_init()
{
#define LCD_EN 0x08


}
*/

int main(void)
{
	// Initialise LCD
    lcd_init(LCD_CTRL_PORT_C | LCD_DATA_PORT_D);


    while (1)
    {
    	lcd_clear();
    	lcd_display("HELLO WORLD!");
    	delay_ms(1000);
    }

    return 0;
}
