#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - function used to concatenate two string
 * @s1: character pointer to be concat
 * @s2: character pointer to be concat
 * @n: number of s2 to be concat
 * Return: allocated space
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int len, i, j, a;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; j < n; j++)
		;
	len = i + j + 1;
	str = (char *)malloc(sizeof(char) * len);

	if (str == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < i; a++)
	{
		str[a] = s1[a];
	}
	for (a = 0; a < j; a++)
	{
		str[a + i] = s2[a];
	}
	str[i + j] = '\0';
	return (str);
}
