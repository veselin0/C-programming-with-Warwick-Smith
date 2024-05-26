#include <avr/io.h>
#include <stdio.h>
#include "stdio_setup.h"

int main(void)
{
	
	char rx_data;
	
	UartInit();

	

	while(1) {
		
		if (UCSR0A & 0x80) { // serial data byte received
			rx_data = UDR0; // get the serial data byte
			if (rx_data == '1') {
				printf("Menu item 1 selected\r\n");
			}
			else if (rx_data == '2') {
				printf("Menu item 2 selected\r\n");
			}
			else {
				printf("%c invalid selection\r\n", rx_data);
			}
		}
		
	}
}