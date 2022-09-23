#include "main.h"

/**
 * infinite_add - functionused to add two numbers
 * @n1: character pointer
 * @n2: character pointer
 * @r: character pointer
 * @size_r: integer to put sum
 * Return: sum
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	r[size_r] = *n1 + *n2;
	return (r);
}
