#include "main.h"

/**
 * print_last_digit - print the last digit of the number
 *
 * @n: input number as an integer 
 *
 * Returns: last digit
 */
int print_last_digit(int n)
{
	int j;

	j = j % 10;
	if (j < 0)
	{
		_putchar(-j + 48);
		return (-1);
	}
	else
	{
		_putchar(j + 48);
		return (1);
	}
}
