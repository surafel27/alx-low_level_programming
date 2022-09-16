#include "main.h"

/**
 * _isdigit - checkes if the input is digit
 * @c: integer value
 * Return: 0
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}

	return (0);
}
