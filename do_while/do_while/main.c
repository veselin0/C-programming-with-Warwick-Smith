#include <stdio.h>
#include "stdio_setup.h"

int main(void)
{
	
	int count = 0;
	
	UartInit();

	do {
		count++;
		printf("Count: %d\r\n", count);
	} while (count <= 10);

	while(1) {
	}
}