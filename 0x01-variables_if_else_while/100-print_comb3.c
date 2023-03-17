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

	for (; n < 58; n++)
	{
		for (x = n; x < 58 ; x++)
		{
			if (n != x)
			{
				putchar(n);
				putchar(x);

				if (!(n == 56 && x == 57))
				{
					putchar((int)',');
					putchar((int)' ');
				}
			}
		}
	}
	putchar(((int)'\n'));
	return (0);

}
