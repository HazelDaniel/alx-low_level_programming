#include "main.h"
#include <stdio.h>
#include <stdint.h>
#include <limits.h>

/**
 * set_bit - a function that sets the bit
 * of a number at a provided index to 1
 * @n: parameter of type unsigned long *
 * @index: parameter of type unsigned int
 * Return: int
 **/
int set_bit(unsigned long *n, unsigned int index)
{
	unsigned int max = 63, j = 1;

	if (index > max || (int)index < 0)
		return (-1);

	j = 1 << index;
	*n |= j;

	return (1);
}
