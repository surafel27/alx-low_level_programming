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
	unsigned int i = 1;
	dlistint_t *newnode, *tmp;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL || h == NULL)
		return (NULL);
	newnode->n = n;
	tmp = *h;
	if (idx == 0)
	{
		*h = newnode;
		newnode->next = tmp;
		newnode->prev = NULL;
		tmp->prev = newnode;
		return (newnode);
	}
	while (tmp->next != NULL)
	{
		if (i == idx)
		{
			newnode->prev = tmp;
			newnode->next = tmp->next;
			tmp->next = newnode;
			return (newnode);
		}
		tmp = tmp->next;
		i++;
	}
	if (i == idx)
	{
		newnode->prev = tmp;
		newnode->next = NULL;
		tmp->next = newnode;
	}
	if (i < idx)
	{
		free(newnode);
		return (NULL);
	}
	return (newnode);
}
