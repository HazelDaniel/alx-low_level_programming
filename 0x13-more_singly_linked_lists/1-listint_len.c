#include "lists.h"

/**
 * listint_len - a function that
 * returns the length of a linked list
 * @h: head of the linked list
 * Return: size_t
 **/
size_t listint_len(const listint_t *h)
{
	size_t list_sum = 0;
	listint_t *head = (listint_t *)h;

	while (head != NULL)
	{
		head = head->next, ++list_sum;
	}

	return (list_sum);
}
