#include "main.h"

/**
* _strncat - A function that concatenates
* two strings up to a
* specified number of bytes
* @dest: a destination string
* @src: a string to append
* @n: the number to concatenate up to
* Return: Always a string
**/
char *_strncat(char *dest, char *src, int n)
{
	int dest_count = 0;
	int i;

	while (dest[dest_count] != '\0')
	{
		dest_count++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_count + i] = src[i];
	}
	dest[dest_count + i] = '\0';
	return (dest);
}
