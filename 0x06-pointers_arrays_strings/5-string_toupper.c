#include "main.h"

/**
 * string_toupper - function converts to upper
 * @s: character to convert
 * Return: character
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; i < strlen(s); i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
