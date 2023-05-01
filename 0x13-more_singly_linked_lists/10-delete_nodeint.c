#include "lists.h"

/**
 * delete_nodeint_at_index - a function that
 * deletes a node at a particular index
 * from the linked list
 * @head: the address of the head of the linked list
 * @index: the provided index
 * Return: int
 **/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *head_node, *tmp = NULL;
	unsigned int j = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	head_node = *head;
	if (index == 0)
	{
		(*head) = (head_node->next);
		free(head_node);
		return (0);
	}

	while (head_node->next && j < index - 1)
	{
		head_node = head_node->next;
		++j;
	}
	tmp = (head_node->next);
	if (tmp)
	{
		head_node->next = (tmp)->next;
		tmp->next = NULL;
		head_node = *head;
	}
	else
	{
		head_node->next = NULL;
	}
	free(tmp);

	return (j);
}
