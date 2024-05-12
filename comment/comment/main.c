#include <stdio.h>
#include "stdio_setup.h"

/* C style comment */
/*
Multi line C
style comment
*/
// C++ style comment
// Let's see how to comment a program:
/*------------------------------------------------
Project name: comment
File name: main.c
This program converts kilometres to miles
------------------------------------------------*/

int main(void)
{
	float kilos; /* stores distance in kilometers */
	float miles; /* stores distance in miles */
	UartInit();
	/* prompt the user for distance in kilometers */
	printf("\r\nEnter distance in kilometers: ");
	scanf("%f", &kilos);
	/* convert kilometers to miles */
	miles = kilos * 0.62137;
	/* show the user the result of the calculation */
	printf("\r\nDistance is %.3f in miles.\r\n", miles);
	

	while(1) {
	}
}