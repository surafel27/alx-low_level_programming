#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - fuction add new node at the end
 * @head: structure pointer to pointer
 * @str: character pointer
 * Return: the address of new elements
 */

list_t *add_node_end(list_t **head, const char *str)
{
        unsigned int i;
        list_t *newend, *newend2;

        if (str == NULL)
        {
                return (NULL);
        }
        newend = malloc(sizeof(list_t *));
	
	newend->str = strdup(str);
	for (i =0; str[i] !='\0'; i++)
		;
	newend->len = i;
	newend->next = NULL;

        if (*head == NULL)
        {
		*head = newend;
	}
	else
	{
		newend2 = *head;
		while(newend2->next)
		{
			newend2 = newend2->next;
		}
		newend2->next = newend;
	}
	return (newend);
}
