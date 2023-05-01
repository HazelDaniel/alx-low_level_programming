#include "lists.h"

/**
 * sum_listint - a function that
 * returns the sum of values of nodes in a linked
 * list
 * @head: the head of the linked list
 * Return: int
 **/
int sum_listint(listint_t *head)
{
	listint_t *head_node = head;
	int sum = 0;

	if (head_node == NULL)
		return (0);

	while (head_node)
	{
		head_node = head_node->next;
		++sum;
	}
	return (sum);
}
