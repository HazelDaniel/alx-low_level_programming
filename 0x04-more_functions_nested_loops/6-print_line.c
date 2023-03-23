#include "main.h"

/**
 * print_line - a function that draws a straight
 * line on the terminal as many times
 * as the given parameter
 * @n: the integer parameter
 * Return - void
 **/

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar((int)'\n');
	}
	else
		{
		while (n-- > 0)
		{
			_putchar((int)'_');
		}
		_putchar((int)'\n');
	}
}
