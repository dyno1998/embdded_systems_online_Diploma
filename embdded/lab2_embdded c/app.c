#include"uart.h"
unsigned char string_buffer[100]="learn in Depth Mohanad";
void main(void)
{
	uart_Send_String(string_buffer);
}