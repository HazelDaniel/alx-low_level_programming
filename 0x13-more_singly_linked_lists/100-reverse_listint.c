#include "lists.h"

/**
 * reverse_listint - a function that
 * reverses a linked list
 * @head: the address of the head of the linked list
 * Return: listint_t
 **/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *curr;

	curr = *head;
	prev = NULL;
	while (curr != NULL)
	{
		*head = curr->next;
		curr->next = prev;
		prev = curr;
		curr = *head;
	}
	*head = prev;
	return (prev);
}
