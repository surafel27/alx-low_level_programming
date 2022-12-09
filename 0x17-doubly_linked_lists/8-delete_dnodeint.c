#include "lists.h"

/**
 * delete_dnodeint_at_index - function delet node at index
 * @head: addres of the node
 * @index: index to be deleted
 * Return: 1 if found -1 failed 0 if null
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp, *nextnode;

	tmp = *head;
	if (tmp == NULL)
		return (-1);
	if (index == 0)
	{
		(*head) = (*head)->next;
		free(tmp);
		return (1);
	}
	while (i < (index - 1))
	{
		if (tmp->next == NULL)
			return (-1);
		tmp = tmp->next;
		i++;
	}
	nextnode = tmp->next;
	tmp->next = nextnode->next;
	free(nextnode);
	return (1);
}
