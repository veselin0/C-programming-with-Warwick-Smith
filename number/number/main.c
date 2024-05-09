#include <stdio.h>
#include "stdio_setup.h"

int main(void)
{
	UartInit();

	printf("Printing a number: 19\r\n");
	printf("Printing a number: %d", 19);

	while(1) {
	}
}