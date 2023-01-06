#include "hash_tables.h"

/**
 * hash_table_get - fuction used to find value in hash table
 * @key: the key to search on table
 * @ht: the table to be searched
 * Return: the value in tabele if foun, else NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp = NULL;
	unsigned long int idx = 0;

	if (ht == NULL || ht->array == NULL)
		return (NULL);
	if (strlen(key) == 0 || key == NULL)
		return (NULL);
	idx = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[idx];
	if (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			return (tmp->value);
		}
	}
	return (NULL);
}
