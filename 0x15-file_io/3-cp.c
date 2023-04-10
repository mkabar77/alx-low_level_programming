#include <errno.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
/**
 * main - main function
 * @argc: command line arguments
 * @argv: array of pointers for command line arguments
 *
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	char *buffer[1024];
	int file_from, file_to, bytes_read, w;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	bytes_read = read(file_from, buffer[1024]);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (file_from == -1 || bytes_read == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
				free(buffer);
				exit(98);
			}

		w = write(file_to, buffer, bytes_read);
		if (file_to == -1 || w == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
				free(buffer);
				exit(99);
			}

		bytes_read = read(file_from, buffer, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);
	}
		while (bytes_read > 0);
			free(buffer);
		return (0);
}

