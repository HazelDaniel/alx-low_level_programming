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
		exit(98);
	fast = (listint_t *)head->next;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		if (fast == slow)
		{
			printf("%d\n", fast->next->n);
			printf("%d\n", fast->next->next->n);
			list_sum += 2;
			return (list_sum);
		}
		h = h->next;
		if (fast != NULL && fast->next != NULL)
		{
			fast = fast->next->next;
			slow = slow->next;
		}

		++list_sum;
	}
	return (list_sum);
}
