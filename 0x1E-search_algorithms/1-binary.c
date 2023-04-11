#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * iterative_search - function search for a given value
 * @array: an array a value to be searched
 * @low: the low size of the array
 * @high: the max size of the array
 * @value: the value to be searched
 * Return: the index the value located
 */
int iterative_search(int *array, size_t low, size_t high, int value)
{
	while (low <= high)
	{
		size_t i;
		size_t mid = (low + high) / 2;

		printf("Searching in array: ");
		for (i = low; i < high; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);
		if (array[mid] == value)
		{
			return (mid);
		}
		if (array[mid] < value)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	return (-1);
}

/**
 * binary_search - function search for a given value
 * @array: an array a value to be searched
 * @size: the size of the array
 * @value: the value to be searched
 * Return: the index the value located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1;

	if (array == NULL)
		return (-1);
	return (iterative_search(array, low, high, value));
}
