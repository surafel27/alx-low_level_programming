#include "lists.h"
#include <stdio.h>

/**
 * list_len - fuction used to find the length of the node
 * @h: struct pointer
 * Return: number of element
 */

size_t list_len(const list_t *h)
{
	unsigned int num_elem = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		num_elem += 1;
		h = h->next;
	}
	return (num_elem);
}
