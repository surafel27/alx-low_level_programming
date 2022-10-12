#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - fuction add two intger
 * @a: integer
 * @b: integer
 * Return: sum of two number
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function find difference
 * @a: integer
 * @b: integer
 * Return: find the difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function find the multiplication
 * @a: integer
 * @b: integer
 * Return: find the multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function find division
 * @a: integer
 * @b: integer
 * Return: division of two number
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - fuction return modules
 * @a: integer
 * @b: integer
 * Return: function returns modules
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
