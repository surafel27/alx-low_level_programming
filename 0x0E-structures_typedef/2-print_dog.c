#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - fuction used to print struct data
 * @d: structure pointer
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		d->name = "(nil)";
		d->age = 0;
		d->owner = "(nil)";
	}
	if (d->name == NULL)
	{
		d->name = "(nil)";
	}
	if (d->age <= 0)
	{
		printf("Age: (nil)\n");
	}
	if (d->owner == NULL)
	{
		d->owner = "(nil)";
	}
	 printf("Name: %s\n", d->name);
	 printf("Age: %.6f\n", d->age);
	 printf("Owner: %s\n", d->owner);
}
