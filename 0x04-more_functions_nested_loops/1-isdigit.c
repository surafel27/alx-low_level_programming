#include "main.h"

/**
 * _isdigit - checkes if the input is digit
 * @c: integer value
 * Return: 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}

	return (0);
}
