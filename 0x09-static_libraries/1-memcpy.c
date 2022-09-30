#include "main.h"

/**
 * _memcpy - fuction whiche copies memory area
 * @dest: character pointer
 * @src: character pointer
 * @n: integer
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;

	while (n--)
	{
		*dest++ = *src++;
	}
	return (ptr);
}
