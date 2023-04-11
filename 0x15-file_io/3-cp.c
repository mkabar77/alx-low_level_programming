#include <errno.h>
#include <stdio.h>
#include <string.h>
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
	char *buffer;
	int file_from, file_to, bytes_read;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s: %s\n", argv[1],strerror(errno));
		exit(98);
	}

	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s: %s\n", argv[2], strerror(errno));
		close(file_from);
		exit(99);
	}

	buffer = malloc(1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't allocate memory\n");
		close(file_from);
		close(file_to);
		exit(100);
	}

	do
	{
		bytes_read = read(file_from, buffer, 1024);
		if (bytes_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s: %s\n", argv[1], strerror(errno));
                exit(98);
        	}

		if (file_to == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s: %s\n", argv[2], strerror(errno));
			close(file_from);
			exit(99);
		}

		buffer = malloc(1024);
		if (buffer == NULL)
		{
			dprintf(STDERR_FILENO, "Error: Can't allocate memory\n");
			close(file_from);
			close(file_to);
			exit(100);
		}
	}
		while (bytes_read > 0);
			free(buffer);
		return (0);
}
