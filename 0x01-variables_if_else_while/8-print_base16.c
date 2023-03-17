#include <stdio.h>
#include <wchar.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	wchar_t n = 0x30;
	char term = '\n';

	while (n < 58)
	{
		putchar(n++);
	}

	n = 0x61;

	while (n < 103)
	{
		putchar(n++);
	}

	putchar(((int)term));
	return (0);
}
