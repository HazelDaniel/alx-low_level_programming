#include "lists.h"

/**
 * get_nodeint_at_index - a function that
 * retrieves a node from a linked list provided it's index
 * @head: the head of the linked list
 * @index: the index provided
 * Return: listint_t
 **/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *head_node = head;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; head_node && i < index; i++)
		head_node = head_node->next;
	return (head_node);
}
