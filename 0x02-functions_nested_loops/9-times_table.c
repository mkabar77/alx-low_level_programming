#include "main.h"
#include <stdio.h>
/**
 * times_table - multiplication of 9
 * main - main functions
 *
 * Return: Always 9
 */

void times_table(void)
{
	int a, b, x, mul, chk;

	for (a = 0; a <= 9; a++)
	{
		for (((b = 0) x = 1 ; b <= 9) ; b++, x++;)
			{
			mul = a * b;
			chk = a * x;
		if (chk > 9 && b != 9)
			printf("%d, ", mul);
				else if (b == 9)
					printf("%d", mul);
				else
					printf("%d,  ", mul);
			}
		printf("\n");
	}
}
