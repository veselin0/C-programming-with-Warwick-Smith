#include <stdio.h>
#include "stdio_setup.h"
#define RN printf("\r\n")

void Message(char ch);

int main(void)
{
	char key;
	
	UartInit();

	printf("Press a key: ");
	RN;
	printf("Press x to exit: ");
	RN;
	while (key != 'x'){
		scanf("%c", &key);
		Message(key);
	}
	printf("End of program");

	while(1) {
	}
}

void Message(char ch)
{
	if (ch == 'x'){
		RN;
		printf("Bye!");
		RN;
	} else {
		RN;
		printf("You pressed %c", ch);
		RN;
	}
	
	
	
}