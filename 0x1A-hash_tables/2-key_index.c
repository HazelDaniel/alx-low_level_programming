#include "hash_tables.h"

/**
 * key_index - a function that returns the index
 * of a key in a hash table
 * @key: the key provided
 * @size: the size of the hash table
 * Return: unsigned long int
 **/
unsigned long int key_index(const unsigned char *key, unsigned long size)
{
	unsigned long int hash = hash_djb2(key);

	return (hash % size);
}
