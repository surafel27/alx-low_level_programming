#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - fuction prnt sting passed as an argument
 * @separator: comma to separate the string
 * @n: number of string passed
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list ap_ptr;
	va_list ap_copy;

	va_start(ap_ptr, n);
	va_copy(ap_copy, ap_ptr);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ap_ptr, char *);
		if (str[i] == '\0')
		{
			printf("nil");
		}
		printf("%s", str);
		if (separator && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap_ptr);
}
