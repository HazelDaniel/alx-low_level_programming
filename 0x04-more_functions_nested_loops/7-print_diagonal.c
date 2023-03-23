#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - a function that draws a
 * diagonal on the terminal as many times
 * as the given parameter
 * @n: the integer parameter
 * Return - void
 **/

void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar((int)'\n');
	}
	else
		{
		for (i = 0; i < n; i++)
		{
			for (j = i; j > 0; --j)
			{
				_putchar((int)' ');
			}
			_putchar((int)'\\');
			_putchar((int)'\n');
		}
	}
}
