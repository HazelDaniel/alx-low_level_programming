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
 * binary_search - a function that performs a binary search
 * on a presumably sorted array
 * @array: the array of sorted arrays
 * @size: the length of the array
 * @value: the target value
 * Return: the first occurrence of the target or -1
 **/
int binary_search(int *array, size_t size, int value)
{
	size_t mid, low = 0, high = size - 1;

	if (!array)
		return (-1);

	print_sequence(array, high - low + 1);
	while (low <= high)
	{
		mid = (low + high) / 2;
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
