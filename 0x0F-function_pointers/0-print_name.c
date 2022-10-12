#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - fuction used to print name
 * @name: character pointer
 * @f: function pointer
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
