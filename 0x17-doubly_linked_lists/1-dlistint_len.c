#include "lists.h"

/**
 * dlistint_len - function prints the length of the list
 * @h: the struct of the list
 * Return: the length
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count += 1;
		h = h->next;
	}
	return (count);
}
