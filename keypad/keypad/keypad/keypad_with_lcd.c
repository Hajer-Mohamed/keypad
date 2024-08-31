/*
 * keypad.c
 *
 * Created: 8/26/2024 4:26:37 PM
 *  Author: elsawah
 */ 


#include <avr/io.h>
#define F_CPU 8000000UL
#include <util/delay.h>
#include "keypad_driver.h"
#include "LCD.h"
int main(void)
{
	LCD_init();
	keypad_init();
	char x;
    while(1)
    {
		x=keypad_check_press();
		if(x!=0xff)
		{
			LCD_SEND_CHAR(x);
		}	
		else{
			
		}							
       _delay_ms(250);
    }
}