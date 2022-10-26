#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * reverse_listint - function revese the node
 * @head: structure pointer
 * Return: the reversed node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevnode, *nextnode;

	if (*head == NULL)
	{
		return (NULL);
	}
	prevnode = NULL;
	nextnode = *head;
	while (nextnode != NULL)
	{
		nextnode = nextnode->next;
		(*head)->next = prevnode;
		prevnode = *head;
		*head = nextnode;
	}
	*head = prevnode;
	return (*head);
}
