#include "main.h"
#include <math.h>

/**
 * binary_to_uint - converts unsigned binary to decimal
 * @b: pointer
 * @pow: power of.
 *
 * Return: returns a decimal number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int digit_position = 0;

	if (b == NULL)
	{
		return (0);
	}

	for (int i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
	}
	for (int i = 0; b[i] != '\0'; i++)
	{
		int binary_digit = b[i] - '0';

		decimal += (binary_digit * pow(2, digit_position));
		digit_position++;
	}
	return (decimal);
}
