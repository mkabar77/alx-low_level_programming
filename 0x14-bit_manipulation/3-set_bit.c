#include "main.h"

/**
 * set_bit - sets a bit of a given to 1
 * @n: pointer to the number
 * @index: bit index to set to 1
 *
 * Return: return 1 if success, -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int num = 1;

	if (index > 63)
		return (-1);

	*n = ((num << index) | *n);
	return (num);
}
