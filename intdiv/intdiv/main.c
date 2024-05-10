#include <stdio.h>
#include "stdio_setup.h"

int main(void)
{
	UartInit();

	int result;
	
	result = 3 / 4;
	
	printf("3 divided by 4 equals %d", result);

	while(1) {
	}
}