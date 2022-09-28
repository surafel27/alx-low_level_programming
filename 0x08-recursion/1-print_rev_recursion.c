#include "main.h"

/**
 * _print_rev_recursion - function to reverse string
 * @s: character pointer
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		s++;
		len++;
	}
	if (len > 0)
	{
		_print_rev_recursion(s - 1);
		_putchar(*s);
		len--;
	}
	_putchar('\n');
}
