#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - fuction used to concatinate string
 * @s1: character pointer
 * @s2: character pointer
 * Return: concatination
 */

char *str_concat(char *s1, char *s2)
{
	int len1, len2, total_len;
	char *str;

	if (s1 == NULL)
	{
		len1 = 0;
	}
	else
	{
		len1 = strlen(s1);
	}
	if (s2 == NULL)
	{
		len2 = 0;
	}
	else
	{
		len2 = strlen(s2);
	}
	total_len = len1 + len2 + 1;
	str = (char *)malloc(total_len * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	str = s1;
	while (*str != '\0')
	{
		str++;
	}
	while (*s2 != '\0')
	{
		*str++ = *s2++;
	}
	*str = '\0';
	return (str);
}
