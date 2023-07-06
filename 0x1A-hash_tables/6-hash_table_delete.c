#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes
 * a hash table and frees up it's space
 * @ht: the hash table to be deleted
 * Return: void
 **/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *curr, *next;
	unsigned long int i;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (!ht->array[i])
			continue;
		curr = ht->array[i];

		while (curr)
		{
			next = curr->next;
			free(curr->key);
			free(curr->value);
			free(curr);
			curr = next;
		}
	}
	free(ht->array);
	free(ht);
}
