#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function.
 * Return: no return.
 */
void print_all(const char * const format, ...)
{
	va_list va_args;
	unsigned int i = 0, j, c = 0;
	char *curr_str;
	char *opts = "cifs";

	va_start(va_args, format);
	while (format && format[i])
	{
		j = 0;
		while (opts[j])
		{
			if (format[i] == opts[j] && c)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(va_args, int)), c = 1;
			break;
		case 'i':
			printf("%d", va_arg(va_args, int)), c = 1;
			break;
		case 'f':
			printf("%f", va_arg(va_args, double)), c = 1;
			break;
		case 's':
			curr_str = va_arg(va_args, char *), c = 1;
			if (!curr_str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", curr_str);
			break;
		} i++;
	}
	printf("\n"), va_end(va_args);
}
