#include <stdio.h>
#include "main.h"

/**
 * get_endianness - checks for machine's little or big endian
 *
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	return (*c == 1);
}
