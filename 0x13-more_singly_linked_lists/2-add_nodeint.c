#include "lists.h"

/**
 * add_nodeint - a function that
 * adds a node to a linked list at a particular
 * index
 * @head: the address of the head of the linked list
 * @n: the value of the node
 * Return: listint_t
 **/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_nodeint = NULL;

	new_nodeint = (listint_t *)malloc(sizeof(struct listint_s));
	if (new_nodeint == NULL)
		return (NULL);
	new_nodeint->n = n;
	new_nodeint->next = *head;
	*head = new_nodeint;

	return (new_nodeint);
}
