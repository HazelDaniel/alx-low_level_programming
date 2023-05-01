#include "lists.h"

/**
 * print_listint_safe - a function that
 * prints a linked list even with loops
 * @head: the head of the linked list
 * Return: size_t
 **/
size_t print_listint_safe(const listint_t *head)
{
	size_t list_sum = 0;
	listint_t *h = (listint_t *)head;
	listint_t *slow = (listint_t *)head, *fast = (listint_t *)head;

	if (head == NULL)
		return (-1);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		if (fast != NULL && fast->next != NULL)
		{
			fast = fast->next->next;
			slow = slow->next;
		}
		if (fast == slow)
			exit(98);

		++list_sum;
	}
	return (list_sum);
}
