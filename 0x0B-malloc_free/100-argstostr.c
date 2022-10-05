#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strcat - function used to concatenate strings
 * @dest: character pointer
 * @src: character pointer
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i, dest_len;

	dest_len = strlen(dest);
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

/**
 * argstostr - fuction concatenate all argument
 * @ac: intger pointer
 * @av: character pointer
 * Return: character concatenated
 */

char *argstostr(int ac, char **av)
{
	int i;
	int len = ac;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 1; i < ac; i++)
	{
		len += strlen(av[i] + 1);
	}
	str = malloc(len * sizeof(char));
	str[0] = '\0';
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 1; i < ac; i++)
	{
		if (*av[i] == ' ')
		{
			str[i] = '\n';
		}
		_strcat(str, av[i]);
	}
	str[len] = '\0';
	return (str);
}
