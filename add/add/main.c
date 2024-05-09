#include <stdio.h>
#include "stdio_setup.h"

int main(void)
{
	UartInit();
	int myvar = 3;
	int yourvar = 4;
	int result = myvar + yourvar;
	
	printf("The result of myvar + yourvar is: %d", result);
	

	while(1) {
	}
}