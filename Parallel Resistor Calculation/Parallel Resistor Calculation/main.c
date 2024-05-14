#include <stdio.h>
#include "stdio_setup.h"
#define RN printf("\r\n")

int main(void)
{
	
	
	float resultingR(float R1, float R2);
	
	UartInit();
	//float  R1, R2;
	float res = resultingR(10, 20);
	
	//printf("Enter resistance 1 value: ");
	//scanf("%f", &R1);
	//RN;
	//printf("Enter resistance 2 value: ");
	//scanf("%f", &R2);
	//RN;
	printf("Result of calculation: %.2f", res);
	RN;

	while(1) {
	}
	
	float resultingR( float R1, float R2){
		return (R1 * R2) / (R1 + R2);
	}
}