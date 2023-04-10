#include <stdio.h>
#include "main.h"
 /**
  * create_file - creates a new file
  * @filename: Points to the name of the file created
  * @text_content: A string pointer to write the file
  *
  * Return: -1 if fails, else 1.
  */

int create_file(const char *filename, char *text_content)
{
	FILE *f = fopen(filename, "w");
	int l;
	int fd;

	if (f == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}
	else
	{
		fclose(f);
		return (0);
	}
	fd = open(filename, O_CREAT);

	if (fd == -1)
		return(-1);
	close(fd);

	return (1);
}
