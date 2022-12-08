#include "lists.h"

/**
 * free_dlistint - free the list of doubly linked list
 * @head: lindek list to be freed
 * Return: None
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
