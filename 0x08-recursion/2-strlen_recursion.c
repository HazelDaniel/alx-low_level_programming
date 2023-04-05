#include "main.h"

/**
* _strlen_recursion - the function name
* @s: parameter of type char *.
* Return: int .
*/
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s == '\0')
	{
		return (count);
	}
	else
	{
		count = 1;
	}
	s++;
	count += _strlen_recursion(s);
	return (count);
}
