#include <stdio.h>
#include "stdio_setup.h"

int main(void)
{
	int input;
	
	UartInit();
	
	printf("Enter an integer: ");
	scanf("%d", &input);
	printf("\r\n\r\nYou entered: %d", input);
	

	while(1) {
	}
}