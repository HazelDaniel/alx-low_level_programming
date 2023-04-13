#include "main.h"

/**
  * array_range - the function name
  * @min: parameter of type int .
  * @max: parameter of type int .
  * Return: int *.
 */
int *array_range(int min, int max)
{
	int i, *temp_ptr = NULL;

	if (min > max)
	{
		return (NULL);
	}
	temp_ptr = (int *)malloc(max * sizeof(int) + 1);
	if (temp_ptr == NULL)
	{
		return (temp_ptr);
	}
	for (i = min; i <= max; i++)
	{
		*(temp_ptr + i) = i;
	}
	return (temp_ptr);
}
