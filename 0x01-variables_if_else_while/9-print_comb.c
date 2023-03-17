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
		if (n != 58)
		{
			putchar(44);
			putchar((int)' ');
		}
	}

	putchar(((int)'\n'));
	return (0);
}
