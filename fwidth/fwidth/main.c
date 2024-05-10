#include <stdio.h>
#include "stdio_setup.h"

int main(void)
{
	UartInit();

	printf("Float with 2 trailing digits: %.2f", 123.123456789);
	printf("\r\n");
	printf("Float with 3 trailing digits: %.3f", 123.123456789);

	while(1) {
	}
}