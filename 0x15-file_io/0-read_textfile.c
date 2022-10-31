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
	char *buff;
	
	if (filename == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	buff = malloc(sizeof(char) * letters + 1);
	if (buff == NULL)
		return (0);
	rd = read(file, buff, letters);
	if (rd == -1)
		return (0);
	buff[letters] = '\0';
	wr = write(1, buff, rd);
	if (wr == -1)
		return (0);

	close(file);
	free(buff);
	return (wr);
}
	
