#include "main.h"
#include <string.h>

/**
 * print_rev - function used to print revere of the sring
 * @s: character pointer
 * Return: void
 */

void print_rev(char *s)
{
	int len, g;

	len = strlen(s);
	for (g = len - 1; g >= 0; g--)
	{
		s--;
		putchar(*s);
	}
	putchar('\n');
}
