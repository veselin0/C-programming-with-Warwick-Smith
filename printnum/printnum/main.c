#include <stdio.h>
#include "stdio_setup.h"

int main(void)
{
	int the_num;
	UartInit();
	the_num = 498;
	printf("The number is %d in Dec\r\n", the_num);
	printf("The number is %X in hex\r\n", the_num);
	// change the number
	the_num = 0x3A9C;
	printf("\r\nThe number is %d in Dec\r\n", the_num);
	printf("The number is %X in hex\r\n", the_num);

	

	while(1) {
	}
}