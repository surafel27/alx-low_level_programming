#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints the number from n to 98
 *
 * @n: integer as a parameter
 * Return: n to 98
 */
void print_to_98(int n)
{
	for (n = 0; n <= 98; n++)
	{
		printf("%d, ", n);
	}
	for (n = 0; n >= 98; n++)
	{
		printf("%d, ", n);
		n--;
	}
	if (n == 98)
		printf("%d, ", n);
	printf("\n");
}
