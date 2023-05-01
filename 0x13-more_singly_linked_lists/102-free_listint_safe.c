#include "lists.h"

/**
 * free_listint_safe - a function that
 * frees a linked list even with loops
 * @h: the address of the head of the linked list
 * Return: size_t
 **/
size_t free_listint_safe(listint_t **h)
{
	listint_t *curr = *h, *prev;
	listint_t *fast = *h, *slow = *h;

	while (curr != NULL)
	{
		prev = curr;
		curr = curr->next;
		if (fast != NULL && fast->next != NULL)
		{
			fast = fast->next->next;
			slow = slow->next;
		}
		if (fast == slow)
			exit(98);
		free(prev);
	}

	*h = NULL;
	return (0);
}
