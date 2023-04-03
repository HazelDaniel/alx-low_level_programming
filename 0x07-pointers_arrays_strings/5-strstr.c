#include "main.h"

/**
* _compare - the function name
* @X: parameter of type char .
* @Y: parameter of type char .
* Return: int .
*/
int _compare(char *X, char *Y)
{
	while (*X++ && *Y++)
	{
		if (*X != *Y)
		{
			return (0);
		}
	}
	return (*Y == '\0');
}
/**
* _strstr - the function that finds the first
* occurrence of a substring in a larger string
* @haystack: the larger string
* @needle: the substring
* Return: char*
*/
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		if ((*haystack == *needle) && _compare(haystack, needle))
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
