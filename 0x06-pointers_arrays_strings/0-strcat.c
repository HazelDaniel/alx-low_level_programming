#include "main.h"

/**
* _strcat - A function that concatenates two strings
* @dest: a destination string
* @src: a string to append
* Return: Always a string
**/
char *_strcat(char *dest, char *src)
{
	int dest_count = 0;
	int src_count = 0;

	while (dest[dest_count] != '\0')
	{
		dest_count++;
	}
	dest_count++;
	while (src[src_count] != '\0')
	{
		dest[dest_count] = src[src_count];
		src_count++;
		dest_count++;
	}
	dest[dest_count] = '\0';
	return (dest);
}
