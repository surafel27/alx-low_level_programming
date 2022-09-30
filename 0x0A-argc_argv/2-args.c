#include <stdio.h>
#include "main.h"

/**
 * main - fuction print the all argument passed
 * @argc: argument passed
 * @argv: argument size
 * Return: always (0)
 */

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
