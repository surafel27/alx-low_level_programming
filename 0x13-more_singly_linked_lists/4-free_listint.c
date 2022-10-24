#include <stdlib.h>
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
		head = head->next;
		free(temp);
	}
}
