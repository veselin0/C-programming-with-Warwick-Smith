#include <stdio.h>
#include "stdio_setup.h"

int main(void)
{
	
	int i;
	UartInit();
	for (i = 10; i > 0; i--) {
		printf("i = %d \r\n", i);
	}
	printf("Finished");

	while(1) {
	}
}