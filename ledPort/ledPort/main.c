/*
 * ledPort.c
 *
 * Created: 5/19/2024 4:26:50 PM
 * Author : Vesko
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    unsigned char port_val = 0; // value to write to port
    //DDRC = 0xFF; // all port C pins set as outputs
	DDRC = 0b111111;
	
    while (1) 
    {
		
		PORTC = port_val; // write value to port
		port_val++; // increment value
		_delay_ms(1000); // 1 second delay
		
    }
}

