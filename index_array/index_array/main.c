#include <stdio.h>
#include "stdio_setup.h"

int main(void)
{
	
	int num_list[5] = {34, 789, 327, 1000, 45};
	int index;
	
	UartInit();

	for (index = 0; index < 5; index++) {
		printf("Element %d = %d\r\n", index, num_list[index]);
	}

	while(1) {
	}
}