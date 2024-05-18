#include <stdio.h>
#include "stdio_setup.h"

int main(void)
{
	int LEDs = 0x88; /* a variable representing LEDs */
	int *ptr; /* a pointer */
	
	UartInit();

	ptr = &LEDs; /* get the address of the LEDs */
	printf("LEDS are set to %x\r\n", *ptr);
	*ptr = 0x44;
	printf("LEDS are set to %x", *ptr);

	while(1) {
	}
}