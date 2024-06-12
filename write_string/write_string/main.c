#include <avr/io.h>
#include <stdio.h>
#include "stdio_setup.h"

#define MAX_STR_LEN 35

int main(void)
{
	
	char in_str[MAX_STR_LEN];
	int index = 0;
	
	UartInit();

	printf("\r\nEnter a string, maximum length %d\r\n", MAX_STR_LEN - 1);
	while (index < (MAX_STR_LEN - 1)) {
		if (UCSR0A & 0x80) { /* character received? */
			in_str[index] = UDR0; /* put char into array */
			if (in_str[index] == '\r') { /* finished when Enter pressed */
				break;
			}
			printf("%c", in_str[index]); /* echo character on serial port */
			index++;
		}
	}
	in_str[index] = 0; /* NULL terminate the string */
	printf("\r\nYou entered the string: %s\r\n", in_str);

	while(1) {
	}
}