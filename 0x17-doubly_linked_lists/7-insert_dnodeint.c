#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at a given index
 * @h: address of the node
 * @idx: given postition
 * @n: the data to be added
 * Return: the address of new node or null
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *newnode, *tmp;

	tmp = *h;
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	while (i < (idx - 1))
	{
		if (tmp == NULL || tmp->next == NULL)
			return (NULL);
		tmp = tmp->next;
		i++;
	}
	if (idx == 0)
		return (add_dnodeint(h, n));
	else if (idx == i)
		return (add_dnodeint_end(h, n));
	newnode->prev = tmp;
	newnode->next = tmp->next;
	tmp->next = newnode;
	newnode->next->prev = newnode;
	newnode->n = n;
	return (newnode);
}
