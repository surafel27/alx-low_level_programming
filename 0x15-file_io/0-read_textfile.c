#include "main.h"
#include <stdio.h>

/**
 * read_textfile - read file that passes an argument
 * @filename: the file name that is passed
 * @letters: the number of letter to be read
 * Return: the number of the letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, rd, wr;
	char *buffer;

	if (filename == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters + 1);
	rd = read(file, buffer, letters);
	buffer[letters] = '\0';
	if (rd == -1)
	{
		free(buffer);
		return (0);
	}
	wr = write(1, buffer, rd);
	if (wr == -1 || wr != rd)
	{
		free(buffer);
		return (0);
	}
	free(buffer)
	close(file);
	return (wr);
}
