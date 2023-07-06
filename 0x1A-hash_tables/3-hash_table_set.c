#include "hash_tables.h"

/**
 * null_like - a function that tells
 * if a string is either an empty string or NULL
 * @s: the input string
 * Return: int
 **/
int null_like(char *s)
{
	if (!s || !*s)
		return (1);
	return (0);
}
/**
 * hash_table_set - a function that adds an element to the hash table
 * @key: the associated key of the element
 * @value: the value of the element
 * @ht: the hash table
 * Return: integer
 **/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index;
	hash_node_t *new = (hash_node_t *)malloc(sizeof(hash_node_t)), *curr, *prev = NULL;

	if (!ht || !new || null_like((char *)key))
	{
		free(new);
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);
	new->value = strdup(value);
	new->key = strdup(key);
	new->next = NULL;

	if (ht->array[index])
	{
		curr = ht->array[index];
		while (curr && strcmp(curr->key, key))
		{
			prev = curr;
			curr = curr->next;
		}
		if (!curr)
		{
			new->next = ht->array[index];
			ht->array[index] = new;
			return (1);
		}
		if (!strcmp(curr->key, key))
		{
			new->next = curr->next;
			if (prev)
				prev->next = new;
			else
				ht->array[index] = new;
			free(curr->value);
			free(curr->key);
			free(curr);
			return (1); /* already set, exact value */
		}
	}

	ht->array[index] = new;
	return (1);
}
