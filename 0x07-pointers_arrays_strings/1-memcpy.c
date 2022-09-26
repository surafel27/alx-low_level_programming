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
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
