#include "lists.h"

/**
 * free_dlistint - a function that frees up
 * a doubly linked list
 * @head: the head of the linked list
 * Return: void
 **/
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
