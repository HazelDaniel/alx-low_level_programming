#include "variadic_functions.h"
/**
 * sum_them_all - a function
 * that returns a sum of all it's
 * variable argument
 * @n: the required parameter
 * serving as the size of the list
 * Return: int
 **/
int sum_them_all(const unsigned int n, ...)
{
	va_list arg_list;
	unsigned int i, sum = 0;

	va_start(arg_list, n);
	if (n == 0)
		return (n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(arg_list, int);
	}
	va_end(arg_list);
	return (sum);
}
