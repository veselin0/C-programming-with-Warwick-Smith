#include <stdio.h>
#include "stdio_setup.h"

int main(void)
{
	UartInit();

	char ch;
	
	printf("Type a character: ");
	scanf("%c", &ch);
	printf("\r\n");
	printf("You entered %c", ch);

	while(1) {
	}
}