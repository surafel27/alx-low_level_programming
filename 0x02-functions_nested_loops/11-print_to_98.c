#include "main.h"

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
		_putchar(n);
		if (n < 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
}
