#include <stdio.h>
#include "stdio_setup.h"

int main(void)
{
	int temper;
	UartInit();
	printf("Enter a temperature (0 to 100): ");
	scanf("%d", &temper);
	if (temper >= 30) {
		printf("\r\n\r\nSwitch the heater OFF");
	}

	while(1) {
	}
}