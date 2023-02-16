#include <stdio.h>

/**
 * main - main is a user-defined function
 *
 * Return: 0 when sucessful
 */

int main(void)
{
	int a;
	char b;
	float c;

	printf("The size of a char: %lu byte(s)\n", (unsigned long)(sizeof(b)));
	printf("The size of a int: %lu byte(s)\n", (unsigned long)(sizeof(a)));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)(sizeof(c)));
	return (0);
}
