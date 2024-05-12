#include <stdio.h>
#include "stdio_setup.h"
//#include <util/delay.h>

int main(void)
{
	int water_level = 0;
	UartInit();
	printf("Pumping 10L of water...\r\n\r\n");
	while (water_level < 10) {
		water_level++;		
		printf("Progress: %d\r\n", water_level);
		//_delay_ms(10000);
	}
	printf("\r\nFinished.");

	while(1) {
	}
}