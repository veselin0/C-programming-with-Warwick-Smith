/* style2.c */
/* A program with indenting */
/*
The program displays a count to the screen.
Counts from 0 to 15, skipping 10
*/
#include <stdio.h>
#include "stdio_setup.h"
int main(void)
{
	int count = 0;
	UartInit();
	printf("Counting to 15, skipping 10:\r\n");
	while (count <= 15) {
		/* if the number is 10, skip over it */
		if (count != 10) {
			printf("Count is: %d\r\n", count);
		}
		count = count + 1;
	}
	printf("Finished.\r\n");
	while(1) {
	}
}