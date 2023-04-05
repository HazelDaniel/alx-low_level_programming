#include "main.h"

/**
  * _puts_recursion - a function that print s
	* a string using recursion
  * _puts_recursion - the function name
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
