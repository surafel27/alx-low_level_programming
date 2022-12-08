#include "lists.h"

/**
 * get_dnodeint_at_index - function get node at index
 * @index: the node to be returned
 * Return: the node if found, NULL if not
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	while (head != NULL)
	{
		if (count == index)
		{
			return (head);
		}
		count += 1;
		head = head->next;
	}
	return (NULL);
}
