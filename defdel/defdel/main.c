#include <stdio.h>
#include "stdio_setup.h"
#define DLY_CNT 100000
#define RN printf("\r\n")

void Delay(volatile long count);

int main(void)
{
	UartInit();

	printf("\x1B[2J"); /* clear screen */
	printf("\x1B[?25l"); /* hide cursor */

	while(1) {
		
		printf("ON \r"); /* switch LED on */
		Delay(DLY_CNT); /* leave LED on for a while */
		printf("OFF\r"); /* switch LED off */
		Delay(DLY_CNT); /* leave LED off for a while */
		
	}
}

void Delay(volatile long count)
{
	/* waste time */
	while (count) {
		count--;
	}
}