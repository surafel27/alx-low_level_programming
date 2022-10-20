#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - function frees the memory
 * @head - structure pointer
 * Return: void
 */

void free_list(list_t *head)
{
	if (head == NULL)
		return;
	if (head != NULL)
	{
		list_t *temp;

		temp = head;
		free(temp->str);
		free(temp);
		head = head->next;
	}
}
