#include <stdio.h>
#include "stdio_setup.h"

void func1(int num);
void func2(int *pnum);

int main(void)
{
	
	int number = 123;
	
	UartInit();

	printf("Number is %d\r\n", number);
	func1(number);
	printf("Number is %d\r\n", number);
	func2(&number);
	printf("Number is %d\r\n", number);

	while(1) {
	}
}

void func1(int num)
{
	num = 567;
	printf("Func1 num %d\r\n", num);
}
void func2(int *pnum)
{
	*pnum = 987;
	printf("Func2 pnum %d\r\n", *pnum);
}