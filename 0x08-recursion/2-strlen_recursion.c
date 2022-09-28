#include "main.h"

/**
 * _strlen_recursion - fuction used tor print string length
 * @s: character to be counted
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != 0)
	{
		_strlen_recursion(s + 1);
		len++;
	}
	return (len);
}
