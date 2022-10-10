#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - fuction used to print sttruct data
 * @name: character
 * @age: float
 * @owner: character
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	d -> name = name;
	d -> age = age;
	d -> owner = owner;
}
