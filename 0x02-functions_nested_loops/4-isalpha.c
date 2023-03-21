#include "main.h"

/**
* _isalpha - check the code
* @c: an integer parameter
* Return: Always int.
*/

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
