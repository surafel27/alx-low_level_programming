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
	FILE *fd;
	int i;

	if (filename == NULL)
		return (-1);
	for (i = 0; text_content[i]; i++)
		;
	if (text_content == NULL)
		return (-1);
	fd = fopen(filename, "a");
	if (fd == NULL)
	{
		fclose(fd);
		return (-1);
	}
	else
	{
		fputs(text_content, fd);
	}
	fclose(fd);
	return (1);
}
