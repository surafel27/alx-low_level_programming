#include "hash_tables.h"

/**
 * hash_table_print - function used to print the hash table
 * @ht: the table to be printed
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx = 0;
	hash_node_t *tmp = NULL;

	if (ht == NULL)
		return;

	printf("{");
	while (idx < ht->size)
	{
		tmp = ht->array[idx];
		while (tmp)
		{
			printf("'%s' : '%s'", tmp->key, tmp->value);
			printf(", ");
			tmp = tmp->next;
		}
		idx++;
	}
	printf("}\n");
}
