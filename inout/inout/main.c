#include <stdio.h>
#include "stdio_setup.h"

int main(void)
{
	UartInit();
	int input, result;
	
	printf("Enter a number to be added to 5: ");
	scanf("%d", &input);
	result = input + 5;
	printf("\r\n%d + 5 = %d", input, result);

	

	while(1) {
	}
}