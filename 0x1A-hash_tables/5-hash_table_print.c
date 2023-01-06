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
	char *comma = "";

	if (ht == NULL || ht->array == NULL)
		return;

	printf("{");
	for (idx = 0; idx < ht->size; idx++)
	{
		tmp = ht->array[idx];
		while (tmp != NULL)
		{
			printf("%s'%s': '%s'", tmp->key, tmp->value);
			comma = ", ";
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
