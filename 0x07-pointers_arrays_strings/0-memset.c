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
	char *ptr = s;

	while (n--)
	{
		*s++ = b;
	}
	return (ptr);
}
