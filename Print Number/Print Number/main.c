#include <stdio.h>
#include "stdio_setup.h"

int main(void)
{
	int num = 0x5f;
	
	UartInit();


	printf("Print the number as:  character %c hexadecimal 0x%x and decimal %d \r\n", num, num, num);

	while(1) {
	}
}