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

	va_start(ap_ptr, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ap_ptr, char *);
		if (str)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}
		if (i < n - 1 && separator)
		{
			printf("%s", separator);
		}
	}
	va_end(ap_ptr);
	printf("\n");
}
