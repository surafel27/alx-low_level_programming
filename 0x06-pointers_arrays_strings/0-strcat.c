#include "main.h"

/**
 * _strcat - function used to concatenate strings
 * @dest: character pointer
 * @src: character pointer
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i, dest_len;

	dest_len = strlen(dest);
	for (i = 0; i < (src[i] != '\0'); i++)
	{
		dest[dest_len] = src[i];
	}
	dest[dest_len] = '\0';
	return (dest);
}
