#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 97;
	char term = '\n';

	while (n < 123)
	{
		putchar(n++);
	}

	n = 65;

	while (n < 91)
	{
		putchar(n++);
	}

	putchar(((int)term));
	return (0);
}
