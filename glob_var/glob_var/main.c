#include <stdio.h>
#include "stdio_setup.h"

int glob_count = 0;

void AddOne(void);
void Delay(void);

int main(void)
{
	UartInit();

	

	while(1) {
		
		printf("Count is %d\r\n", glob_count);
		AddOne();
		Delay();
		
	}
}

void AddOne(void)
{
	glob_count++;
}

void Delay(void)
{
	volatile long del = 1000000;
	while (del--);
}