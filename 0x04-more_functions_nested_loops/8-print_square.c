#include "main.h"
#include <stdio.h>

/**
 * print_square - a function that draws a
 * square on the terminal
 * with rows and columns as many times
 * as the given parameter
 * @size: the integer parameter
 * Return - void
 **/

void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar((int)'\n');
	}
	else
		{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar((int)'#');
			}
			_putchar((int)'\n');
		}
	}
}
