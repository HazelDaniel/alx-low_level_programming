#include "lists.h"

/**
 * free_listint - a function that
 * frees a linked list
 * @head: the head of the linked list
 * Return: void
 **/
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	if (head->next == NULL)
	{
		free(head);
		return;
	}
	free_listint(head->next);
	free(head);
}
