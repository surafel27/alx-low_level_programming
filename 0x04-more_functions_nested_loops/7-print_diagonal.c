#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - print diagonal line
 * @n: integer number of line '\'
 * Return: 0
 */

void print_diagonal(int n)
{
	int row, colum;

	for (row = 0; row <= n; row++)
	{
		for (colum = 0; colum < n; colum++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
