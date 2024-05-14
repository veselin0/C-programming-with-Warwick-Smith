#include <stdio.h>
#include "stdio_setup.h"

#define PI 3.14159

float CircArea(float radius);

int main(void)
{
	float radius;
	UartInit();
	printf("Enter radius of circle: ");
	scanf("%f", &radius);
	printf("\r\nArea of circle is %.3f", CircArea(radius));
	

	while(1) {
	}
}

float CircArea(float radius)
{
	return PI * radius * radius;
}