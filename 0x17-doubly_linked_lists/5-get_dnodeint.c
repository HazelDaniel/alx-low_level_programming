#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current = head;
	
	while (current)
	{
		if (count == index)
			return current;
		current = current->next;
		count++;
	}
	return (NULL);
}
