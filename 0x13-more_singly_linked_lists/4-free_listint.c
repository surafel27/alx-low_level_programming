#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - function frees the memory
 * @head: structure pointer
 * Return: void
 */

void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	while (head != NULL)
	{
		listint_t *temp;

		temp = head;
		free(temp);
		head = head->next;
	}
}
