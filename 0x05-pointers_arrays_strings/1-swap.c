#include "main.h"

/**
* swap_int - swaps the values of two integers.
* @a: a pointer to an int as the first parameter
* @b: a pointer to int as the second parameter
* Return: Always void
**/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
