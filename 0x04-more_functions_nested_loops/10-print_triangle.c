#include "main.h"
#include <stdio.h>

/**
 * print_triangle - a function that draws a
 * triangle on the terminal
 * with rows and columns as many times
 * as the given parameter
 * @size: the integer parameter
 * Return - void
 **/

void print_triangle(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar((int)'\n');
	}
	else
		{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				if (j <= (size - i))
				{
					_putchar((int)' ');
				}
				else
				{
					_putchar((int)'#');
				}
			}
			_putchar((int)'\n');
		}
	}
}
