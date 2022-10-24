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
	unsigned int count = 0, i = 0;
	listint_t *newnode, *tmp;

	if (*head == NULL)
	{
		return;
	}
	while (tmp != NULL)
	{
		count += 1;
		tmp = tmp->next;
	}
	if (idx > count)
	{
		return (NULL);
	}
	else
	{
		tmp = *head;
		while (i < idx)
		{
			tmp = tmp->next;
			i++;
		}
		newnode->next = tmp->next;
		tmp->next = newnode;
	}
	return (newnode);
}
