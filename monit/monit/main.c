#include <stdio.h>
#include "stdio_setup.h"

int main(void)
{
	char key = 0;
	int num = 50;
	UartInit();
	printf("Press u to increment number\r\n");
	printf("Press d to decrement number\r\n");
	printf("Press x to quit\r\n\r\n");
	while (key != 'x') {
		printf("Number is %d\r\n", num);
		scanf("%c", &key);
		printf("\r\n");
		if (key == 'u') {
			num = num + 1;
		}
		else if (key == 'd') {
			num = num - 1;
		}
	}
	printf("End of program.");

	

	while(1) {
	}
}