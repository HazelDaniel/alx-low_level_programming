#include "function_pointers.h"

/**
 * int_index - a function that runs
 * a parameter function at every iteration
 * of the provided array parameter
 * @array: the array parameter of int
 * @size: the size of the array
 * @cmp: the pointer to the assiciated
 * function
 * Return: int
 **/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(*(array + i)) != 0)
			return (i);
	}
	return (-1);
}
