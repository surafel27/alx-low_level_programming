#include "main.h"
#include <string.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: character pointer
 * @accept: character pointer
 * Return: segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0;
	int init_length = 0;
	int len1 = strlen(s);
	int len2 = strlen(accept);

	while (i < len1)
	{
		bool found_match = false;

		while (j < len2)
		{
			if (s[j] == accept[j])
			{
				found_match = true;
				break;
			}
			if (!found_match)
				break;
			else
				init_length++;
			j++;
		}
	i++;
	}
	return (init_length);
}
