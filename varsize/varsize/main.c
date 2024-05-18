#include <stdio.h>
#include "stdio_setup.h"

int main(void)
{
	UartInit();

	printf("On this micro controller,\r\n");
	printf("A char is %d byte, or %d bits\r\n",
	sizeof(char), sizeof(char) * 8);
	printf("A short is %d bytes or %d bits\r\n",
	sizeof(short), sizeof(short) * 8);
	printf("A int is %d bytes or %d bits\r\n",
	sizeof(int), sizeof(int) * 8);
	printf("A long is %d bytes or %d bits\r\n",
	sizeof(long), sizeof(long) * 8);

	while(1) {
	}
}