#include "main.h"
int _sqroot(int n, int i);

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
	else
	{
	return (_sqroot(n, (n + 1) / 2));
	}
}
/**
 * _sqroot - checks if perfect square
 * @n: input
 * @i: counter
 * Return: if square root
 */

int _sqroot(int n, int i)
{
	if (i < 1)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (_sqroot(n, i - 1));
}
