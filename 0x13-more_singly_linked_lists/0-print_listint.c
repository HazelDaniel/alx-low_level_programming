#include "lists.h"

/**
 * print_listint - a function that
 * prints a linked list
 * @h: the head of the linked list
 * Return: size_t
 **/
size_t print_listint(const listint_t *h)
{
	size_t list_sum = 0;
	listint_t *head = (listint_t *)h;

	while (head != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
		++list_sum;
	}

	return (list_sum);
}
