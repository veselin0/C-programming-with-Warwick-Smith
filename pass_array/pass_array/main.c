#include <stdio.h>
#include "stdio_setup.h"

void PrintCharArray(char str[]);
void PrintIntArray(int *ptr, int length);

int main(void)
{
	
	char text[] = "Start pump\r\n";
	int samples[] = {115, 2000, 95, 9 };
	
	UartInit();

	PrintCharArray(text);
	PrintIntArray(samples, sizeof(samples) / 2);

	while(1) {
	}
}

void PrintCharArray(char str[])
{
	int i = 0;
	while (str[i] != 0) {
		printf("%c", str[i]);
		i++;
	}
	while (*str != 0) {
		printf("%c", *str);
		str++;
	}
}
void PrintIntArray(int *ptr, int length)
{
	int i;
	for (i = 0; i < length; i++) {
		printf("%d: %4d\r\n", i, ptr[i]);
	}
	for (i = 0; i < length; i++) {
		printf("%d: %4d\r\n", i, *ptr);
		ptr++;
	}
}