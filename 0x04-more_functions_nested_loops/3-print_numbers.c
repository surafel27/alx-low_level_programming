#include "main.h"

/**
 * print_numbers - function used to print from 0 - 9
 * Return: 0
 */

void print_numbers(void)
{
	int i;

	i = 48;
	while (i <= 57)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
