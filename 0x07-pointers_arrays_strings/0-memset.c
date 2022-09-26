#include "main.h"

/**
 * _memset - function sets constant byte in memory
 * @s: character pointer
 * @b: character
 * @n: integer
 * Return: memset
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
