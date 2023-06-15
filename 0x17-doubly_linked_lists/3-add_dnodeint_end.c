#include "lists.h"

/**
 * add_dnodeint_end -  a function that appends a node
 * to the end of a doubly linked list
 * @head: the address of the head of the linked list
 * @n:  the value of the new node
 * Return: dlistint_t *
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	dlistint_t *current = *head;

	if (!new_node)
		return (NULL);

	new_node->next = NULL;
	new_node->n = n;
	if (!current)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	while (current && current->next)
		current = current->next;

	current->next = new_node;
	new_node->prev = current;

	return (new_node);
}
