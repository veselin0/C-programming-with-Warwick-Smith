#include <stdio.h>
#include "stdio_setup.h"

int main(void)
{
	
	char str1[] = { 'F', 'i', 'r', 's', 't', '\r', '\n', '\0' };
	char str2[] = "Second\r\n";
	
	UartInit();

	printf("%s", str1);
	printf("%s", str2);

	while(1) {
	}
}