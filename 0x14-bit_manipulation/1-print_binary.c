#include "main.h"
#include <stdio.h>

/**
 * print_binary - it prints the binary value of a decimal number
 * @n: decimal number
 *
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	putchar((n & 1) ? '1' : '0');
}
