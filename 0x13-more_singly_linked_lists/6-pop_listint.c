#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - function delete the node of the struct
 * @head: structure to be delated
 * Return: the head node data
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		tmp = *head;
		*head = tmp->next;
		n = tmp->n;
		free(tmp);
	}
	return (n);
}
