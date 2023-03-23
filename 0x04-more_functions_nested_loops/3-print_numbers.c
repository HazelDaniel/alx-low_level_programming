#include "main.h"
/**
 * print_numbers - a function that prints numbers, from 0 to 9
 * followed by a new line
 *
 * Returns - Always void
 **/

void print_numbers(void)
{
	int num = 48;

	while (num < 58)
	{
		_putchar(num++);
	}
	_putchar((int)'\n');

}
