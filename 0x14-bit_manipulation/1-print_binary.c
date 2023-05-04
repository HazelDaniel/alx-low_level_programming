#include "main.h"

char _to_char(short n);

/**
  * print_binary - a function that prints
	* the binary representation of an integer
	* using bit manipulation
  * @n: parameter of type unsigned long int .
  * Return: void .
 */
void print_binary(unsigned long int n)
{
	if (n)
	{
		if (n >> 1)
		{
			print_binary(n >> 1);
			_putchar(_to_char(n & 1));
		}
		else
		{
			_putchar('1');
		}
	}
	else
	{
		_putchar('0');
	}
}

/**
  * _to_char - a function that returns
	* the character equivalent of an integer
  * @n: parameter of type short .
  * Return: char .
 */
char _to_char(short n)
{
	return (n + '0');
}
