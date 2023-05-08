#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

/**
 * read_textfile - this read text
 * @filename: text file
 * @letters: alphabet to be read
 *
 * Return: num_written, if erros return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
	{
		return (0);
	}

	FILE *file;

	file = fopen(filename, "r");

	if (file == NULL)
	{
		return (0);
	}

	char buffer[letters];
	size_t num_read;

	num_read = fread(buffer, sizeof(char), letters, file);

	if (num_read == 0)
	{
		fclose(file);
		return (0);
	}

	ssize_t num_written;

	num_written = fwrite(buffer, sizeof(char), num_read, stdout);
	fclose(file);

	if (num_written != num_read)
	{
		return (0);
	}

	return (num_written);
}
