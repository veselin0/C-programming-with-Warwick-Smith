#include <stdio.h>
#include "stdio_setup.h"
#define RN printf("\r\n")

void Delay(void);

int main(void)
{
	UartInit();

	

	while(1) {
		printf("ON");
		RN;
		Delay();
		printf("OFF");
		RN;
		Delay();
	}
}

void Delay(void)
{
	volatile long count = 1000000;
	/* waste time */
	while (count) {
		count--;
	}
}