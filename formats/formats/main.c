#include <stdio.h>
#include "stdio_setup.h"

int main(void)
{
	UartInit();

	/* characters and strings */
	printf("%s %c\r\n", "This is the letter", 't');
	/* integers */
	printf("Ints:%d, %i, %u\r\n", -1000, -123, 958);
	printf("Oct:%o, hex:%x, HEX:%X\r\n", 191, 191, 191);
	/* floating point numbers */
	printf("%f, %e, %E\r\n", 45.345, 45.345, 45.345);

	while(1) {
	}
}