#include "main.h"

/**
* jack_bauer - check the code
*
* Return: Always void.
*/

void jack_bauer(void)
{
	int n1;
	int n2;
	int n3;
	int n4;

	for (n1 = 0; n1 <= 2; n1++)
	{
		for (n2 = 0; n2 <= 9; n2++)
		{
			if ((n1 <= 1 && n2 <= 9) || (n1 <= 2 && n2 <= 3))
			{
				for (n3 = 0; n3 <= 5; n3++)
				{
					for (n4 = 0; n4 <= 9; n4++)
					{
						_putchar(n1 + '0');
						_putchar(n2 + '0');
						_putchar((int)':');
						_putchar(n3 + '0');
						_putchar(n4 + '0');
						_putchar((int)'\n');

					}
				}
			}
		}
	}

}
