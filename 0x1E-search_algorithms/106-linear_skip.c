#include <stdio.h>
#include "search_algos.h"


/**
 * linear_skip - a function that performs a skip search on a skip
 * list.
 * @list: the skip list sorted in a non-decrementing order
 * @value: the target value
 * Return: the node corresponding to the target value or NULL
 **/
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *prev_lane, *curr = list;

	if (!list)
		return (NULL);

	for (prev_lane = curr; curr->next && curr->n < value;)
	{
		prev_lane = curr;
		if (curr->express)
		{
			curr = curr->express;
			printf("Value checked at index [%ld] = [%d]\n",
				curr->index, curr->n);
		}
		else
		{
			while (curr->next)
				curr = curr->next;
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
		prev_lane->index, curr->index);

	for (; prev_lane->index < curr->index
		&& prev_lane->n < value; prev_lane = prev_lane->next)
		printf("Value checked at index [%ld] = [%d]\n",
			 prev_lane->index, prev_lane->n);
	printf("Value checked at index [%ld] = [%d]\n",
		prev_lane->index, prev_lane->n);

	return (prev_lane->n == value ? prev_lane : NULL);
}
