#include "main.h"
#include <stdio.h>

/**
 * cp_file - function copies the file content
 * @file_frm: main source file
 * @file_to: file will be copied here
 * Return: 0
 */
int cp_file(char *file_frm, char *file_to)
{
	int fd_1, fd_2, rd, wr;
	char buffer[1024];

	fd_1 = open(file_frm, O_RDONLY);
	if (fd_1 == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_frm);
		exit(98);
	}
	fd_2 = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_2 == -1)
        {
                dprintf(2, "Error: Can't write to %s\n", file_to);
                exit(99);
        }
	while((rd = read(fd_1, buffer, 1024)) != 0)
	{
		if (rd == -1)
		{
			dprintf(2, "Error: Can't read from file %s", file_to);
			exit(98);
		}
		wr = write(fd_2, buffer, rd);
		if (wr == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", file_to);
                        exit(99);
                }
	}
	if (close(fd_1) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_1);
		exit(100);
	}
	close(fd_1);
	if (close(fd_2) == -1)
        {
		dprintf(2, "Error: Can't close fd %d\n", fd_2);
		exit(100);
	}
	close(fd_2);
	return (0);
}


/**
 * main - main function
 * @argc: agrument from the user
 * @argv: the number of argument
 * Return: the copy of the file
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to");
		exit(97);
	}
	cp_file(argv[1], argv[2]);
	return (0);
}
