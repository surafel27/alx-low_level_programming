#include "main.h"

/**
 * print_sign - used to print the sign of the numbers
 *
 * @n: integer input as a parameter for the function
 *
 * Retuns: 1 if n is greater than zero, 0 if n is zero. -1 if n is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
