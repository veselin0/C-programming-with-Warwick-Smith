#include <stdio.h>
#include "stdio_setup.h"
#define RN printf("\r\n")

void Count(int num);

int main(void)
{
	
	UartInit();

	printf("Counting to 2...");
	RN;
	Count(2); /* count to 2 */
	printf("Counting to 10...");
	RN;
	Count(10); /* count to 10 */

	while(1) {
	}
}

void Count(int num)
{
	int count = 1; /* count from 1 */
	while ( count <= num) { /* count to num */
		printf("%d", count); /* display the count */
		RN;
		count++; /* increment the count */
	}
}