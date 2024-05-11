#include <stdio.h>
#include "stdio_setup.h"

int main(void)
{
	int temper;
	UartInit();
	printf("\nSet initial temperature...\r\n\r\n");
	scanf("%d", &temper);
	printf("Is the temperature less than 23? %d\r\n", temper < 23);
	printf("Is the temperature more than 23? %d\r\n", temper > 23);
	printf("\nSet higher temperature...\r\n\r\n");
	scanf("%d", &temper);
	printf("Is the temperature less than 23? %d\r\n", temper < 23);
	printf("Is the temperature more than 23? %d\r\n", temper > 23);
	

	while(1) {
	}
}