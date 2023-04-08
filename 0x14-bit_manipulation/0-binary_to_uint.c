#include "main.h"
#include <math.h>
#include <stddef.h>

/**
 * binary_to_uint - converts unsigned binary to decimal
 * @b: pointer
 *
 * Return: returns a decimal number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int digit_position = 0;
	int i;

	if (b == NULL)
	{
		return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		decimal = 2 * decimal + (b[i] - '0');
		digit_position++;
	}
	return (decimal);
}
