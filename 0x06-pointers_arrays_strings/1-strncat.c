#include "main.h"

/**
 * _strncat - function to string
 * @dest: character pointer
 * @src: character pointer
 * @n: interger n byte from src
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, dest_len;

	dest_len = strlen(dest);
	n = strlen(src);
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
