#include "main.h"

/**
  * _print_rev_recursion - the function name
  * @s: parameter of type char *.
  * Return: void .
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		_print_rev_recursion(s);
		putchar(*s);
	}
	else
	{
		return;
	}
}
