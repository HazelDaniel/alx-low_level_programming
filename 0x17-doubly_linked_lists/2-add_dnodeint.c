#include "lists.h"

/**
 * add_dnodeint - a function that adds a node at the head
 * of a doubly linked
 * linked list
 * @head: the address of the head of the linked list
 * @n: the value of the node
 * Return: dlistint_t *
 **/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->prev = NULL;
	new_node->n = n;
	if (head)
	{
		new_node->next = *head;
		if (*head)
			(*head)->prev = new_node;
		*head = new_node;
	}
	else
	{
		new_node->next = NULL;
	}
	return (new_node);
}
