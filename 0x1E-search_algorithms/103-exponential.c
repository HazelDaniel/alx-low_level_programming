#include <stdio.h>
#include "search_algos.h"

/**
 * print_sequence - what it says it does sherlock!
 * @array: a sub-sequence to print
 * @size: the length of the sub-sequence
 * Return: void
 **/
static void print_sequence(int *array, size_t size)
{
	size_t i = 0;

	if (!array || !size)
		return;

	printf("Searching in array: ");
	while (i < size)
	{
		if (!i)
			printf("%d", array[i]);
		else
			printf(", %d", array[i]);
		i++;
	}
	printf("\n");
}

/**
 * binary_search_mod - a function that performs a modified binary search
 * on a presumably sorted array
 * @array: the array of sorted arrays
 * @low: the lower bound of the search range
 * @high: the upper bound of the search range
 * @value: the target value
 * Return: the first occurrence of the target or -1
 **/
static int binary_search_mod(int *array, size_t low, size_t high, int value)
{
	size_t mid = (low + high) >> 1;

	if (!array)
		return (-1);

	print_sequence(array + low, high - low + 1);
	while (low <= high)
	{
		mid = (low + high) >> 1;
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] > value)
		{
			print_sequence(array, mid);
			high = mid - 1;
		}
		else
		{
			print_sequence(array + mid + 1, high - mid);
			low = mid + 1;
		}
	}

	return (-1);
}

/**
 * min - a function that returns the ... figure it out sherlock!
 * @a: first operand
 * @b: second operand
 * Return: the minimum, loser
 **/
size_t min(size_t a, size_t b)
{
	if (a < b)
		return (a);
	return (b);
}

/**
 * exponential_search - a function that implements an exponential search
 * on an array of presummably sorted items. the search range is increased
 * exponentially until some element i greater than the target value is
 * found. then, from that point down to the last exponential range, a
 * binary search is performed to locate the item
 *
 * @array: the array of sorted arrays
 * @size: the length of the array
 * @value: the target value
 * Return: the first occurrence of the target or -1
 **/
int exponential_search(int *array, size_t size, int value)
{
	size_t exp = 1, exp_old = 0, res_index;

	if (!array)
		return (-1);

	while (array[exp] <= value && exp < size)
	{
		printf("Value checked array[%u] = [%d]\n", (unsigned int)exp, array[exp]);
		exp_old = exp;
		exp = exp << 1;
	}

	if (exp_old == exp - 1)
	{
		if (array[exp_old] == value)
			return (exp_old);
		else
			return (-1);
	}
	printf("Value found between indexes [%u] and [%u]\n",
				(unsigned int)exp_old, (unsigned int)min(exp, size - 1));
	res_index = binary_search_mod(array, exp_old, min(exp, size - 1), value);

	return (res_index);
}
