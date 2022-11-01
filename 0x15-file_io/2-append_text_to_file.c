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
	int i;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	for (i = 0; text_conetnt[i] != '\0'; i++)
		;
	fwr = write(fd, text_content, i);
	if (fwr == -1 || fwr != i)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
