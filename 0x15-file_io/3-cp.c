#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - copies one file to another
 * @argc: number of arguments
 * @argv: array of pointers to argumetns
 *
 * Return: Success 0.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, rread, wwrite;
	char *p;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	p = malloc(sizeof(char) * 1024);
	if (p == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		free(p);
		exit(98);
	}
	file_from = open(argv[1], O_RDONLY);
	rread = read(file_from, p, 1024);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while (rread > 0)
	{
		if (file_from == -1 || rread == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(p);
			exit(98);
		}
		wwrite = write(file_to, p, rread);
		if (file_to == -1 || wwrite == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(p);
			exit(99);
		}
		rread = read(file_from, p, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);
	}
	free(p);
	close(file_from);
	close(file_to);
	return (0);
}
