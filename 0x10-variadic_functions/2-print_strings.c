#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - a variadic function that
 * prints string paramaters
 * @separator: the delimiter
 * @n: the size of the optional arguments
 * Return: void
 **/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg_list;
	char *curr;

	va_start(arg_list, n);
	for (i = 0; i < n; i++)
	{
		curr = va_arg(arg_list, char*);
		if (curr)
			printf("%s", curr);
		else
			printf("%s", "(nil)");
		if (separator && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
