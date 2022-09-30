#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: character pointer
 * @needle: chatacter pointer
 * Return: NULL value
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}
		if (*two == '\0')
			return (haystack);
	haystack++;
	}
	return (NULL);
}
