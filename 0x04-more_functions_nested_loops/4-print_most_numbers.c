#include "main.h"

/**
 * print_most_numbers - A function that prints digits
 * except 2 and 4
 * Return - always void
 **/

void print_most_numbers(void)
{
	int num = 48;

	while (num < 58)
	{
		if (num != 50 && num != 52)
			_putchar(num);
		num++;
	}
	_putchar((int)'\n');

}
