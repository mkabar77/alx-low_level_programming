#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - Read text file print to STDOUT.
 * @filename: file to be read
 * @letters: letters to be read
 * Return: returms actual number of letters read and printed
 *        0 when filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	ssize_t w;
	ssize_t t;
	char *buffer[1024];

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	*buffer = malloc(sizeof(char) * letters);
	t = read(fd, buffer, letters);
	w = write(STDOUT_FILENO, buffer, t);


	close(fd);
	free(*buffer);
	return (w);

}
