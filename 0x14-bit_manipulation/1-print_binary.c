#include "main.h"

/**
 * print_binary - prints binary representation of number
 * @n: number represented in binary
 *
 */
void print_binary(unsigned long int n)
{
	int i = 0;
	int j;
	unsigned long int num;
	int binary[32];

	while (n > 0)
	{
		binary[i] = n % 2;
		n = n / 2;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		num = n >> j;
		if (num & 1)
		{
			_putchar('1');
			binary[i]++;
		}
		else
		{
			_putchar('0');
		}
	}
	_putchar('0');
}
