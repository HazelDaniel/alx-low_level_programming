#include "main.h"

/**
* _strcmp - a function that compares two strings.
* lexicographically
* @s1: the first string
* @s2: the second string
* Return: - the difference in the first unmatched
* characters if unequal
* else, 0
**/

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
