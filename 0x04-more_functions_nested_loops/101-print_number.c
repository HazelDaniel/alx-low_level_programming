#include "101-print_number.h"

/**
 * print_number - prints any given number digit wise
 * @n: integer parameter
 * Returns - void
 **/

void print_number(int n)
{
	if (n >= 10)
	{
		if (n < 10)
		{
			return;
		}
		else
			{
			print_number(n/10);
			_putchar((n % 10) + 48);
		}
		first_dig(n);
	}
	else if (-n > 0)
	{
		_putchar((int)'-');
		print_number(-n);
	}
	else
	{
		_putchar(n + 48);
	}
}

/**
 * first_dig - prints any given number digit wise
 * @x: integer parameter
 * Returns - integer type
 **/

int first_dig(int x)
{
	int po = 0, init_x = x;

	while (x / 10 > 0)
	{
		po++;
		x /= 10;
	}
	return ((init_x / power(10, po)));
}

int power(int a, int b) {
	int result = 1;
	while (b > 0) {
		if (b % 2 == 1) {
			result *= a;
		}
		a *= a;
		b /= 2;
	}
	return result;
}
