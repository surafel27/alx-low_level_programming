#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_create - function used to create a hash table
 * size: the size of the table
 * Return: a pointer to newly created hash table if faill return NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t* table = (hash_table_t*) malloc(sizeof(hash_table_t));

	if (table == NULL)
	{
		return (NULL);
	}
	table->size = size;
	table->array = malloc(sizeof(hash_node_t*) * size);
	if (table->array == NULL)
	{
		free(table);
		table = NULL;
		return (NULL);
	}
	for (i = 0; i < table->size; i++)
	{
		table->array[i] = NULL;
	}
	return table;
}
