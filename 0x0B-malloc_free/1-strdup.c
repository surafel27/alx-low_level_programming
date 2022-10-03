#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - fuction used to return new allocated pointer
 * @str: character pointer
 * Return: pointer to duplicate string
 */

char *_strdup(char *str)
{
	char *src;
	char *p;
	int len;

	len = strlen(str);
	src = (char *)malloc(len + 1 * sizeof(char));
	if (src == NULL)
	{
		return (NULL);
	}
	else
	{
		p = src;
		while (*str)
		{
			*p++ = *str++;
		}
		*p = '\0';
		return (src);
	}
	return (NULL);
}
