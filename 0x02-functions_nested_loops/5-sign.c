#include "main.h"

/**
 * print_sign - fuction to print sign
 *
 * @n: integer input as a parameter
 * Retun: sign for the number
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
