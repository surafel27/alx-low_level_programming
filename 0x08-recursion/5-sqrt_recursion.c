#include "main.h"

/**
 * _sqrt_recursion - fuction used to calculate square root
 * @n: integer to be squared
 * Return: integer sqrt
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (_sqrt_recursion((n * n) / 2));
}
