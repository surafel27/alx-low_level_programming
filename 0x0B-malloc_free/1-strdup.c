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
	char *p;
	int len;

	len = strlen(str);
	str = (char *)malloc(len + 1 * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	while (*str)
	{
		*p++ = *str++;
	}
	*p = '\0';
	return (p);
}
