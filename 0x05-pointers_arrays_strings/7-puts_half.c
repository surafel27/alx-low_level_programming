#include "main.h"
#include <string.h>

/**
 * _strlen - returns the length of string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int len;

	len = strlen(s);
	return (len);
}

/**
 * puts_half - return half of the string
 * @str: string pointer
 * Return: void
 */

void puts_half(char *str)
{
	int n;

	if (_strlen(str) % 2 == 0)
	{
		n = _strlen(str) / 2;
		_putchar(n + '\0');
	}
	else
	{
		n = (_strlen(str) - 1) / 2;
		_putchar(n + '\0');
	}
	_putchar('\n');
}
