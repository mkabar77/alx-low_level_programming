#include "main.h"
#include <stdio.h>

/**
 * flip_bits - count the number of bits that will change
 * from one number to another
 * @n: the first number
 * @m: the second number
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int diff = n ^ m;

	while (diff != 0)
	{
		count += diff & 1;
		diff >>= 1;
	}
	return (count);
}
