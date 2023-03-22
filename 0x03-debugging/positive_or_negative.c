#include "main.h"
/**
* positive_or_negative - a function that checks if
* a number is positive or negative
* @i : an integer parameter
* Return - always void
*/

void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else if (i < 0)
	{
		printf("%d is negative\n", i);
	}
}
