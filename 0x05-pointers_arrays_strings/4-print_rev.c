#include "main.h"
#include <string.h>

/**
 * print_rev - function used to print revere of the sring
 * @s: character pointer
 * Return: void
 */

void print_rev(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	while (len > 0)
	{
		s--;
		_putchar(*s);
		len--;
	}
	_putchar('\n');
}
