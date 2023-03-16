#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @k: number of bytes to allocate
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int k)

{
	void *ptr;

	ptr = malloc(k);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
