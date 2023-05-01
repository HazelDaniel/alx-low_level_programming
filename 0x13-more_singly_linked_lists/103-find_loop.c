#include "lists.h"

/**
 * find_listint_loop - a function that
 * finds a loop in a linked list
 * @head: the head of the linked list
 * Return: listint_t
 **/
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head, *fast = head;

	while (head != NULL)
	{
		head = head->next;
		if (fast != NULL && fast->next != NULL)
		{
			fast = fast->next->next;
			slow = slow->next;

			if (fast == slow)
				return (slow);
		}
	}
	return (NULL);
}
