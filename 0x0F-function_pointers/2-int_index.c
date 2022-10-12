#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - fuction search for integer
 * @array: an array of integer
 * @size: size of the array
 * @cmp: function pointer
 * Return: number of occurance
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (cmp != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
