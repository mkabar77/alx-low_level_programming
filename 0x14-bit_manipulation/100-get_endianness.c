#include "main.h"

/**
 * get_endianness - checks machine status related tp endian
 *
 * Return: 1 if little, 0 if big
 */

int get_endianness(void)
{
	unsigned int w = 0x0001;
	char *byte = (char *) &w;

	return (byte[0] ? 1 : 0);
}
