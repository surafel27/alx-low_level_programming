#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * strtow - fuction split string entered
 * @str: character pointer
 * Return: split words
 */

char **strtow(char *str)
{
	int i, j, len;
	char *s;

	len = strlen(str);
	s = (char **)malloc(len * sizeof(char *));

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
