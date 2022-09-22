#include "main.h"

/**
 * leet - fuction to encode letters
 * @s: character pointer
 * Return: number
 */

char *leet(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == 'a')
		{
			s[i] = s[i] - 42;
		}
		else if (s[i] == 'A')
		{
			s[i] = s[i] - 11;
		}
		else if (s[i] == 'e')
		{
			s[i] = s[i] - 50;
		}
		else if (s[i] == 'E')
		{
			s[i] = s[i] - 18;
		}
		else if (s[i] == 'o')
		{
			s[i] = s[i] - 63;
		}
		else if (s[i] == 'O')
		{
			s[i] = s[i] - 31;
		}
		else if (s[i] == 't')
		{
			s[i] = s[i] - 61;
		}
		else if (s[i] == 'T')
		{
			s[i] = s[i] - 29;
		}
		else if (s[i] == 'l')
		{
			s[i] = s[i] - 59;
		}
		else if (s[i] == 'L')
		{
			s[i] = s[i] - 47;
		}
	}
	return (s);
}

