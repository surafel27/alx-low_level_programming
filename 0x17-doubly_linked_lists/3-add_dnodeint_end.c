#include "lists.h"

/**
 * add_dnodeint_end - add node at the end
 * @head: structure of a node
 * @n: element of the structure
 * Return: address of the new added Null if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *endnode, *tail;

	endnode = malloc(sizeof(dlistint_t));
	if (endnode == NULL)
	{
		free(endnode);
		return (NULL);
	}
	endnode->n = n;
	endnode->next = NULL;

	if (*head == NULL)
	{
		endnode->prev = NULL;
		*head = endnode;
		return (endnode);
	}
	else
	{
		tail = *head;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = endnode;
		endnode->prev = tail;
		tail = endnode;
	}
	return (endnode);
}
