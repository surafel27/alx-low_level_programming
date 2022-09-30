#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - fuction add positive number
 * @argc: size of the argument
 * @argv: array of the argv
 * Return: zero
 */

int main(int argc, char *argv[])
{
	int count, sum = 0;

	if (argc < 1)
	{
		return (0);
	}
	for (count = 0; count < argc; count++)
	{
		if (!atoi(argv[count]))
		{
			printf("%s\n", "Error");
			return (1);
		}
		sum += atoi(argv[count]);
	}
	printf("%d\n", sum);
	return (0);
}
