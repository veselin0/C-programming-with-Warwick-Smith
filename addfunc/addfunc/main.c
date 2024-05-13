#include <stdio.h>
#include "stdio_setup.h"
#define RN printf("\r\n")

float AddNum(float num1, float num2);

int main(void)
{
	float add_result;
	
	UartInit();

	printf("Adding two numbers: ");
	RN;
	add_result = AddNum(10.34, 100.56);
	printf("Result is %.2f", add_result);

	while(1) {
	}
}

float AddNum(float num1, float num2)
{
	float result;
	result = num1 + num2;
	return result;
}