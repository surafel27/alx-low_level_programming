#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - fuction allocate memory
 * @b: integer a memory to be allocated
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *a;

	a = (unsigned int *)malloc(sizeof(b));
	if (a == NULL)
	{
		_putchar(98);
		return (NULL);
	}
	return (a);
}
