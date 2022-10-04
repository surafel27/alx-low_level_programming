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
	int l, len1, len2, total_len;
	char *str;

	if (s1 == NULL)
	{
		len1 = 0;
	}
	else
	{
		for (len1 = 0; s1[len1]; len1++)
			;
	}
	if (s2 == NULL)
	{
		len2 = 0;
	}
	else
	{
		for (len2 = 0; s2[len2]; len2++)
			;
	}
	total_len = len1 + len2 + 1;
	str = (char *)malloc(total_len * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	for (l = 0; l < len1; l++)
	{
		str[l] = s1[l];
	}
	for (l = 0; l < len2; l++)
	{
		str[l + len1] = s2[l];
	}
	str[len1 + len2] = '\0';
	return (str);
}
