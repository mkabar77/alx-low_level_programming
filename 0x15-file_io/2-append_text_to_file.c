#include <stdio.h>
#include "main.h"

/**
 * append_text_to_file - Append text to the end of a file
 * @filename: name of file pointer.
 * @text_content: String added to the end of the file
 *
 * Return: -1 if NULL, doesn't exist and without permission -1
 *		otherwise 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file = fopen(filename, "a");
	int i = 0;
	int l = 0;

	if (file == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}
	for (i = 0; text_content[i] != '\0'; i++)
	{
		putchar(text_content[i]);
		fputc(text_content[i], file);
	}
	fclose(file);

	return (1);
}
