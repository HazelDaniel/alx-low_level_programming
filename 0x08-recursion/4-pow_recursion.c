#include "main.h"

/**
  * _pow_recursion - a function that recursively
	* calculates the positive powers of integers
  * @x: parameter of type int .
  * @y: parameter of type int .
  * Return: int .
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	y--;
	return (x * _pow_recursion(x, y));
}
