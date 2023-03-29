#include "main.h"

/**
 * print_number - prints any given number digit wise
 * @n: integer parameter
 * Return: - void
 **/

void print_number(int n)
{
	int dig_base = 10;
	int asc_num_base = 48;
	int dig_least = 0;

	if (n >= dig_base)
	{
		if (n < dig_base)
		{
			return;
		}
		else
			{
			print_number(n / dig_base);
			_putchar((n % dig_base) + asc_num_base);
		}
		first_dig(n);
	}
	else if (-n > dig_least)
	{
		_putchar((int)'-');
		print_number(-n);
	}
	else
	{
		_putchar(n + asc_num_base);
	}
}

/**
 * first_dig - prints any given number digit wise
 * @x: integer parameter
 * Return: - integer type
 **/

int first_dig(int x)
{
	int dig_base = 10;
	int dig_least = 0;
	int po = 0, init_x = x;

	while (x / dig_base > dig_least)
	{
		po++;
		x /= dig_base;
	}
	return ((init_x / power(dig_base, po)));
}

/**
 * power - returns the value of an integer
 * raised to the power (another integer)
 * @a: integer parameter
 * @b: integer parameter
 * Return: - integer type
 **/

int power(int a, int b)
{
	int even_base = 2, unity = 1;
	int dig_least = 0;
	int result = 1;

	while (b > dig_least)
	{
		if (b % even_base == unity)
			result *= a;
		a *= a;
		b /= even_base;
	}
	return (result);
}
