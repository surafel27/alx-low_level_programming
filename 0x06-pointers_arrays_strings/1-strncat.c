#include "main.h"

/**
 * _strncat - function to string
 * @dest: character pointer
 * @src: character pointer
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, dest_len;

	dest_len = strlen(dest);
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i + n] = src[i];
	}
	dest[dest_len + i + n] = '\0';
	return (dest);
}
