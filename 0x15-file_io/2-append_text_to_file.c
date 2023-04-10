#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - adds text to a file
 * @filename: name of the file to create
 * @text_content: terminated string to append to the file
 *
 * Return: 1 on success or -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
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
	fd = open(filename, O_WRONLY | O_APPEND);
	wt = write(fd, text_content, content_len);
	if (wt == -1 || fd == -1)
		return (-1);

	close(fd);
	return (1);
}
