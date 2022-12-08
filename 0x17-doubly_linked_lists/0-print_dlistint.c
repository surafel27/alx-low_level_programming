#include "lists.h"

/**
 * print_dlistint - fuction prints doubliy linkedlist val
 * @h: doubliy lined list structure
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int n = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		if (h->n == 0)
		{
			printf("0 nil\n");
		}
		else
		{
			printf("%d \n", h->n);
		}
		n += 1;
		h = h->next;
	}
	return (n);
}
