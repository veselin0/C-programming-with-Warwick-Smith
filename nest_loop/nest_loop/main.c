#include <stdio.h>
#include "stdio_setup.h"

int main(void)
{
	int count;
	char ch;
	
	UartInit();

	for (count = 1; count <= 3; count++) {
		for (ch = 'A'; ch < 'E'; ch++) {
			printf("%d, %c\r\n", count, ch);
		}
		printf("----\r\n");
	}

	while(1) {
	}
}