#include "lists.h"

/**
 * sum_dlistint - a function that returns the sum
 * of the values of the nodes in a doubly linked list
 * @head: the head of the linked list
 * Return: int
 **/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
