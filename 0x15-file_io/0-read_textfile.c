#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads a textfile
 * @filename: the file to read
 * @letters: number of letters to read
 *
 * Return: number of letters to read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	char *p;
	ssize_t act_bytes;
	ssize_t reader;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	p = malloc(sizeof(char) * letters);
	reader = read(fd, p, letters);
	act_bytes = write(STDOUT_FILENO, p, reader);

	free(p);
	close(fd);
	return (act_bytes);
}
