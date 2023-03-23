#include <stdio.h>
#include "main.h"
#include <math.h>

/**
 * main - The entry point into the program
 * Return: - always void
 **/

int main(void)
{
	prime_factor();
	return (0);
}

/**
 * prime_factor - a function that prints
 * prime factors of 612852475143
 * Returns - always void
 **/

void prime_factor(void)
{
	long num = 612852475143L;
	long highest_PF = 0;
	long counter;
	long p_f;

	for (counter = 1; counter <= sqrt(num); counter++)
	{
		p_f = (6 * counter) - 1;
		if (num % p_f == 0)
		{
			if (p_f >= highest_PF)
				highest_PF = p_f;

		}
		p_f = (6 * counter) + 1;
		if (num % p_f == 0)
		{
			if (p_f >= highest_PF)
				highest_PF = p_f;
		}
	}
	printf("%ld\n", highest_PF);

}
