#include <stdio.h>
#include "stdio_setup.h"

int main(void)
{
	UartInit();

	printf("Hello, world!\r\n");

	while(1) {
	}
}