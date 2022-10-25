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

	tmp = *head;
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;

	if (idx == 0)
	{
		newnode->next = tmp;
		*head = newnode;
		return (newnode);
	}
	while (i < (idx - 1))
	{
		if (tmp == NULL || tmp->next == NULL)
			return (NULL);
		tmp = tmp->next;
		i++;
	}
	newnode->next = tmp->next;
	tmp->next = newnode;
	newnode->n = n;
	return (newnode);
}
