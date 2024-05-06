#include <stdio.h>
#include "stdio_setup.h"

int main(void)
{
	UartInit();

	printf("Hello, world!");
	printf("\r\n");
	printf("Newline");
	printf("\r\n");


	while(1) {
	}
}