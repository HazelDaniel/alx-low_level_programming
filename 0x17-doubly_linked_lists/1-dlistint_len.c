#include "lists.h"

/**
 * dlistint_len - a function that gets the length of a doubly
 * linked list
 * @h: the head of the linked list
 * Return: size_t
 **/
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

