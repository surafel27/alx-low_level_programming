#include "lists.h"

/**
 * print_dlistint - fuction prints doubliy linkedlist val
 * @h: doubliy lined list structure
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h == NULL)
		{
			printf("NULL\n");
		}
		else
		{
			printf("%d \n", h->n);
		}
		count++;
		h = h->next;
	}
	return (count);
}
