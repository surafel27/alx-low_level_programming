#include "main.h"
#include <string.h>

/**
 * rev_string - function used to reverses string
 * @s: character pointer
 * Return: Void
 */

void rev_string(char *s)
{
	int begin = 0;
	int end;
	int count = 0;
	int len;
	char tmp;

	len = strlen(s);
	while (*s != '\0')
	{
		s++;
		count++;
	}
	end = (len - 1);
	while (begin < end)
	{
		tmp = s[begin];
		s[begin] = s[end];
		s[end] = tmp;
		begin++, end--;
	}
}
