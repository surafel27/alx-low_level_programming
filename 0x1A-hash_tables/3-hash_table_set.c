#include "hash_tables.h"

/**
 * hash_table_set - function add an element to the hash table
 * @ht: hash table an element to be added
 * @key: the key of the to an element
 * @value: the value to add as elemnt
 * Return: 1 is it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = 0;
	hash_node_t *new_elmnt = NULL;
	hash_node_t *tmp = NULL;
	char *tmp_val = NULL;

	if (ht == NULL ||  ht->array == NULL || value == NULL)
		return (0);
	if (strlen(key) == 0 || key == NULL)
		return (0);
	tmp_val = strdup(value);
	if (tmp_val == NULL)
		return (0);
	idx = key_index((unsigned char *)key, ht->size);

	tmp = ht->array[idx];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = tmp_val;
			tmp->value = strdup(value);
			free(tmp_val);
			return (1);
		}
		tmp = tmp->next;
	}
	new_elmnt = malloc(sizeof(hash_node_t));
	if (new_elmnt == NULL)
	{
		free(new_elmnt);
		return (0);
	}
	new_elmnt->key = strdup(key);
	new_elmnt->value = tmp_val;
	new_elmnt->next = ht->array[idx];
	ht->array[idx] = new_elmnt;
	return (1);
}
