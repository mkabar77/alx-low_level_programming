#include <stdio.h>
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
	int binary[32];

	while (n > 0)
	{
		binary[i] = n % 2;
		n = n / 2;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		putchar(binary[j] + '0');
	}
}
