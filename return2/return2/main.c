#include <stdio.h>
#include "stdio_setup.h"

void retfunc(int *val1, int *val2, int input);

int main(void)
{
	
	int num1, num2;
	
	UartInit();

	retfunc (&num1, &num2, 34);
	printf("34 squared = %d\r\n", num1);
	printf("34 * 10 = %d\r\n", num2);

	while(1) {
	}
}

void retfunc(int *val1, int *val2, int input)
{
	*val1 = input * input;
	*val2 = input * 10;
}