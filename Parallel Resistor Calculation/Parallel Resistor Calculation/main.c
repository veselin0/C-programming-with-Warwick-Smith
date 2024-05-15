#include <stdio.h>
#include "stdio_setup.h"
#define RN printf("\r\n")

float resultingRes(float res1, float res2);

int main(void)
{
	float  res1, res2;
	
	UartInit();
	
	printf("Enter resistance 1 value: ");
	scanf("%f", &res1);
	RN;
	printf("Enter resistance 2 value: ");
	scanf("%f", &res2);
	RN;
	printf("Result of calculation: %.2f", resultingRes(res1, res2));
	RN;

	while(1) {
	}
}

float resultingRes( float res1, float res2){
	float result = (res1 * res2) / (res1 + res2);
	return result;
}