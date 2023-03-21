#include "main.h"

/**
* print_times_table - check the code
*@n: an integer parameter
* Return: Always void.
*/

void print_times_table(int n)
{
	if (n <= 15 && n >= 0)
	{   
	int  y;  

		for (y = 0; y <= n; y++)
		{
			int x;
			for (x = 0; x <= n; x++)
			{
				int product = x * y;

				if (product >= 100)
				{
					if (x != 0)
						_putchar((int)' ');
					_putchar((int)((product / 100) + 48));
					_putchar((int)(((product / 10) % 10) + 48));
					_putchar(((product - 100) % 10) + 48);
					if (x != n)
					_putchar((int)',');
					else
						_putchar((int)'\n');
				}
				else if (product >= 10)
				{
					if (x != 0)
					{
						_putchar((int)' ');
						_putchar((int)' ');
					}
					_putchar((int)((product / 10) + 48));
					_putchar((product % 10) + 48);
					if (x != n)
					_putchar((int)',');
					else
						_putchar((int)'\n');
				}
				else if (product >= 0)
				{
					if (x != 0)
					{
						_putchar((int)' ');
						_putchar((int)' ');
						_putchar((int)' ');
					}
					_putchar(product + 48);
					if (x != n)
						_putchar((int)',');
					else
						_putchar((int)'\n');
				}
				else
					_putchar((int)'\n');
			}

		}

	}
	else
	{
		_putchar((int)'\n');
	}
}

