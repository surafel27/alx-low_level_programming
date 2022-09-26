#include "main.h"

/**
 * _strchr - fuction returns the first occurance at string
 * @s: character pointer
 * @c: character string
 * Return: first occurenance
 */

char *_strchr(char *s, char c)
{

	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (!c)
	{
		return (s);
	}
	return (NULL);
}
