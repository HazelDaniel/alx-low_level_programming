#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - a function that inserts a node
 * into a doubly linked list at a particular index
 * @h: the addresss of the head of the linked list
 * @idx: the index
 * @n: the value of the node
 * Return: dlistint_t *
 **/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h, *prev;
	unsigned int count = 0;
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (!new_node)
		return (NULL);

	if (!current)
	{
		*h = new_node;
		return (new_node);
	}

	while (current && count < idx)
	{
		count++, prev = current, current = current->next;
	}
	if (count == idx)
	{
		if (!current)
		{
			new_node->prev = prev, prev->next = new_node;
			return (new_node);
		}
		if (current->prev)
		{
			new_node->next = current, current->prev->next = new_node;
		}
		else
		{
			new_node->next = *h, (*h)->prev = new_node;
			*h = new_node;
		}
		return (new_node);
	}
	return (NULL);
}
