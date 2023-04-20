#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - a variadic function
 * that prints all integer parameters
 * @separator: the delimiter
 * @n: the number of optional arguments
 * Return: void
 **/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg_list;

	va_start(arg_list, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arg_list, int));
		if (separator && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
