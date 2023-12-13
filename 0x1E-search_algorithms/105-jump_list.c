#include <stdio.h>
#include "search_algos.h"
#include <math.h>
#include "utils/utils-1.c"

/* BUGFIX: there's an edge case not properly -
 * handled - cases where we have one item in the list and the node
 * value doesn't correspond to the given value. try to fix it
 * */

/**
 * pr - prints a sequence of integers
 * given the starting node and the end node unless
 * a node with the specified value is met
 * @start_index: the starting index
 * @end_index: the ending index
 * @curr_node: the node to traverse from
 * @value: the value serving as a break point if encountered in the sequence
 * Return: void
 **/
void pr(size_t start_index, size_t end_index, listint_t *curr_node, int value)
{
	listint_t *curr = curr_node, *curr_end = NULL;

	if (!curr)
		return;

	for (; curr && curr->index < start_index; curr = curr->next)
		;
	if (!curr)
		return;

	for (curr_end = curr; curr_end; curr_end = curr_end->next)
	{
		if (curr_end->index >= end_index)
			break;
	}
	if (!curr_end || !curr)
		return;

	printf("Value found between indexes [%lu] and [%lu]\n",
		start_index, end_index);
	for (; curr && curr->index <= curr_end->index; curr = curr->next)
	{
		printf("Value checked at index [%lu] = [%d]\n", curr->index, curr->n);
		if (curr->n == value)
			break;
	}
}

/**
 * pvc - prints a node value
 * @root: the current node in the list
 * @index: the index of the node to print
 * Return: void
 **/
void pvc(listint_t *root, size_t index)
{
	listint_t *curr = root;

	if (!curr)
		return;


	for (; curr && curr->index < index; curr = curr->next)
		;
	if (curr)
		printf("Value checked at index [%lu] = [%d]\n", curr->index, curr->n);
}

/**
 * jumpf_to_check - a function that pushes a node forward to a specified
 * index in the linked list (if it exists) and returns any matching
 * node with the corresponding value if it exists
 * @root: the node to push
 * @dest: the destination index
 * @value: the value to check against
 * Return: the node at the destination index
 * NOTE: damn! how do we jump back in a singly-linked list?
 *	ANSWER: lucky for you luv, i have a plan
 **/
listint_t *jumpf_to_check(listint_t *root, size_t dest, int value)
{
	listint_t *curr = root;

	if (!curr)
		return (NULL);

	for (; curr && curr->index < dest && curr->n != value; curr = curr->next)
		;
	return (curr);
}

/**
 * jumpf_to - a function that pushes a node forward to a specified
 * index in the linked list (if it exists)
 * @root: the node to push
 * @dest: the destination index
 * Return: the node at the destination index
 **/
listint_t *jumpf_to(listint_t *root, size_t dest)
{
	listint_t *curr = root;

	if (!curr)
		return (NULL);

	for (; curr && curr->index < dest; curr = curr->next)
		;
	return (curr);
}

/**
 * jump_list - a function that performs jump search on a linked
 * list
 * @list: the head of the linked list
 * @size: the size of the linked list
 * @value: the value of the target node
 * Return: the target node
 **/
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t m = (size_t)sqrt(size), k = 1, i = 0, y = 0, x, j, tmp = 0, j_diff = 0;
	listint_t *curr = list, *tmp_node = NULL, *prev = NULL;

	if (!curr)
		return (NULL);
	if (curr->n == value)
		return (curr);
	while (i < size && y < size)
	{
		if ((y) && !(y % m))
			pvc(curr, y);
		y = min(m * k, size - 1);
		if (y == size - 1)
		{
			if (curr->n < value)
				pvc(curr, y);
			tmp = y, y = m * (k + 1), pr(tmp, y, curr, value);
			if (curr->n < value)
				tmp_node = jumpf_to(curr, tmp),
				pr(curr->index, tmp_node->index, curr, value);
		}
		if (curr->n > value)
		{
			x = m * (k - 1), j = y, j_diff = j - x;
			tmp_node = jumpf_to_check(prev, prev->index + j_diff, value);
			if (!tmp_node)
				return (NULL);
			if (tmp_node->n == value)
				pr(prev->index, curr->index, prev, value);
			return (tmp_node->n == value ? tmp_node : NULL);
		}
		else if (curr->n == value)
		{
			pr(tmp, y, prev, value);
			return (curr);
		}

		prev = curr, curr = jumpf_to(curr, y), i++, k++, tmp = y;
	}
	return (NULL);
}
