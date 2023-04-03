#include "main.h"
/**
 * print_chessboard - prints a chessboard
 * using a nx8 array
 * @a: array of char*
 * Return: void
 **/
void print_chessboard(char (*a)[8])
{
	int count, inner_count, row_len = 8;

	for (count = 0; count < row_len; count++)
	{
		for (inner_count = 0; inner_count < row_len; inner_count++)
		{
			_putchar(a[count][inner_count]);
			if (inner_count == 7)
			{
				_putchar('\n');
			}
		}
	}
}
