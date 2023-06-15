#include "lists.h"

size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *current = (dlistint_t *)h;
	size_t count = 0;

	while (current)
	{
		current = current->next;
		count++;
	}
	return (count);
}

