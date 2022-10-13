#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function print numbers
 * @separator: charactor comma(,)
 * @n: number of numbers passing as argument
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	if (separator == NULL)
	{
		break;
	}
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, unsigned int));
		if (i < n - 1)
		{
			printf(",");
		}
	}
	va_end(ap);
	printf("\n");
}
