#include "main.h"

/**
* string_toupper - a function that converts lowercase
* characters of a string to upper case
* @s: the string parameter
* Return: string
**/
char *string_toupper(char *s)
{
	int count = 0;
	int i;

	while (s[count] != '\0')
	{
		count++;
	}
	for (i = 0; i < count; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] = (int)(s[i]) - 32;
		}
	}
	return (s);
}
