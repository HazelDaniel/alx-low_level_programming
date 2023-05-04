#include "main.h"

/**
 * flip_bits - a function that returns the number
 * of bit flips required to get to one integer
 * from another
 * @n: the first integer parameter
 * @m: the second integer parameter
 * Return: unsigned int
 **/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int ex, flips = 1;

	ex = m ^ n;
	if (!ex)
	{
		flips = 0;
		return (flips);
	}

	while (ex >> 1 > 0)
	{
		if (ex & 1)
			flips++;
		ex >>= 1;
	}
	return (flips);
}
