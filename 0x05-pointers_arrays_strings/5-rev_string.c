#include "main.h"
#include <stdlib.h>

/**
* rev_string - swaps the values of two integers.
* @s: a pointer to char(s)
* Return: Always void
**/

void rev_string(char *s)
{
	int count = 0;
	int i;
	char temp;

	while (s[count] != '\0')
	{
		count++;
	}
	for (i = 0; i < count / 2; i++)
	{
		temp = s[i];
		s[i] = s[count - i - 1];
		s[count - i - 1] = temp;
	}
}
