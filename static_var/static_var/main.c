#define F_CPU 16000000UL
#include <stdio.h>
#include "stdio_setup.h"
#include <util/delay.h>

int Count(void);
int StaticCount(void);

int main(void)
{
	UartInit();

	

	while(1) {
		
		printf("count %d, static count %d\r\n", Count(), StaticCount());
		_delay_ms(1000);
		
	}
}

int Count(void)
{
	int count = 0;
	return count++;
}

int StaticCount(void)
{
	static int count = 0;
	return count++;
}