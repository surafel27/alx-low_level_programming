#include "main.h"

/**
 * _strncpy - function to copy string
 * @dest: character pointer
 * @src: character pointer
 * @n: integer
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
        int i;
	
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for(; i < n; i++)
	{
		dest[i] = '\n';
	}
	return (dest);
}
