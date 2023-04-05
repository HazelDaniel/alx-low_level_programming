#include "main.h"

/**
* _print_rev_recursion - a function that
* prints a string reversed
* using recursion
* @s: parameter of type char *.
* Return: void .
*/
void _print_rev_recursion(char *s)
{
	if (*(s + 1) != '\0')
	{
		s++;
		_print_rev_recursion(s);
		putchar(*(s - 1));
		return;
	}
	else if (*(s) != '\0')
	{
		putchar(*s);
		return;
	}
}
