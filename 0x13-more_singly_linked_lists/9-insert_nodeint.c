#include "lists.h"

/**
 * insert_nodeint_at_index - a function that
 * inserts a node at a given position in the linked list
 * @head: the address of the head of the linked list
 * @idx: the index provided
 * @n: the value of the node
 * Return: listint_t
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *head_node_ptr, *tmp, *new;
	unsigned int j = 0;

	if (head == NULL || *head == NULL)
		return (NULL);
	head_node_ptr = *head;
	new = (listint_t *)malloc(sizeof(listint_t));
	while (head_node_ptr != NULL && j < idx - 1)
	{
		head_node_ptr = head_node_ptr->next;
		++j;
	}
	if (head_node_ptr == NULL)
	{
		free(new);
		return (NULL);
	}
	tmp = head_node_ptr->next;
	head_node_ptr->next = new;
	new->next = tmp;
	new->n = n;

	return (new);
}
