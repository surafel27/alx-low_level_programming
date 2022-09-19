#include "main.h"
#include <string.h>

/**
 * rev_string - function used to reverses string
 * @s: character pointer
 * Return: Void
 */

void rev_string(char *s)
{
	char *p = s;
	short count = 0;
	char n[1000];

	while (*s != '\0')
	{
		n[count] = *s;
		s++;
		count++;
	}
	count = 0;
	while (s > p)
	{
		s--;
		*s = n[count];
		count++;
	}
}
