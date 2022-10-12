#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - fuction iterate in an array
 * @array: pointer to an array of integer
 * @size: the size of the array
 * @action: is a pointer to a function
 * Return: void/nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
