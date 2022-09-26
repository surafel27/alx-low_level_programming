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
	int len1 = strlen(s);
	int len2 = strlen(accept);

	while (*s != '\0')
	{
		for (i = 0; i < len1; i++)
		{
			for (j = 0; j < len2; j++)
			{
				if (s[i] == accept[j])
				{
					return (s);
				}
			}
		}
	s++;
	}
	return (s);
}
