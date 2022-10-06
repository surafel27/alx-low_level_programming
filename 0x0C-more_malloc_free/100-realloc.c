#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - fuction reallocate memory block
 * @ptr: pointer to previously allocated
 * @old_size: size of the allocated space
 * @new_size: the new size for reallocation
 * Return: relocate memory location
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *memory;
	char *new_ptr, *importer;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		memory = malloc(new_size);
		if (memory == NULL)
			return (NULL);
		return (memory);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = ptr;
	memory = malloc(sizeof(*new_ptr) * new_size);
	if (memory == NULL)
	{
		free(ptr);
		return (NULL);
	}
	importer = memory;
	for (i = 0; i < old_size && i < new_size; i++)
	{
		importer[i] = *new_ptr++;
	}
	free(ptr);
	return (memory);
}
