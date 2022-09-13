#include "main.h"

/**
 * _isalpha - checks input is character or number
 *
 * @c: input to the function parameter
 *
 * Returns - returns 1 if the input is number, returns c if input is character
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else 
	{
		return (0);
	}
	_putchar('\n);
}
