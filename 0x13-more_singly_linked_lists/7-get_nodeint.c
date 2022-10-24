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
	unsigned int count = 0, i;
	listint_t *tmp;

	tmp = head;
	if (head == NULL)
	{
		return (NULL);
	}
	while (tmp != NULL)
	{
		count += 1;
		tmp = tmp->next;
	}

	if (index > count)
	{
		return (NULL);
	}
	tmp = head;
	for (i = 0; i < count - index + 1; i++)
	{
		tmp = tmp->next;
	}
	printf("%d", tmp->n);
	return (tmp);
}
