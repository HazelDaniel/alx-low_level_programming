#include "lists.h"

/**
 * free_listint_safe - a function that
 * frees a linked list even with loops
 * @h: the address of the head of the linked list
 * Return: size_t
 **/
size_t free_listint_safe(listint_t **h)
{
	listint_t *curr = *h, *prev, *fast = (*h)->next,
	*slow = *h;
	unsigned int s_list = 0;

	while (curr != NULL)
	{
		prev = curr;
		curr = curr->next;
		if (fast != NULL && fast->next != NULL)
		{
			fast = fast->next->next;
			slow = slow->next;
			++s_list;
		}
		if (fast == slow)
		{
			s_list += 2;
			exit(98);
		}
		free(prev);
	}

	*h = NULL;
	return (s_list);
}
