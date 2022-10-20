#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node - fuction add new node
 * @head: structure pointer to pointer
 * @str: character pointer
 * Return: the address of new elements
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int i;
	list_t *newhead;

	if (str == NULL)
	{
		return (NULL);
	}
	newhead = malloc(sizeof(list_t *));

	if (newhead == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
		;
	newhead->str = strdup(str);
	newhead->len = i;
	newhead->next = *head;
	*head = newhead;
	return (newhead);
}
