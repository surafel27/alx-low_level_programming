#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - function delete the node at the given index
 * @head: structure pointer
 * @index: the node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp, *nextnode;

	tmp = *head;
	if (tmp == NULL)
		return (-1);
	if (index ==0)
	{
		(*head) = (*head)->next;
		free(tmp);
		return(1);
	}
	while (i < (index - 1))
	{
		if(tmp->next == NULL)
			return (-1);
		tmp = tmp->next;
		i++;
	}
	nextnode = tmp->next;
	tmp->next = nextnode->next;
	free(nextnode);
	return (1);
}
