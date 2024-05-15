#include <stdio.h>
#include "stdio_setup.h"
#include "resistance.h"

#define RN printf("\r\n")

int main(void)
{
	float  res1, res2, res3;
	
	UartInit();

	printf("Enter resistance 1 value: ");
	scanf("%f", &res1);
	RN;
	printf("Enter resistance 2 value: ");
	scanf("%f", &res2);
	RN;
	printf("Enter resistance 3 value: ");
	scanf("%f", &res3);
	RN;
	printf("Result for parallel resistance calculation: %.2f", parallelRes(res1, res2));
	RN;
	printf("Result for serial resistance calculation: %.2f", serialRes(res1, res2, res3));
	RN;

	while(1) {
	}
}