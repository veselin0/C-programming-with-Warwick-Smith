#include <stdio.h>
#include "stdio_setup.h"
#include <float.h>

int main(void)
{
	float num_float = 0.0;
	double num_double = 0.0;
	long double num_lng_double = 0.0;
	
	UartInit();

	printf("float is %d bytes, precision %d, min %e, max %e\r\n",
	sizeof(num_float), FLT_DIG, FLT_MIN, FLT_MAX);
	printf("double is %d bytes\r\n", sizeof(num_double));
	printf("long double is %d bytes\r\n", sizeof(num_lng_double));

	while(1) {
	}
}