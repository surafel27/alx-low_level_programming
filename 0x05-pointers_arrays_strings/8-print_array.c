#include "main.h"
#include <string.h>

/**
 * print_array     - prints array of integer
 * @a: integr pointer
 * @n: integer pointer
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
	}
	printf("\n");
}
