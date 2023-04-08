#include "main.h"

/**
* _memset - the function name
* @s: parameter of type char* .
* @b: parameter of type char .
* @n: parameter of type int .
* Return: char*
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; s[i] != '\0' && i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
