#include "main.h"

/**
  * get_bit - a function that returns the nth
	* bit of an integer
  * @n: parameter of type unsigned long int .
  * @index: parameter of type unsigned int .
  * Return: int .
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	if (n == 0 && index < 64)
		return (0);
	for (; i < 64; n >>= 1, i++)
	{
		if (i == index)
			return (n & 1);
	}

	return (-1);
}
