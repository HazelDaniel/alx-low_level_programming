#include "main.h"

/**
* print_array - a function that prints
* every elements in an array of integers
* @a: array of integers
* @n: number of elements
**/

void print_array(int *a, int n)
{
	int count;

	if (n <= 0)
		return;
	for (count = 0; count < n; count++)
	{
		if (count != n - 1)
		{
			printf("%d, ", a[count]);
		}
		else
		{
			printf("%d\n", a[count]);
		}
	}
}
