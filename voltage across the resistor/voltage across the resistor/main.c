#include <stdio.h>
#include "stdio_setup.h"

int main(void)
{
	UartInit();

	float I, R, U;
	
	printf("Enter value of current in amps: ");
	scanf("%f", &I);
	printf("\r\n");
	printf("Enter value of resistance in ohms: ");
	scanf("%f", &R);
	printf("\r\n");
	U = I * R;
	printf("\r\n");
	printf("The tension is: %.2f", U);
	
	while(1) {
	}
}