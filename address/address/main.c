#include <stdio.h>
#include "stdio_setup.h"

int main(void)
{
	int var = 100;
	
	UartInit();

	printf("The variable var contains the value %d\r\n", var);
	printf("The address of var is %d = 0x%X", &var, &var);

	while(1) {
	}
}