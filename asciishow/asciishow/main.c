#include <stdio.h>
#include "stdio_setup.h"

int main(void)
{
	char chr;
	
	UartInit();

	chr = 'T';
	printf("Character:%c Hex: 0x%x Dec: %d\r\n", chr, chr, chr);
	chr = 'i';
	printf("Character:%c Hex: 0x%x Dec: %d\r\n", chr, chr, chr);
	chr = '8';
	printf("Character:%c Hex: 0x%x Dec: %d\r\n", chr, chr, chr);

	while(1) {
	}
}