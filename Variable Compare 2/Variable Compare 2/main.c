#include <stdio.h>
#include "stdio_setup.h"

int main(void)
{
	int var1, var2;
	
	UartInit();

	printf("Enter an integer: ");
	printf("\r\n");
	scanf("%d", &var1);
	printf("\r\n");
	printf("Enter another integer: ");
	printf("\r\n");
	scanf("%d", &var2);
	printf("\r\n");
	if (var1 > var2) printf("First integer is bigger.\r\n");
	else if (var2 > var1) printf("Second integer is bigger.\r\n");
	else printf("Integers are equal.\r\n");

	

	while(1) {
	}
}