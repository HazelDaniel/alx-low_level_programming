#include "main.h"

/**
* leet - a function that encodes a string based on
* some rules
* @s: a string parameter
* Return: a modified string
**/
char *leet(char *s)
{
	int i = 0, j;
	char *keys = "AaEeOoTtLl";
	char *vals = "4433007711";

	for (; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == keys[j])
			{
				s[i] = vals[j];
			}
		}
	}
	return (s);
}
