#include <stdio.h>
#include "stdio_setup.h"

int main(void)
{
	UartInit();

	/* printing quotes in a string */
	printf("I said, %cHello%c\r\n", '"', '"');
	printf("I said, \"Hello\"\r\n");
	/* using hex number escape sequences */
	printf("%c%c%c\r\n", 'A', 'B', 'C');
	printf("\x41\x42\x43\r\n");
	/* using hex numbers to print graphical characters */
	printf("\xC9\xCD\xCD\xCD\xCD\xCD\xBB\r\n");
	printf("\xBA AVR \xBA\r\n");
	printf("\xC8\xCD\xCD\xCD\xCD\xCD\xBC\r\n");

	while(1) {
	}
}