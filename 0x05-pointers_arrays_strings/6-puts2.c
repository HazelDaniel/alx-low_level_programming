#include "main.h"

/**
* puts2 - prints odd numbered chars in a string
* @str: a pointer char(s)
* Return: Always void
**/

void puts2(char *str)
{
	int s_count = 0;

	while (str[s_count] != '\0')
	{
		if (s_count % 2 == 0)
		{
			_putchar(*(str + s_count));
		}
		s_count++;
	}
	_putchar((int)'\n');
}
