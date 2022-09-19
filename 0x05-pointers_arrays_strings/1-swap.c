#include "main.h"

/**
 * swap_int - function swap to integer value
 * @a: integer pointer
 * @b: integer pointer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
