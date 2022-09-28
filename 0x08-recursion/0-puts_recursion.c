#include "main.h"

/**
 * _puts_recursion - fuction used to print string
 * @s: character pointer
 * Return: void
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + i);
		i++;
	}
	 _putchar('\n');
}
