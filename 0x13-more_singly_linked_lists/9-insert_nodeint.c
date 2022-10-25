#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - function adds new node at given position
 * @head: structure pointer
 * @idx: the position where new node will be added
 * @n: the data to store
 * Return: the adress of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *newnode, *tmp;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
	{
		free(newnode);
		return (NULL);
	}
	if (*head == NULL)
	{
		free(*head);
		return (NULL);
	}
	tmp = *head;
	while (i < idx - 1)
	{
		tmp = tmp->next;
		i++;
	}
	if (i == idx - 1)
	{
		newnode->next = tmp->next;
		tmp->next = newnode;
		newnode->n = n;
	}
	return (newnode);
}
