#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - fuction add node at the end
 * @head: structure pointer holdes address of the first node
 * @n: element of the structer to be added
 * Return: the address of the new added node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *endnode, *tmp;

	endnode = malloc(sizeof(listint_t));

	if (endnode == NULL)
	{
		free(endnode);
		return (NULL);
	}
	endnode->n = n;
	endnode->next = NULL;

	if (*head == NULL)
	{
		*head = endnode;
	}
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = endnode;
	}
	return (endnode);
}
