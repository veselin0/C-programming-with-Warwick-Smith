#include <stdio.h>
#include "stdio_setup.h"

int main(void)
{
	int data = 123; /* an integer variable */
	int *ptr; /* a pointer variable (points to an integer) */
	
	UartInit();

	ptr = &data; /* get the address of data */
	printf("data contains %d\r\n", data);
	printf("data contains %d\r\n", *ptr);
	printf("Address of data is %d\r\n", &data);
	printf("Address of data is %d\r\n", ptr);
	printf("Address of ptr is %d\r\n", &ptr);

	while(1) {
	}
}