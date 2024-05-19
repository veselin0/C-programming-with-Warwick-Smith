#include <stdio.h>
#include "stdio_setup.h"

int main(void)
{
	int num = 0;
	
	UartInit();

	printf("num is %d\r\n", num); // num is 0
	printf("Post-increment: %d\r\n", num++); // num is 0
	printf("After increment: %d\r\n", num); // num is 1
	printf("Pre-increment: %d\r\n", ++num); // num is 2
	printf("After increment: %d\r\n", num); // num is 2

	while(1) {
	}
}