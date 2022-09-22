#include "main.h"

/**
 * cap_string - function used to capitalize strings
 * @s: character pointer
 * Return: string
 */

char *cap_string(char *s)
{
	int i, j;
	char a[] = " \t\n,;.!?\"(){}";

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
				continue;
			}
		}
		else
		{
			for (j = 0; j <= 12; j++)
			{
				if (a[j] == s[i] - 1)
				{
					s[i] -= 'a' - 'A';
				}
			}
			if (s[i] >= 'A' && s[i] <= 'Z')
			{
				s[i] = s[i] + 32;
			}
		}
	}
	return (s);
}
