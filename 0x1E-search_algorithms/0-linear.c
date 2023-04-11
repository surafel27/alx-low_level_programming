#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
 * linear_search - function search for a given value
 * @array: anarray a value to be searched
 * @size: the size of the array
 * @value: the value to be searched
 * Return: the index the value located
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
