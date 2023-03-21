#include "main.h"

/**
* print_last_digit - check the code
* @x - integer parameter
* Return: Always int.
*/

int print_last_digit(int x)
{
	if (x < 0)
	{
		x = -x;
	}
	return (x % 10);
}
