#include "main.h"
int square_root_bin_search(int n, int start, int end);

/**
  * _sqrt_recursion - a function that calculates the
	* natural square root of a given integer
	* recursively
  * @n: parameter of type int .
  * Return: int .
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1 || n == 0)
	{
		return (n);
	}
	return (square_root_bin_search(n, 1, n / 2));
}

/**
  * square_root_bin_search - a function that searches
	* if the square root of a number is in a given
	* range
  * @n: parameter of type int .
  * @start: parameter of type int .
  * @end: parameter of type int .
  * Return: int .
 */
int square_root_bin_search(int n, int start, int end)
{
	int mid, mid_square;
	int square_root;

	if (start > end)
		return (-1);
	mid = (start + end) / 2;
	mid_square = mid * mid;
	if (mid_square == n)
	{
		square_root = mid;
	}
	else if (mid_square > n)
	{
		square_root = square_root_bin_search(n, start, mid - 1);
	}
	else
	{
		square_root = square_root_bin_search(n, mid + 1, end);
	}
	return (square_root);
}
