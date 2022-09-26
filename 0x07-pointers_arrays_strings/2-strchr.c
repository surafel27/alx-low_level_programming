#include "main.h"

/**
 * _strchr - fuction returns the first occurance at string
 * @s: character pointer
 * @c: character string
 * Return: first occurenance
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s);
		}
		else
		{
			s++;
		}
		i++;
	}
	return (NULL);
}
