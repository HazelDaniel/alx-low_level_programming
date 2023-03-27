#include "main.h"

/**
* _strlen - swaps the values of two integers.
* @s: a pointer to char(s)
* Return: Always int
**/

int _strlen(char *s)
{
	int count = 0;

	while (*s++ != '\0')
	{
		count++;
	}
	return (count);
}
