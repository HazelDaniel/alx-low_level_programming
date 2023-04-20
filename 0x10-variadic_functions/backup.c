#include <stdio.h>
#include "variadic_functions.h"

void print_format(const char *format, unsigned int i, va_list va_args);

/**
 * print_all - a variadic function
 * that prints a given number of arguments
 * in their specified formats
 * @format: the format string
 * Return: void
 **/
void print_all(const char *const format, ...)
{
	char *opts = "cifs";
	unsigned int i = 0, j;
	va_list va_args;

	va_start(va_args, format);
	while (format[i])
	{
		j = 0;
		while (opts[j])
		{
			if (format[i] == opts[j])
			{
				print_format(format, i, va_args);
			}
			j++;
		}
		va_end(va_args), i++;
	}
	printf("\n");
}

/**
 * print_format - subroutine to the
 * print_all function
 * @format: the format string
 * @i: the current index
 * @va_args: the va_list object
 * Return: void
 **/
void print_format(const char *format, unsigned int i, va_list va_args)
{
	char *curr_str;

	switch ((int)(i == 0))
	{
	case 0:
		printf(", ");
	}
	switch (format[i])
	{
	case 'c':
		printf("%c", va_arg(va_args, int));
		break;
	case 'i':
		printf("%d", va_arg(va_args, int));
		break;
	case 's':
		curr_str = va_arg(va_args, char*);
		if (curr_str)
			printf("%s", curr_str);
		else
			printf("%s", "(nil)");
		break;
	case 'f':
		printf("%f", va_arg(va_args, double));
		break;
	}
}
