#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: terminated string to write to the file
 *
 * Return: 1 on success or -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int content_len = 0;
	int fd, wt;

	if (filename == NULL)
		return (-1);
	if (text_content)
	{
		while (text_content[content_len])
			content_len++;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wt = write(fd, text_content, content_len);
	if (wt == -1 || fd == -1)
		return (-1);

	close(fd);
	return (1);
}
