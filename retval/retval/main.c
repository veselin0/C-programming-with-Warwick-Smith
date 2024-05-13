#include <stdio.h>
#include "stdio_setup.h"
#define RN printf("\r\n")

int prompt(void);

int main(void)
{
	UartInit();

	int user_num = prompt();
	printf("You entered %d", user_num);
	RN;

	while(1) {
	}
}

int prompt(void)
{
	int num;
	printf("Please enter an integer number: ");
	RN;
	scanf("%d", &num);
	return num;
}