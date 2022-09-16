#include "main.h"
#include <stdio.h>

/**
 * print_triangle - function to print triangle
 * @size: print # for the integer
 * Result: print triangle
 */

void print_triangle(int size)
{
	int i, j, tab;

	for (i = 0; i < size; i++)
	{
		for (tab = size - 1 - i; tab > 0; tab--)
		{
			_putchar(' ');
		}
		for (j = 0; j <= i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
