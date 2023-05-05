#include "main.h"
#include <stdio.h>

/**
 * set_bit - place a bit at an index to 1
 * @n: points a number to change
 * @index: bit index set to 1
 *
 * Return: 1 when successful, otherwise -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n |= (1UL << index);
	return (1);
}
