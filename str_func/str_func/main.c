#include <stdio.h>
#include "stdio_setup.h"
#include <string.h>

int main(void)
{
	
	char str1[10] = "abc";
	char str2[] = "def";
	
	UartInit();

	printf("The length of str1 is %d\r\n", strlen(str1));
	printf("Comparing str1 & str2: %d\r\n", strcmp(str1, str2));
	printf("Comparing str2 & str1: %d\r\n", strcmp(str2, str1));
	strcat(str1, str2);
	printf("str1 is now: %s\r\n", str1);
	strcpy(str1, str2);
	printf("str1 is now: %s\r\n", str1);
	printf("Comparing str1 & str2: %d\r\n", strcmp(str1, str2));

	while(1) {
	}
}