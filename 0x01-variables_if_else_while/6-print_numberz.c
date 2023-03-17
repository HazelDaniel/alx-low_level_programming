#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 48;

	while (n < 58)
	{
		putchar(n++);
	}

	putchar(((int)'\n'));
	return (0);
}
