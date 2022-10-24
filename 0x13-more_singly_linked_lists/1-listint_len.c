#include "lists.h"
#include <stdio.h>

/**
 * listint_len - fuction print the number element
 * @h: structure pointer that holdes the adress
 * Return: the number of element and thier data
 */
size_t listint_len(const listint_t *h)
{
        int count = 0;

        if (h == NULL)
        {
                return (0);
        }
        while (h != NULL)
        {
                count += 1;
                h = h->next;
        }
        return (count);
}
