#include "lists.h"

/**
 * print_dlistint - a function that prints a doubly-linked
 * list
 * @h: the head of the linked list
 * Return: size_t
 **/
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *current = (dlistint_t *)h;
	size_t count = 0;

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}

	return (count);
}
