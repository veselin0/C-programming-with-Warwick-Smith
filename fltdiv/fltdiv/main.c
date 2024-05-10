#include <stdio.h>
#include "stdio_setup.h"

int main(void)
{
	UartInit();

	float result;
	
	result = 3.0 / 4.0;
	
	printf("the result of division of 3 by 4 is %f",result);

	while(1) {
	}
}