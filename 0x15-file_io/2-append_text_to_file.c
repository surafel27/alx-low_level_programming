#include "main.h"
#include <stdio.h>

/**
 * append_text_to_file - function appends to file
 * @filename: the file
 * @text_content: content to be append
 * Return: 1 0n sucess -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, fwr;
	int i = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);

	while (text_content[i])
		i++;

	if (text_content == NULL)
	{
		close(fd);
		return (-1);
	}
	else
	{
		fwr = write(fd, text_content, i);
	}
	if (fwr == -1)
		return (-1);
	close(fd);
	return (1);
}
