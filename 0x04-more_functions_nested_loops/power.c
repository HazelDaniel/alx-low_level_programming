#include <stdio.h>

/**
 * main - The entry point into the program
 * @a: the first integer parameter
 * @b: the second integer parameter
 * Returns - always int
 **/

int power(int a, int b)
{
	int result = 1;
	while (b > 0)
	{
		if (b % 2 == 1)
		{
			result *= a;
		}
		a *= a;
		b /= 2;
	}
	return (result);
}

/**
 * main - The entry point into the program
 * Returns - always int
 **/

int main(void)
{
	int a = 2;
	int b = 5;
	int result = power(a, b);

	printf("%d^%d = %d\n", a, b, result);
	return (0);
}
