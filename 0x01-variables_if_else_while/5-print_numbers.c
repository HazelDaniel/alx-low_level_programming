#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 0;
	char term = '\n';

	while (n < 10)
	{
		printf("%d", n++);
	}

	putchar(((int)term));
	return (0);
}
