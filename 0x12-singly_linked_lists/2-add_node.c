#include "lists.h"
#include <string.h>
/**
 * add_node - adds a  node at the beginning
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t char_num;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (char_num = 0; str[char_num]; char_num++)
		;

	new_node->len = char_num;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
