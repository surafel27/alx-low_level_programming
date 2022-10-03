#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - fuction used to create arrt of string
 * @size: size of the character
 * @c: character
 * Return: ponter of array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	str = (char *)malloc((size) * sizeof(char));

	if (str == 0)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	str[i] = '\0';
	return (str);
}
