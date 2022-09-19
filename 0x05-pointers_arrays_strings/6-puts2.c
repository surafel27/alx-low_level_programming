#include "main.h"
#include <string.h>

/**
 * puts2 - print every character of string
 * @str: pointer to character
 * Return: void
 */

void puts2(char *str)
{
	int a, b = 0;

	while (str[a] != '\0')
	{
		a++;
	}
	while (b < a)
	{
		_putchar(str[b]);
		a = a + 2;
	}
	_putchar('\n');
}
