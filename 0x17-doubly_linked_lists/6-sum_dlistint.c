#include "lists.h"

/**
 * sum_dlistint - sum of the element
 * @head: the address of the linked list
 * Return: the summ else o if empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
