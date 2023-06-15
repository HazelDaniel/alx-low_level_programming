#include "lists.h"

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head, *prev;

	while (current)
	{
		free(current->prev);
		prev = current;
		current = current->next;
	}
	free(prev);
	if (current)
		free(current->prev);
	free(current);
	head = NULL;
}
