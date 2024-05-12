#include <stdio.h>
#include "stdio_setup.h"

/* style1.c */
/* a program without any indenting */
/*
The program displays a count to the screen.
Counts from 0 to 15, skipping 10
*/
#include <stdio.h>
#include "stdio_setup.h"
int main(void)
{
	UartInit();
	int count = 0;
	printf("Counting to 15, skipping 10:\r\n");
	while (count <= 15) {
		/* if the number is 10, skip over it */
		if (count != 10) {
			printf("Count is: %d\r\n", count);
		}
		count++;
	}
	printf("Finished.\r\n");
	while(1) {
	}
}