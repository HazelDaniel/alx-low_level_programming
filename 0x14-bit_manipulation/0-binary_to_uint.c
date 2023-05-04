#include "main.h"
#include <string.h>

int _to_digit(char c);
int in_str(char *str, char c);

/**
  * binary_to_uint - a function that returns
	* the integer equivalent of a binary
  * @b: parameter of type char* .
  * Return: unsigned int .
 */
unsigned int binary_to_uint(const char *b)
{
	int dig = 0, i, x = 1;

	if (!b)
		return (0);
	i = strlen(b) - 1;

	for (; i >= 0;)
	{
		if (_to_digit(b[i]) < 0 || _to_digit(b[i]) > 9)
			return (0);
		dig += _to_digit(b[i--]) * x;
		x *= 2;
	}
	return (dig);
}

/**
  * _to_digit - a function that returns
	* the integer equivalent of a character
  * @c: parameter of type char .
  * Return: unsigned int .
 */
int _to_digit(char c)
{
	return (c - '0');
}

/**
  * in_str - a function that checks
	* if a character is in a string
  * @str: parameter of type char *.
  * @c: parameter of type char .
  * Return: int .
 */
int in_str(char *str, char c)
{
	int index = 0;

	while (str[index] != '\0')
	{
		if (str[index++] == c)
			return (1);
	}
	return (0);
}
