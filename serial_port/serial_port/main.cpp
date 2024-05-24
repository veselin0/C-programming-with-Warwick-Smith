/*
 * serial_port.cpp
 *
 * Created: 5/24/2024 5:07:21 PM
 * Author : Vesko
 */ 


#define F_CPU 16000000UL
//#define BAUD 9600
//#define BAUD_TOL 2

#include <avr/io.h>

void UartInit(void);
void UartTxByte(char data);
int UartRxByte(void);

int main(void)
{
   int rx_data;
   
    while (1) 
    {
		
		UartInit();
		UartTxByte('H');
		UartTxByte('i');
		while(1) {
			rx_data = UartRxByte();
			if (rx_data > -1) {
				UartTxByte(rx_data);
			}
		}
		
    }
}

void UartInit(void)
{
	// set UART0 baud rate
	UBRR0H = 0x00;
	UBRR0L = 0x67;
	// dedicate pins to USART0 for transmit and receive
	UCSR0B = 0x18;
	// 8-bit, 1 stop bit, no parity, asynchronous UART
	UCSR0C = 0x06;
}

void UartTxByte(char data)
{
	while(!(UCSR0A & 0x20)); // wait until ready to tx
	UDR0 = data; // transmit byte
}
int UartRxByte(void)
{
	int data;
	if (UCSR0A & 0x80) { // check if byte received
		data = UDR0; // get received byte
	}
	else {
		data = -1; // byte not received
	}
	return data;
}