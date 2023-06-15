#include "lists.h"

/**
 * delete_dnodeint_at_index -  a function that deletes a node
 * of a linked list at a particular index
 * @head: the address of the head of the linked list
 * @index:  the index provided
 * Return: int
 **/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head, *prev = NULL;
	unsigned int count = 0;

	if (!current)
		return (-1);
	while (current && count < index)
	{
		count++;
		prev = current;
		current = current->next;
	}
	if (current)
	{
		if (count == index)
		{
			if (!prev)
			{
				prev = *head;
				*head = (*head)->next;
				if (prev->next)
					prev->next->prev = NULL;
				free(prev);
				return (1);
			}
			prev->next = current->next;
			if (prev->next)
				prev->next->prev = prev;
			free(current);
		}
		return (1);
	}
	return (-1);
}
