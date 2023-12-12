#include <stdio.h>
#include "search_algos.h"

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
 * binary_search_mod - a procedure that performs a modified binary search
 * on a presumably sorted array
 * and returns the first occurrence of the target item
 * @array: the array of sorted arrays
 * whether the target element is duplicate or not
 * @low: the lower bound of the search range
 * @high: the upper bound of the search range
 * @value: the target value
 * @size: the size of the input array
 * @duplicate: A boolean that resolves to
 * Return: the first occurrence of the target or -1
 **/
static int binary_search_mod(int *array, size_t low, size_t high,
	int value, size_t size, int duplicate)
{
	size_t mid = (low + high) >> 1;
	int new_mid = -1, res_index;

	if (low > high || !array)
		return (-1);
	if (!duplicate)
		print_sequence(array + low, high - low + 1);
	else
		print_sequence(array + low, min(high - low + 2, size));

	if (array[mid] > value)
	{
		res_index = binary_search_mod(array, low, mid - 1, value, size, duplicate);
	}
	else if (array[mid] < value)
	{
		res_index = binary_search_mod(array, mid + 1, high, value, size, duplicate);
	}
	else
	{
		if (array[mid] == array[mid - 1] ||
			array[mid] == array[mid + 1])
			duplicate = 1;
		new_mid = binary_search_mod(array, low, mid - 1, value, size, duplicate);

		if (new_mid == -1)
			res_index = mid;
		else
			res_index = new_mid;
		return (res_index);
	}

	return (res_index);

}

/**
 * advanced_binary - a function that implements the binary search algorithm
 * and returns the first occurrence of the target item
 * @array: the array of sorted arrays
 * @size: the size of the input array - n
 * @value: the target value
 * Return: the first occurrence of the target or -1
 **/
int advanced_binary(int *array, size_t size, int value)
{
	size_t mid = (size) >> 1;
	int duplicate = 0;

	if (((array[mid] == array[mid - 1]) && (array[mid] == value)) ||
		((array[mid] == array[mid + 1]) && (array[mid] == value)))
		duplicate = 1;


	return (binary_search_mod(array, 0, size - 1, value, size, duplicate));
}
