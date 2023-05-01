#include "lists.h"

/**
 * pop_listint - a function that
 * removes a node from the start of a linked
 * list and returns it
 * @head: the address of the head of the linked list
 * Return: int
 **/
int pop_listint(listint_t **head)
{
	listint_t *head_node;
	int n;

	if (head == NULL)
		return (0);
	head_node = *head;
	if (head_node == NULL)
		return (0);
	n = head_node->n;
	*head = (*head)->next;

	free(head_node);
	return (n);
}
