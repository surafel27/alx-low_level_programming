#include "main.h"

/**
 * _strcmp - function used to compaire two strings
 * @s1: character pointer
 * @s2: character pointer
 * Return: 0;
 */

int _strcmp(char *s1, char *s2)
{
	int i, j;

	i = strlen(s1);
	j = strlen(s2);
	if (i < j)
	{
		_putchar('-');
		_putchar(*s1);
	}
	else if (i == j)
	{
		_putchar('0');
	}
	else
	{
		_putchar(*s2);
	}
	return (0);
}
