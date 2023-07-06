#include "hash_tables.h"

/**
 * shash_table_create - a function that creates a sorted hash table.
 * @size: The size of new sorted hash table.
 * Return: shash_table_t *
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *h_table;

	h_table = malloc(sizeof(shash_table_t));
	if (h_table == NULL)
		return (NULL);

	h_table->size = size;
	h_table->array = calloc(size, sizeof(shash_node_t *));
	if (h_table->array == NULL)
		return (NULL);
	h_table->shead = NULL, h_table->stail = NULL;

	return (h_table);
}

/**
 * shash_table_set - a function that adds an element to a sorted hash table.
 * @ht: the hash table
 * @key: the corresponding key
 * @value: the value associated with the key
 * Return: int
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new, *tmp;
	char *val;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	val = strdup(value);
	if (val == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->shead;
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value), tmp->value = val;
			return (1);
		}
		tmp = tmp->snext;
	}

	new = malloc(sizeof(shash_node_t));
	if (new == NULL)
	{
		free(val);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(val), free(new);
		return (0);
	}
	new->value = val, new->next = ht->array[index];
	ht->array[index] = new;

	if (ht->shead == NULL)
	{
		new->sprev = NULL, new->snext = NULL;
		ht->shead = new, ht->stail = new;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		new->sprev = NULL, new->snext = ht->shead;
		ht->shead->sprev = new, ht->shead = new;
	}
	else
	{
		tmp = ht->shead;
		while (tmp->snext != NULL && strcmp(tmp->snext->key, key) < 0)
			tmp = tmp->snext;
		new->sprev = tmp, new->snext = tmp->snext;
		if (tmp->snext == NULL)
			ht->stail = new;
		else
			tmp->snext->sprev = new;
		tmp->snext = new;
	}

	return (1);
}

/**
 * shash_table_get - a function that retrieves
 * an element from a sorted hash table
 * @ht: the hash table
 * @key: the corresponding key
 * Return: shash_table_t *
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *curr;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	curr = ht->shead;
	while (curr != NULL && strcmp(curr->key, key) != 0)
		curr = curr->snext;

	return ((curr == NULL) ? NULL : curr->value);
}

/**
 * shash_table_print - a function that prints a sorted
 * hash table in order.
 * @ht: the hash table
 * Return: void
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *curr;

	if (ht == NULL)
	{
		puts("{}");
		return;
	}

	curr = ht->shead;
	printf("{");
	while (curr != NULL)
	{
		printf("'%s': '%s'", curr->key, curr->value);
		curr = curr->snext;
		if (curr != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - a function that prints a sorted
 * hash table in reverse order.
 * @ht: the hash table
 * Return: void
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *curr;

	if (ht == NULL)
		return;

	curr = ht->stail;
	printf("{");
	while (curr != NULL)
	{
		printf("'%s': '%s'", curr->key, curr->value);
		curr = curr->sprev;
		if (curr != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - a function that deletes a sorted
 * hash table and frees up it's space
 * @ht: a sorted hash table
 * Return: void
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *curr, *tmp;

	if (ht == NULL)
		return;

	curr = ht->shead;
	while (curr)
	{
		tmp = curr->snext;
		free(curr->key), free(curr->value);
		free(curr);
		curr = tmp;
	}

	free(head->array), free(head);
}
