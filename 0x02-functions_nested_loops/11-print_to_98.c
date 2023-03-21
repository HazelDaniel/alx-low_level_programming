#include "main.h"
#include <stdio.h>

/**
* print_to_98 - check the code
*
* Return: Always void.
*/

void print_to_98(int x)
{
	if (x >= 98)
	{
		while (x - 98 >= 0)
		{
			if (x - 98 != 0)
				printf("%d,  ", x);
			else
				printf("%d\n", x);
			x--;
		}
	}
	else if (x == 98)
	{
		printf("%d\n", x);
	}
	else
	{
		if (x >= 0)
		{
			while (98 - x >= 0)
			{
				if (98 - x != 0)
					printf("%d,  ", x);
				else
					printf("%d\n", x);
				x++;
			}
		}
		else
		{
			while (x <= 98)
			{
				if (98 - x != 0)
					printf("%d,  ", x);
				else
					printf("%d\n", x);
				x++;
			}

		}
	}
}
