#include "main.h"
#include <stdbool.h>
/**
 * _strspn - gets the length of a prefix substring
 * @s: character pointer
 * @accept: character pointer
 * Return: segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int init_length = 0;
	int len1 = strlen(s);
	int len2 = strlen(accept);

	for (i = 0; i < len1; i++)
	{
		bool found_match = false;

		for (j = 0; j < len2; j++)
		{
			if (s[j] == accept[j])
			{
				found_match = true;
				break;
			}
			if (!found_match)
			{
				break;
			}
			else
			{
				init_length++;
			}
		}
	}
	return (init_length);
}
