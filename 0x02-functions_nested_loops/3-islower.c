#include "main.h"

/**
* _islower - check the code
*
* Return: Always int.
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
