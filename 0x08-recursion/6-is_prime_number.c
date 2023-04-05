#include "main.h"

int is_prime(int n, int divisor);

/**
  * is_prime_number - checks if a number is prime
	* using recursion.
  * @n: parameter of type int .
  * Return: int .
 */
int is_prime_number(int n)
{
	int base_divisor = 2;

	return (is_prime(n, base_divisor));
}

/**
  * is_prime - helper function for the
	* is_prime_number function
  * @n: parameter of type int .
  * @divisor: parameter of type int .
  * Return: int .
 */
int is_prime(int n, int divisor)
{
	if (n <= 2)
	{
		if (n == 2)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	if (n % divisor == 0)
	{
		return (0);
	}
	if (divisor * divisor > n)
	{
		return (1);
	}
	return (is_prime(n, divisor + 1));
}
