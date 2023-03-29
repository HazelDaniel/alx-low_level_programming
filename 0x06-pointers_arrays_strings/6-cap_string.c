#include "main.h"

/**
* cap_string - a function that capitalizes
* a string
* @s: the string parameter
* Return: string
**/
char *cap_string(char *s)
{
	int count = 0;
	char prev;
	int i;

	while (s[count] != '\0')
	{
		count++;
	}
	for (i = 0; i < count; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			prev = s[i - 1];
			if (i == 0 || (prev >= 9 && prev <= 13) || prev == 32)
			{
				s[i] = (int)(s[i]) - 32;
			}
		}
	}
	return (s);
}
