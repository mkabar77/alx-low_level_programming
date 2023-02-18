#include <stdio.h>

/**
 *
 */
int main()
{
	char alp;
	for (alp = 'a'; alp <= 'z'; alp++)
	{
		putchar(alp);
		if(alp == 'c' || alp == 'y' || alp == 'o')
			continue;
		putchar(alp);
	}

	putchar('\n');
	
	return 0;
}
