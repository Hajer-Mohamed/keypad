/*
 * internal_pullup.c
 *
 * Created: 5/23/2024 12:22:38 PM
 *  Author: elsawah
 */ 


#include <avr/io.h>
#include "LED.h"
#include "button.h"
#include "DIO.h"
int main(void)
{
	DIO_internall_pullup('D',3,1);
	button_init('D',3);
	led_init('D',1); 
	unsigned char z;
    while(1)
    {
		z=button_read('D',3);
		if(z==0)
		{
			led_on('D',3);	
		}		
		else{
			led_off('D',3);
		}			
        //TODO:: Please write your application code 
    }
}