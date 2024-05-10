#include <stdio.h>
#include "stdio_setup.h"

int main(void)
{
	UartInit();

	float U, I, R;
	
	printf("Enter U in volts: ");
	printf("\r\n");
	scanf("%f", &U);
	printf("Enter R in ohms: ");
	scanf("%f", &R);
	I = U / R;
	printf("Current in amps is: %f", I);
	
	
	
	

	while(1) {
	}
}