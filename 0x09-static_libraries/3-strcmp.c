#include "main.h"
#include <string.h>
/**
 * _strcmp - function used to compaire two strings
 * @s1: character pointer
 * @s2: character pointer
 * Return: 0;
 */

int _strcmp(char *s1, char *s2)
{
	int i, j, bigger;

	i = strlen(s1);
	j = strlen(s2);
	if (i < j)
	{
		bigger = j;
	}
	else if (i > j)
	{
		bigger = i;
	}
	else
	{
		bigger = i;
	}
	for (i = 0; i < bigger; i++)
	{
		if (s1[i] == s2[i])
		{
		}
		else
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
