#include "main.h"
#include <stdio.h>

/**
 * print_binary - function print binary representation of the number
 * @n: a nubmber to be converted
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int x = n;
	int len = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (x > 0)
	{
		len++;
		x >>= 1;
	}
	len--;

	while (len >= 0)
	{
		if ((n >> len) & 1)
			_putchar('1');
		else
			_putchar('0');

		len--;
	}
}
