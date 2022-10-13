#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_all - fuction used to print every thing
 * @format: constant char to check the arguments
 * Return: void
 */

void print_all(const char * const format, ...)
{
	char *separator = ", ";
	char *str;
	int n = 0, i = 0;
	va_list ap_ptr;

	va_start(ap_ptr, format);
	while (format && format[i])
		i++;
	while (format && format[n])
	{
		if (n == (i - 1))
		{
			separator = "";
		}
		switch (format[n])
		{
			case 'c':
				printf("%c%s", va_arg(ap_ptr, int), separator);
				break;
			case 'i':
				printf("%d%s", va_arg(ap_ptr, int), separator);
				break;
			case 'f':
				printf("%f%s", va_arg(ap_ptr, double), separator);
				break;
			case 's':
				str = va_arg(ap_ptr, char *);
				if (str == NULL)
				{
					str = "(nil)";
				}
				printf("%s%s", str, separator);
				break;
		}
		n++;
	}
	printf("\n");
	va_end(ap_ptr);
}
