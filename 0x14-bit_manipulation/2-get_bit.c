#include "main.h"

/**
 * get_bit - returns a bit of index in decimal number
 * @n: required number
 * @index: bit index
 *
 * Return: return bit value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	return ((n >> index) & 1);
}
