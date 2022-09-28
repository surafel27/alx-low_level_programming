#include "main.h"

/**
 * _puts_recursion - fuction used to print string
 * @s: character pointer
 * Return: void
 */

void _puts_recursion(char *s)
{
	while (*s != '\0')
	{
		_puts_recursion(s + 1);
	}
	 _putchar('\n');
}
