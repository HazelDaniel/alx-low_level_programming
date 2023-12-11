#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - a function that performs a linear search
 * on an array of integers
 * @array: the array in question
 * @size: the length of the array
 * @value: the target value
 * Return: the first index with the first occurrence of the target
 * value or -1
 **/
int linear_search(int *array, size_t size, int value)
{
	size_t ind = 0;

	if (!array)
		return (-1);

	while (ind < size)
	{
		printf("Value checked array[%u] = [%d]\n", (unsigned int)ind, array[ind]);
		if (array[ind] == value)
			return (ind);
		ind++;
	}
	return (-1);
}
