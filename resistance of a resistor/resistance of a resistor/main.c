#include <stdio.h>
#include "stdio_setup.h"

int main(void)
{
	UartInit();

	float I, R, U;
	
	printf("Enter the value for the tension in volts: ");
	scanf("%f", &U);
	printf("\r\n");
	printf("Enter the value for the current in amperes: ");
	scanf("%f", &I);
	printf("\r\n");
	printf("\r\n");
	R = U / I;
	printf("The resistance in ohms is: %.2f", R);
	
	while(1) {
	}
}