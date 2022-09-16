#include "main.h"
#include <stdio.h>
/**
 * print_line - prints line as output
 * @n: integer parameter
 * Return: line
 */

void print_line(int n)
{
	int row;

	for (row = 0; row < n; row++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
