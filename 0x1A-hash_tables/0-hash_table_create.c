#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hash table
 * @size: the size of the hash table to be created
 * Return: hash_table_t *
 **/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = (hash_table_t *)malloc(sizeof(hash_table_t));
	unsigned long int i = 0;

	if (!table || !size)
	{
		free(table);
		return (NULL);
	}

	table->size = size;
	table->array = (hash_node_t **)calloc(size + 1, sizeof(hash_node_t *));

	if (!table->array)
	{
		free(table);
		return (NULL);
	}

	for (; i <= size; )
	{
		(table->array)[i++] = NULL;
	}

	return (table);
}
