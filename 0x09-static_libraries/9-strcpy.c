#include "main.h"

/**
* _strcpy - a function that copies a string to another
* @dest: the destination string
* @src: the source string
* Return: always the destination string
**/
char *_strcpy(char *dest, char *src)
{
	int count = 0;
	int i;

	while (src[count] != '\0')
	{
		count++;
	}
	count++;
	for (i = 0; i < count; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
