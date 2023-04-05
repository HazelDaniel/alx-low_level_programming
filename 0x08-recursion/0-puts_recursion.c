#include "main.h"

/**
  * _puts_recursion - a function that prints
	* a string using recursion
  * @s: parameter of type char *.
  * Return: void .
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	s++;
	_puts_recursion(s);
}
