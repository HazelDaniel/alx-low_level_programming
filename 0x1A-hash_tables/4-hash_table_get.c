#include "hash_tables.h"

/**
 * hash_table_get - a function that retrieves an element from the
 * hash table based on a key
 * @ht: the hash table
 * @key: the provided key
 * Return: char *
 **/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *curr;

	if (!ht || null_like((char *)key))
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index])
	{
		curr = ht->array[index];
		while (curr && strcmp(curr->key, key))
			curr = curr->next;
		if (!curr)
			return (NULL);
		if (!strcmp(curr->key, key))
		{
			return (curr->value);
		}
	}
	return (NULL);
}
