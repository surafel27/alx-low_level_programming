#include "main.h"
#include <string.h>

/**
 * _strpbrk - function searchs a string for any set of bytes
 * @s: character pointer
 * @accept: character pointer
 * Return: pointer byte in s
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (NULL);
}
