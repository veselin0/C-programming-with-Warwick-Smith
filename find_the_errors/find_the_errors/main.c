#include <stdio.h>
#include "stdio_setup.h"

int main(void)
{
	UartInit();

	printf("I can use two printf()\r\n");
	printf("statements in my program.");

	while(1) {
	}
}