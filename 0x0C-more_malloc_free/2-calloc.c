#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - function allocate memory for an array
 * @nmemb: integer
 * @size: integer
 * Return: array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, mul;
	int *num;

	mul = nmemb * size;
	if (nmemb == 0 || size == 0)
		return (NULL);
	num = malloc(mul);
	if (num == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < mul; i++)
	{
		num[i] = 0;
	}
	return (num);
}
