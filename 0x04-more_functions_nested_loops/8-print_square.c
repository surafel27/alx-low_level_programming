#include "main.h"
#include <stdio.h>

/**
 * print_square - print square of the size
 * @size: integer size of the square
 * Return: 0
 */

void print_square(int size)
{
	int row, colum;

	for (row = 0; row <= size; row++)
	{
		for (colum = 0; colum <= size; colum++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
