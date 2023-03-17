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
		if (!(n == 101 || n == 113))
		{
			putchar(n++);
		}
		else
			n++;
	}
	putchar(((int)term));
	return (0);
}
