#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: character pointer
 * @accept: character pointer
 * Return: segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	int j, found_match;
	unsigned int init_length = 0;

	while (*s)
	{
		for (j = 0; j < accept[j]; j++)
		{
			found_match = 0;
			if (*s == accept[j])
			{
				init_length++;
				found_match = 1;
				break;
			}
		}
		if (!found_match)
			break;
		s++;
	}
	return (init_length);
}
