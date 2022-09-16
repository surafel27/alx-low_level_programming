#include "main.h"

/**
 * _isupper - checks for uppercase or lowercase
 * @c: integer to check
 * Return: 0
 */

int _isupper(int c)
{
	if (c == 'a' || c == 'z')
	{
		_putchar(c);
		return (0);
	}
	else
	{
		_putchar(c);
		return (1);
	}
	return (0);
}
