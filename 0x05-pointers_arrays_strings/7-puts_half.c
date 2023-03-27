#include "main.h"

/**
* puts_half - prints odd numbered chars in a string
* @str: a pointer char(s)
* Return: Always void
**/

void puts_half(char *str)
{
	int s_count = 0;
	int mid;

	while (str[s_count] != '\0')
	{
		s_count++;
	}
	mid = (s_count - 1) / 2;
	mid++;
	for (; mid < s_count; ++mid)
	{
		_putchar(*(str + mid));
	}
	_putchar((int)'\n');
}
