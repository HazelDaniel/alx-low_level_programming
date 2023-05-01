#include "lists.h"

/**
 * add_nodeint_end - a function that
 * adds a node to the end of a linked list
 * @head: the address of the head of the linked list
 * @n: the value of the node
 * Return: listint_t
 **/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_nodeint = NULL, *tmp_head = *head;

	new_nodeint = (listint_t *)malloc(sizeof(struct listint_s));
	if (new_nodeint == NULL)
		return (NULL);
	new_nodeint->n = n;
	new_nodeint->next = NULL;
	if (*head == NULL)
	{
		*head = new_nodeint;
		return (new_nodeint);
	}
	while ((*head)->next != NULL)
	{
		(*head) = (*head)->next;
	}
	(*head)->next = new_nodeint;
	*head = tmp_head;

	return (new_nodeint);
}
