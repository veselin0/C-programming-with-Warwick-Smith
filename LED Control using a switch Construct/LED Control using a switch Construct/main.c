#include <avr/io.h>
#include <stdio.h>
#include "stdio_setup.h"

int main(void)
{
	
	char rx_data;
	
	UartInit();

	

	while(1) {
		
		if (UCSR0A & 0x80) {
			rx_data = UDR0;
			switch (rx_data) {
				case 'a':
				printf("switch the LED on\r\n");
				break;
				case 'b':
				printf("switch the LED off\r\n");
				break;
				default:
				printf("Invalid selection.\r\n");
				break;
			}
		}
		
	}
}