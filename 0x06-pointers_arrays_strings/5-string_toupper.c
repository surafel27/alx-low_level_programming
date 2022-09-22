#include "main.h"

/**
 * string_toupper - function converts to upper
 * @letter: character to convert
 * Return: character
 */

char *string_toupper(char *letter)
{
	int i;

	for (i = 0; i < strlen(letter); i++)
	{
		if (letter[i] >= 97 && letter[i] <= 122)
		{
			letter[i] = letter[i] - 32;
		}
	}
	return (letter);
}
