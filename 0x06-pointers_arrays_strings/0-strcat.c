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
	int i;
	int j;

	while (dest[dest_count] != '\0')
	{
		dest_count++;
	}
	while (src[src_count] != '\0')
	{
		src_count++;
	}
	for (i = dest_count, j = 0; i < (src_count + dest_count + 1); i++, j++)
	{
		if (i == src_count + dest_count)
		{
			dest[i] = '\0';
			break;
		}
		dest[i] = src[j];
	}
	return (dest);
}
