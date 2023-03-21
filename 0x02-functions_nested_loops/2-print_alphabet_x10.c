#include "main.h"

/**
* void print_alphabet_x10 - check the code
*
* Return: Always void.
*/

void print_alphabet_x10(void)
{
	int i = 0;

	for (; i < 10; i++)
	{
		int n = 97;
		char term = '\n';

		while (n < 123)
		{
			_putchar(n++);
		}
		_putchar(((int)term));
	}
}
