#include "main.h"

/**
* print_rev - swaps the values of two integers.
* @s: a pointer to char(s)
* Return: Always void
**/

void print_rev(char *s)
{
	int count = 0;
	int i;
	char *s_cp = s;

	while (*s++ != '\0')
	{
		count++;
	}
	for (i = count; i >= 0; i--)
	{
		_putchar(*(s_cp + i));
	}
	_putchar('\n');
}
