/*
 * LED_seq.c
 *
 * Created: 6/12/2024 2:39:12 PM
 * Author : Vesko
 */ 

#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
    
	unsigned char seq[] = {0b0001, 0b0010, 0b0100, 0b1000, 0b0110,
	0b1001, 0b1111, 0b0101, 0b1010, 0b0101, 0b1010};
	int ind;
	DDRC = 0b1111;
	
    while (1) 
    {
		
		for (ind = 0; ind < sizeof(seq); ind++) {
			PORTC = seq[ind];
			_delay_ms(1000);
		}
		
    }
}

