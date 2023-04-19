#include "function_pointers.h"
/**
 * array_iterator - a function that runs
 * a function parameter at every iteration
 * of a given array parameter
 * @array: the array parameter of int
 * @action: the pointer to the associated
 * function
 * @size: the size of the array parameter
 * Return: void
 **/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (size > 0)

	for (; i < size; i++)
	{
		action(*(array + i));
	}
}
