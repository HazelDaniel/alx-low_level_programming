#include <stdio.h>
#include "search_algos.h"


/**
 * interpolation_search - a function that performs an operation
 * on a presumably sorted array similar to binary search
 * but partitions the array uniformly based on the difference
 * between the elements, and their distance. it's more effecient
 * than binary search when the elements in the array are unique
 * and uniformly distributed
 * @array: the array of sorted arrays
 * @size: the length of the array
 * @value: the target value
 * Return: the first occurrence of the target or -1
 **/
int interpolation_search(int *array, size_t size, int value)
{
	size_t mid, low = 0, high = size - 1, tmp;

	if (!array)
		return (-1);

	while ((array[high] != array[low]) && (value <= array[high])
		&& (value >= array[low]))
	{
		mid = low + ((value - array[low]) * (high - low)
			/ (array[high] - array[low]));
		printf("Value checked array[%u] = [%d]\n", (unsigned int)mid, array[mid]);
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			high = mid - 1;
		else
			low = mid + 1;
	}
	tmp = array[mid] == value ? mid : array[low] == value ? low : 0;
	if (array[mid] == value || array[low] == value)
		return (tmp);

	mid = low + ((value - array[low]) * (high - low)
		/ (array[high] - array[low]));
	printf("Value checked array[%u] is out of range\n", (unsigned int)mid);
	return (-1);
}
