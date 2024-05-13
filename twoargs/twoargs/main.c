#include <stdio.h>
#include "stdio_setup.h"
#define RN printf("\r\n")

void Count(int num, int skip);

int main(void)
{
	UartInit();

	printf("Counting to 5, skipping 3...");
	RN;
	Count(5, 3); /* count to 5, skip 3 */
	printf("Counting to 12, skipping 10...");
	RN;
	Count(12, 10); /* count to 12, skip 10 */

	while(1) {
	}
}

void Count(int num, int skip)
{
	int count = 1; /* count from 1 */
	while ( count <= num) { /* count to num */
		if (count != skip) {
			printf("%d", count); /* display the count */
			RN;
		}
		count++; /* increment the count */
	}
}