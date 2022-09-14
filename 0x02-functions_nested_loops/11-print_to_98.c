#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints the number from n to 98
 *
 * @n: integer as a parameter
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	if (n == 98)
		printf("%d, ", n);
	printf("\n");
}
