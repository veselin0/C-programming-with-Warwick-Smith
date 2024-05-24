#include <stdio.h>
#include "stdio_setup.h"

int main(void)
{
	int level;
	UartInit();
	for (level = 0; level <= 10; level++) {
		printf("Level = %d liters\r\n", level);
	}
	printf("Finished");
	

	while(1) {
	}
}