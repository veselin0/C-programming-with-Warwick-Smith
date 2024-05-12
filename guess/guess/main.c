#include <stdio.h>
#include "stdio_setup.h"

int main(void)
{
	int guess;
	UartInit();
	printf("Try to guess my number:\r\n\r\n");
	printf("Enter a number between 1 and 100: ");
	scanf("%d", &guess);
	while (guess != 74) {
		if (guess > 74) {
			printf("\r\nNumber is Lower.\r\n");
		}
		else {
			printf("\r\nNumber is Higher.\r\n");
		}
		printf("Enter a number between 1 and 100: ");
		scanf("%d", &guess);
	}
	printf("\r\nYou guessed the number!\r\n");

	

	while(1) {
	}
}