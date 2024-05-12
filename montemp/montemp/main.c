#include <stdio.h>
#include "stdio_setup.h"
#include <stdbool.h>

int main(void)
{
	int temper = 30;
	char key = 0;
	UartInit();
	printf("Press u to increase the temperature\r\n");
	printf("Press d to decrease the temperature\r\n");
	printf("Press x to quit the program\r\n");
	printf("Temperature is %d deg. C ", temper);
	while (key != 'x') {
		scanf("%c", &key);
		if (key == 'u') {
			temper = temper + 1;
		}
		else if (key == 'd') {
			temper = temper - 1;
		}
		printf("\r\nTemperature is %d deg. C ", temper);
		if (temper > 35) {
			printf("Switch element OFF. ");
		}
		else if (temper < 30) {
			printf("Switch element ON. ");
		}
		else {
			printf("Temperature is correct. ");
		}
	}
	printf("\r\nEnd of program.");

	

	while(1) {
	}
}