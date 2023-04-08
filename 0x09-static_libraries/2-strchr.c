#include "main.h"

/**
* _strchr -  A function that returns a
* string that contains the first occurrence
* of a character in another string
* @s: parameter of type char* .
* @c: parameter of type char .
* Return: char* .
*/
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
	{
		if (s[index] == c)
		{
			break;
		}
	}
	if (s[index] == c)
	{
		s += index;
	}
	else
	{
		return (NULL);
	}
	return (s);
}
