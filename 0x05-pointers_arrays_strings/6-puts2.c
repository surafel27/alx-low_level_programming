#include "main.h"
#include <string.h>

/**
 * _strlen - function to count the length of string
 * @s: character pointer
 * Return: length
 */

int _strlen(char *s)
{
	int len;

	len = strlen(s);
	return (len);
}

/**
 * puts2 - print every character of string
 * @str: pointer to character
 * Return: void
 */

void puts2(char *str)
{
	int b;

	for (b = 0; str[b] != '\0' && b < _strlen(str); b += 2)
	{
		_putchar(str[b]);
	}
	_putchar('\n');
}
