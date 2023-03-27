#include "main.h"

/**
* _puts - prints a string
* @str: a pointer char(s)
* Return: Always void
**/

void _puts(char *str)
{
	while (*str++ != '\0')
	{
		_putchar(*str);
	}
	_putchar((int)'\n');
}
