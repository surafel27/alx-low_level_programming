#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - function create array of integer
 * @min: integer
 * @max: integer
 * Return: array of integer
 */

int *array_range(int min, int max)
{
	int i, len, sub, *arry;

	if (min > max)
	{
		return (NULL);
	}
	sub = min - max;
	for (len = 0; len < sub; len++)
		;
	arry = malloc(sizeof(int) * sub);

	if (arry == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < sub; i++)
	{
		arry[i] = min;
		min++;
	}
	return (arry);
}
