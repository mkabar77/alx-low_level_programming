#include <stdlib.h>
#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @k: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char k, unsigned int n)

{
	unsigned int i;

	for (i = 0; i < n; i++)

	{
		s[i] = k;
	}
	return (s);
}
