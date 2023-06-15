#include "lists.h"
#include <stdlib.h>

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
