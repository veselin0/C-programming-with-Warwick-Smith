#include <stdio.h>
#include "stdio_setup.h"

int main(void)
{
	int input;
	UartInit();
	printf("Enter 1 to start pump\r\n");
	printf("Enter 2 to start mixer\r\n");
	scanf("%d", &input);
	if (input == 1) {
		printf("\r\nPump started.\r\n");
	}
	if (input == 2) {
		printf("\r\nMixer started.\r\n");
	}

	

	while(1) {
	}
}