#include "main.h"

/**
 * clear_bit - set 0 as the value of a given bit
 * @n: a pointer
 * @index: index of the target bit
 *
 * Return: 1 if success, -1 if failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int num = 1;

	if (index > 63)
		return (-1);

	*n = (~(num << index) & *n);
	return (num);
}
