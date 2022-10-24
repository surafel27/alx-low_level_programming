#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - function frees the memory
 * @head: structure pointer
 * Return: void
 */

void free_listint2(listint_t **head)
{
	if (*head == NULL)
		return;
	while (*head != NULL)
	{
		listint_t *temp;

		temp = *head;
		*head = temp->next;
		free(temp);
	}
	*head = NULL;
}
