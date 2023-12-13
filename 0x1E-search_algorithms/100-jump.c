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
	size_t m = (size_t)sqrt(size), k = 1, i = 0, y = 0, x, j, tmp = 0, l = 0;

	(void)tmp;
	while (i < size)
	{
		if (y < size)
			printf("Value checked array[%u] = [%d]\n", (unsigned int)y, array[y]);
		y = min(m * k, size);
		if (y == size)
			return (-1);
		if (y == size - 1)
		{
			printf("Value checked array[%u] = [%d]\n", (unsigned int)y, array[y]);
			tmp = y, y = m * (k + 1);
			printf("Value found between indexes [%u] and [%u]\n", (unsigned int)tmp, (unsigned int)y);
			for (l = tmp; l < size && l <= y; l++)
				printf("Value checked array[%u] = [%d]\n", (unsigned int)l, array[l]);
		}

		if (array[y] > value)
		{
			x = m * (k - 1), j = y;
			while (j >= x)
			{
				if (array[j] == value)
				{
					printf("Value found between indexes [%u] and [%u]\n", (unsigned int)x, (unsigned int)y);
					for (l = x; l <= size - 1 && l <= j; l++)
						printf("Value checked array[%u] = [%d]\n", (unsigned int)l, array[l]);
					return (j);
				}
				else if (array[j] < value)
				{
					return (-1);
				}
				j--;
			}
		}
		else if (array[y] == value)
		{
			printf("Value found between indexes [%u] and [%u]\n", (unsigned int)tmp, (unsigned int)y);
			for (l = tmp; l <= size - 1 && l <= y; l++)
				printf("Value checked array[%u] = [%d]\n", (unsigned int)l, array[l]);
			return (y);
		}
		i++, k++;
		tmp = y;
	}

	return (-1);
}
