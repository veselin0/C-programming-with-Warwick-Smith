#include <stdio.h>
#include "stdio_setup.h"

int main(void)
{
	
	char msg[4];
	
	UartInit();

	printf("%s\r\n", "Hello");
	msg[0] = 'B';
	msg[1] = 'y';
	msg[2] = 'e';
	msg[3] = 0;
	printf("%s\r\n", msg);

	while(1) {
	}
}