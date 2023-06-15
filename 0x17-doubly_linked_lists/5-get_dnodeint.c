#include "lists.h"

/**
 * get_dnodeint_at_index - a function that retrives
 * a node from a douly linked list at a particular index
 * @index: the index provided
 * @head: the head of the doubly linked list
 * Return: dlistint_t *
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current = head;

	while (current)
	{
		if (count == index)
			return (current);
		current = current->next;
		count++;
	}
	return (NULL);
}
