#include "main.h"

/**
 * flip_bits - flip set number of bits
 * @n: first number
 * @m: second number
 *
 * Return: number of bits changed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	int count = 0;

	while (diff)
	{
		count += diff & 1;
		diff >>= 1;
	}
	return (count);
}
