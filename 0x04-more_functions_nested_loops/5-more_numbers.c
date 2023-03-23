#include "main.h"

/**
 * more_numbers -  a function that prints 10 times the numbers,
 * from 0 to 14, followed by a new line
 * Return - always void
 **/

void more_numbers(void)
{
	int num_arr[15] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
	int i;
	int j;
	int whole_part;
	int mod_part;
	int num;

	for (j = 0; j <= 9; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			num = num_arr[i];
			whole_part = num >= 10 ? num / 10 : -48;
			mod_part = num >= 10 ? num % 10 : num;

			_putchar(whole_part + 48);
			_putchar(mod_part + 48);

		}
			_putchar((int)'\n');
	}

}
