#include "main.h"

/**
 * get_bit - will return the value of a bit of index in a decimal number
 * @n: decimal number
 * @index: bit index
 *
 * Return: bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
