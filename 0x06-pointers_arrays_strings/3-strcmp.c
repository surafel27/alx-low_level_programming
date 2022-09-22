#include "main.h"
#include <string.h>

/**
 * _strcmp - function used to compaire two strings
 * @s1: character pointer
 * @s2: character pointer
 * Return: 0;
 */

int _strcmp(char *s1, char *s2)
{
	if (s1 < s2)
	{
		_putchar('-');
		_putchar(s1);
	}
	else if (s1 == s2)
	{
		_putchar('0');
	}
	else
	{
		_putchar(s2);
	}
	return (0);
}
