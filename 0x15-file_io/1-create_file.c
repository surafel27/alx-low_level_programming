#include "main.h"
#include <stdio.h>

/**
 * create_file - function creates file
 * @filename: the name of the file
 * @text_content: the content of the file it is '\0'
 * Return: 1 on sucess and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, wr, i = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
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
		wr = write(fd, text_content, i);
	}
	if (wr == -1)
		return (-1);
	close(fd);

	return (1);
}
