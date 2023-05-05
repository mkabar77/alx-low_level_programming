#include "main.h"
#include <stdio.h>

/**
 * clear_bit - change the value of a given bit to 0
 * @n: a pointer
 * @index: bit index
 *
 * Return: Successful 1, else -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n &= ~(1UL << index);
	return (1);
}
