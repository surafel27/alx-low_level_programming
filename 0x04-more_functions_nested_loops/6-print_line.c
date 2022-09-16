#include "main.h"

/**
 * print_line - prints line as output
 * @n: integer parameter
 * Return: line
 */

void print_line(int n)
{
	int row;

	for (row = 0; row <= 4; row++)
	{
		if (row == 2)
		{
			_putchar(
