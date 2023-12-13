#include <stdio.h>
#include "search_algos.h"
#include <math.h>


/**
 * min - a function that ... figure it out sherlock!
 * @x: the first operand
 * @y: the second operand
 * Return: maximum
 **/
size_t min(size_t x, size_t y)
{
	if (x < y)
		return (x);
	return (y);
}

/**
 * print_range - prints a sequence of integers
 * at indices in a specified range
 * @start: the starting index
 * @end: the ending index
 * @size: the length of the sequence array
 * @array: the sequence array
 * Return: void
 **/
void print_range(size_t start, size_t end, size_t size, int *array)
{
	size_t l;

	printf("Value found between indexes [%u] and [%u]\n",
		(unsigned int)start, (unsigned int)end);
	for (l = start; l < size && l <= end; l++)
		printf("Value checked array[%u] = [%d]\n", (unsigned int)l, array[l]);
}

/**
 * print_value_checked - prints a value given its index
 * @index: the provided index
 * @array: the array containing the value
 * Return: void
 **/
void print_value_checked(int *array, size_t index)
{
	printf("Value checked array[%u] = [%d]\n", (unsigned int)index, array[index]);
}

/**
 * jump_search - a function that implements the jump search
 * algorithm on a sorted array and prints the sequence for
 * each step
 * @array: the input array
 * @size: the length of the array
 * @value: the target value
 * Return: the first occurrence of the target value
 **/
int jump_search(int *array, size_t size, int value)
{
	size_t m = (size_t)sqrt(size), k = 1, i = 0, y = 0, x, j, tmp = 0;
	int v;

	if (!array)
		return (-1);
	while (i < size && y < size)
	{
		print_value_checked(array, y), y = min(m * k, size);
		if (y == size - 1)
			print_value_checked(array, y), tmp = y, y = m * (k + 1),
				print_range(tmp, y, size, array);
		if (array[y] > value)
		{
			x = m * (k - 1), j = y;
			while (j--, j >= x)
			{
				if (array[j] == value)
				{
					print_range(x, y, size, array);
					return (j);
				}
				else if (array[j] < value)
				{
					return (-1);
				}
			}
		}
		else if (array[y] == value)
		{
			print_range(tmp, y, size, array);
			return (y);
		}
		i++, k++, tmp = y, v = y;
	}
	if (v >= (int)size)
		for (v = size; v >= 0; --v)
			if (array[v] == value)
				return (v);
	return (-1);
}