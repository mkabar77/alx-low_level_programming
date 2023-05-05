#include "main.h"
#include <math.h>
#include <string.h>

/**
 * binary_to_uint - it converts binary number to unsigned int
 * @b: string of binary numbers
 *
 * Return: returns binary number or decimal.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	int i;

	for (i = 0; b[i]; i++)
	{
		if (b[i] == 'i')
		{
			dec += 2 * dec + (b[i] - i);
		}
	}
	return (dec);
}
