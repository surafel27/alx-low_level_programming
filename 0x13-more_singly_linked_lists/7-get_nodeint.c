#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index - function return the nth element
 * @head: structure pointer
 * @index: the index of the node to be displayed
 * Return: the node ate the index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
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
