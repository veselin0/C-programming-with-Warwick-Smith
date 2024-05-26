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
				case '1':
				printf("Menu item 1.\r\n");
				break;
				case '2':
				printf("Menu item 2.\r\n");
				break;
				case '3':
				printf("Menu item 3.\r\n");
				break;
				case '4':
				printf("Menu item 4.\r\n");
				break;
				default:
				printf("Invalid selection.\r\n");
				break;
			}
		}
		
	}
}