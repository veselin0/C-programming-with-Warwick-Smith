
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
#include <stdio.h>
#include "stdio_setup.h"

int main(void)
{
	
	unsigned char sw_state = 0;
	
	UartInit();

	DDRC &= ~(1 << 0x01); // port C pins 0 set as output
	PORTC |= (1 << 0x00); // port C pin 0 pull-up resistor

	while(1) {
		
		sw_state = (PINC & 0x01) ? 1 : 2;
		printf("Switch state: %d\r\n", sw_state);
		_delay_ms(500);
		
	}
}