#include <stdio.h>
#include "stdio_setup.h"

int main(void)
{
	
	char processor[] = "AVR";
	int i;
	
	UartInit();

	printf("Address of array is %u\r\n", (unsigned int)processor);
	for (i = 0; i < (sizeof(processor) - 1); i++) {
		printf("address = %u, data = %d (%c)\r\n",
		(unsigned int)&processor[i], processor[i], processor[i]);
	}

	while(1) {
	}
}