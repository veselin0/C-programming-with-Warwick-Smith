#include <stdio.h>
#include "stdio_setup.h"

int main(void)
{
	signed char ch = -100;
	unsigned char uch = 0xff;
	short shrt = 20;
	unsigned short ushrt = 0xffff;
	int in = -10000;
	unsigned int uin = 0xffff;
	long lng = 100000001;
	unsigned long ulng = 0xffffffff;
	
	UartInit();

	printf("signed char = %hd\r\n", ch);
	printf("unsigned char = %hu\r\n", uch);
	printf("short = %hd\r\n", shrt);
	printf("unsigned short = %hu\r\n", ushrt);
	printf("int = %d\r\n", in);
	printf("unsigned int = %u\r\n", uin);
	printf("long = %ld\r\n", lng);
	printf("unsigned long = %lu\r\n", ulng);

	while(1) {
	}
}