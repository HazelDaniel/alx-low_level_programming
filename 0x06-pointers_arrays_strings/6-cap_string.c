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
	int is_word_start;

	while (s[count] != '\0')
	{
		count++;
	}
	for (i = 0; i < count; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			prev = s[i - 1];
			is_word_start = (i == 0 || (prev >= 9 && prev <= 13) || prev == 32
			|| prev == 33 || prev == 34 || prev == 40 || prev == 41 ||
			prev == 46 || prev == 59 || prev == 63 || prev == 123
			|| prev == 125) ? 1 : 0;
			if (is_word_start == 1)
			{
				s[i] = (int)(s[i]) - 32;
			}
		}
	}
	return (s);
}
