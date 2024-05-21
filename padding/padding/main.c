#include <stdio.h>
#include "stdio_setup.h"

int main(void)
{
	UartInit();

	// a 3 bit hex number padded to 8 bits
	printf("0x%X\r\n", 0x5); // unpadded
	printf("0x%2X\r\n", 0x5); // pad with spaces
	printf("0x%02X\r\n\r\n", 0x5); // pad with 0
	// a 3 bit hex number padded to 16 bits
	printf("0x%4X\r\n", 0x5); // pad with spaces
	printf("0x%04X\r\n\r\n", 0x5); // pad with 0
	// decimal number padded
	printf("%d\r\n", 123); // unpadded
	printf("%5d\r\n", 123); // padded with spaces
	printf("%05d\r\n\r\n", 123); // padded with 0
	// float padded
	printf("%f\r\n", 34.218); // unpadded
	printf("%10f\r\n", 34.218); // padded with spaces
	printf("%10.4f\r\n", 34.218); // pad = space, 4 nums after .
	printf("%010.4f\r\n\r\n", 34.218); // pad = 0, 4 nums after .

	while(1) {
	}
}