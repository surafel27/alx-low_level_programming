#include "main.h"
#include <stdio.h>

/**
 * more_numbers - function to print 0 -14 ten times
 * Return: 0
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar(j + '0');
		}
		_putchar('\n');
	}
}
