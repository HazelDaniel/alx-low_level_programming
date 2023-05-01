#include "lists.h"

/**
 * free_listint2 - a function that
 * frees a linked list when provided the address
 * of the head node
 * @head: the address of the head of the linked list
 * Return: void
 **/
void free_listint2(listint_t **head)
{
	if (*head == NULL)
		return;
	if ((*head)->next == NULL)
	{
		free(*head);
		return;
	}
	free_listint2(&((*head)->next));
	free((*head));
	(*head) = NULL;
}
