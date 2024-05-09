#include <stdio.h>
#include "stdio_setup.h"

int main(void)
{
	UartInit();
	int myvar = 8;
	
	printf("The value of the variable myvar is: %d", myvar);

	while(1) {
	}
}