#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_listint - function sum the data
 * @head: structure address
 * Return: the sum of the data in the structure
 */

int sum_listint(listint_t *head)
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
