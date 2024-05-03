/*
 * hello.c
 *
 * Created: 5/3/2024 4:43:59 PM
 * Author : Vesko
 */ 

//#include <avr/io.h>
#include <stdio.h>
#include "stdio_setup.h"

int main(void)
{
   UartInit();
   
   printf("Hello, world!\r\n");
   
    while (1) 
    {
    }
}

