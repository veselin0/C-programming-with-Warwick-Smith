/*
 * port_write_uno.cpp
 *
 * Created: 5/19/2024 3:54:46 PM
 * Author : Vesko
 */ 

#include <avr/io.h>
//#include <util/delay.h>

void Delay(void);

int main(void)
{
    
	//DDRB = 0x20; // set bit 5 of DDR register which makes PB5 an output
	DDRB = 0b00100000;
	
	
    while (1) 
    {
		
		PORTB = 0x20; // switch LED on
		Delay();
		//_delay_ms(1000);
		PORTB = 0x00; // switch LED off
		Delay();
		//_delay_ms(1000);
		
    }
}

void Delay(void)
{
	volatile unsigned long count = 100000;
	while (count--);
}

