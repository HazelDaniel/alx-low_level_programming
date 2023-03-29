#include "main.h"

/**
* _strncpy - A function that a string into another
* up to a specified number of bytes
* @dest: a destination string
* @src: a string to append
* @n: the number to copy up to
* Return: Always a string
**/
char *_strncpy(char *dest, char *src, int n)
{
	int dest_count = 0;
	int i;

	while (dest[dest_count] != '\0')
	{
		dest_count++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
