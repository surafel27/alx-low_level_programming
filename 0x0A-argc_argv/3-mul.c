#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - fuction print the all argument passed
 * @argc: argument passed
 * @argv: argument size
 * Return: always (0)
 */

int main(int argc, char *argv[])
{
	int count, mul = 1;

	if (argc != 0 && argc != 9)
	{
		if (argc > 1)
		{
			for (count = 0; count < argc; count++)
			{
				mul *= atoi(argv[count]);
				printf("%d\n", mul);
			}
		}
	}
	return (0);
}
