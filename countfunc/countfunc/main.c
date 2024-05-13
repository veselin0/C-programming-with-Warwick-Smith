#include <stdio.h>
#include "stdio_setup.h"
#define RN printf("\r\n")

void Count(void); /* function prototype */
int main(void)
{
	UartInit();
	printf("Counting to 5...");
	RN;
	Count(); /* call the function */
	printf("Counting to 5 again...");
	RN;
	Count(); /* call the function */
	while(1) {
	}
}


/* the function */
void Count(void)
{
	int count = 1; /* count from 1 */
	while (count <= 5) { /* count to 5 */
		printf("%d", count); /* display the count */
		RN;
		count++; /* increment the count */
	}
}