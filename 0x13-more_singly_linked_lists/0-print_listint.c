#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - fuction print the element and number of node
 * @h: structure pointer that holdes the adress
 * Return: the number of element and thier data
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		printf("%d\n", h->n);
		count += 1;
		h = h->next;
	}
	return (count);
}
