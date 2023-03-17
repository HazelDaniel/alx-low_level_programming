#include <stdlib.h>
#include <stdio.h>

/**
*main - Entrypoint
*
*Return: Always 0(Success)
*/

int main(void)
{

	int n = 48;
	int x = 48;
	int y = 48;

	for (; n < 58; n++)
	{
		for (x = n; x < 58 ; x++)
			for (y = x; y < 58; y++)
				if ((n != x && x != y && y != n) && (n < x && x < y))
				{
					putchar(n);
					putchar(x);
					putchar(y);

					if (!(n == 55 && x == 56 && y == 57))
					{
						putchar((int)',');
						putchar((int)' ');
					}
				}

	}
	putchar(((int)'\n'));
	return (0);

}
