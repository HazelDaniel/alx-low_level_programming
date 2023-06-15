#include "lists.h"

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	while (current)
	{
		if (!current->next)
		{
			free(current->prev), free(current), head = NULL;
			return;
		}
		free(current->prev);
		current = current->next;
	}
	free(current);
	head = NULL;
}
