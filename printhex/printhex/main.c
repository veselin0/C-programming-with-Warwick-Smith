#include <stdio.h>
#include "stdio_setup.h"

int main(void)
{
	UartInit();

	printf("%x", 0xA914); // print a hex number
	printf("\r\n0x%x", 0xA914); // print same number with 0x
	printf("\r\n0x%X", 0xA914); // hex number in capitals

	while(1) {
	}
}