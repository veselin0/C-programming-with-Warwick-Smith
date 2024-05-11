#include <stdio.h>
#include "stdio_setup.h"

int main(void)
{
	int input;
	UartInit();
	printf("Enter 1 to start pump\r\n");
	printf("Enter 2 to start mixer\r\n");
	printf("Enter 3 to stop pump\r\n");
	printf("Enter 4 to stop mixer\r\n");
	scanf("%d", &input);
	if (input == 1) {
		printf("\r\nPump started.\r\n");
	}
	else if (input == 2) {
		printf("\r\nMixer started.\r\n");
	}
	else if (input == 3) {
		printf("\r\nPump stopped.\r\n");
	}
	else if (input == 4) {
		printf("\r\nMixer stopped.\r\n");
	}
	else {
		printf("\r\nInvalid option\r\n");
	}

	while(1) {
	}
}