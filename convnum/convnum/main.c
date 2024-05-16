#include <stdio.h>
#include "stdio_setup.h"

void menu(void);

int main(void)
{
	char menu_item = 0;
	int num;
	
	UartInit();

	

	while(1) {
		menu(); // display the menu
		scanf("%c", &menu_item); // get key press
		if (menu_item == 'h') {
			printf("\r\nEnter hex num: ");
			scanf("%x", &num);
			printf("\r\nNumber in Dec is %d\r\n", num);
			scanf("%c", &menu_item); // remove incoming carriage return
		}
		else if (menu_item == 'd') {
			printf("\r\nEnter Dec num: ");
			scanf("%d", &num);
			printf("\r\nNumber in hex is %X\r\n", num);
			scanf("%c", &menu_item);
		}
		else {
			printf("\r\nInvalid menu selection...\r\n");
		}
	}
}

void menu(void){
	printf("\r\nPress h to convert hex to Dec.");
	printf("\r\nPress d to convert Dec to hex. ");
}