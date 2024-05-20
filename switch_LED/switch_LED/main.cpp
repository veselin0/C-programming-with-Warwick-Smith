/*
 * switch_LED.cpp
 *
 * Created: 5/20/2024 3:35:48 PM
 * Author : Vesko
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

#define BTN PC0
#define LED PC5


int main(void)
{
	DDRC |= (1 << LED); // PC5 output
	//PORTC &= ~(1 << LED);
	PORTC |= (1 << BTN); // pull-up resistor on PC0
	while(1) {
		if (!(PINC & (1 << BTN))) { // is the switch on PC0 closed?
			PORTC |= (1 << LED); // switch the LED on
			_delay_ms(20); // Debounce delay
		}
		else {
				PORTC &= ~(1 << LED); // switch the LED off
		}
	}
}