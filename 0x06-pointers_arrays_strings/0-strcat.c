#include "main.h"
#include <string.h>

/**
 * _strcat - function used to concatenate strings
 * @dest: character pointer
 * @src: character pointer
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest = '\0';
	return (dest);
}
