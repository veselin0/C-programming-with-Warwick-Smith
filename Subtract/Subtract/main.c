#include <stdio.h>
#include "stdio_setup.h"

int main(void)
{
	int var1, var2, res;
	char key;
	
	UartInit();
	
	printf("Press n to do the next subtraction");
	printf("\r\n");
	printf("Press x to exit program");
	printf("\r\n");
	
	while ( key != 'x')
	{
		scanf("%c", &key);
		printf("\r\n");
		if (key == 'n')
		
		{
			printf("Enter an integer: ");
			scanf("%d", &var1);
			printf("\r\n");
			printf("Enter another integer: ");
			scanf("%d", &var2);
			printf("\r\n");
			res = var1 - var2;
			printf("The result of the subtraction is: %d", res);
			scanf("%c", &key);
			printf("\r\n");
		}
	}
	printf("\r\nEnd of program.");

	while(1) {
	}
}