#include <stdio.h>
#include "stdio_setup.h"

int main(void)
{
	
	int count = 0;
	
	UartInit();

	while (count < 10) {
		count++;
		if (count == 5)
		break;
		printf("Count 1 = %d\r\n", count);
	}
	count = 0;
	while (count < 10) {
		count++;
		if (count == 5)
		continue;
		printf("Count 2 = %d\r\n", count);
	}

	while(1) {
	}
}