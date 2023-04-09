#include "main.h"

/**
 * print_binary - prints binary representation of number
 * @n: number represented in binary
 *
 */

void print_binary(unsigned long int n)
{
	unsigned long int binary[32];
	int index = 0;
	int i = 0;

	while (n > 0)
	{
		binary[index] = n % 2;
		n = n / 2;
		index++;
	}

	for (i = index - 1; i >= 0; i--)
	{
		_putchar('1');
		binary[index] = binary[i] + '0';
	}
	_putchar ('0');
}
