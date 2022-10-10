#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - fuction used to print struct data
 * @d: structure pointer
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf(" ");
	}
	if ((*d).name == NULL)
	{
		printf("Name: (nil)");
	}
	else
	{
		printf("Name: %s\n", (*d).name);
		printf("Age: %f\n", (*d).age);
	}
	if ((*d).age == 0)
	{
		printf("Age: (nil)");
	}
	if ((*d).owner == NULL)
	{
		printf("Owner: (nil)");
	}
	else
	{
		printf("Owner: %s\n", (*d).owner);
	}
}
