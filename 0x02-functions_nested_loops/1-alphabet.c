#include "main.h"

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/


/**
* print_alphabet - a function that prints all the lower case alphabets
*
* Return: Always void
*/

void print_alphabet(void)
{
	int n = 97;
	char term = '\n';

	while (n < 123)
	{
		_putchar(n++);
	}
	_putchar(((int)term));
}
