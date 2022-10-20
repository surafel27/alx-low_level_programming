#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_list - function print list of struct
 * @h: pointer to struct
 * Return: Null if str is numm else element of struct
 */

size_t print_list(const list_t *h)
{
	unsigned int i = 0; /* count the node */

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		i += 1;
		h = h->next;
	}
	return (i);
}
