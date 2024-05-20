#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
#include <stdio.h>
#include "stdio_setup.h"

#define BUTTON_PIN PC0


int main(void)
{
	
	DDRC &= ~(1 << BUTTON_PIN);
	PORTC |= (1 << BUTTON_PIN); // set pull-up resistor
	
	UartInit();

	

	while(1) {
		
		printf("PORT C: 0x%02x\r\n", PINC); // print the port state
		_delay_ms(200);
		
	}
}