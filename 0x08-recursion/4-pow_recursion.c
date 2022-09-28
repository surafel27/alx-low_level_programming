#include "main.h"

/**
 * _pow_recursion - function used to calculate power
 * @x: integer to be power
 * @y: integer to make power of x
 * Return: power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
