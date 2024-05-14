/* splitprog project main.c file */
#include <stdio.h>
#include "stdio_setup.h"
#include "splitfunc.h"

/* prototype for function in splitfunc.c */
//int FindBiggest(int num1, int num2);

int main(void)
{
	int first, second;
	UartInit();
	printf("Program determines which number is bigger.\r\n");
	printf("Enter an integer number: ");
	scanf("%d", &first);
	printf("\r\nEnter a 2nd integer number: ");
	scanf("%d", &second);
	printf("\r\n%d is bigger", FindBiggest(first, second));
	while(1) {
	}
}