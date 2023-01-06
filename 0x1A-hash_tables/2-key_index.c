#include "hash_tables.h"

/**
 * key_index - fumction used to give hash of key
 * @key: the key
 * @size: the size of the table
 * Return: the hash key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int new_key;

	new_key = hash_djb2(key);
	return (new_key % size);
}
