#include "main.h"

/**
* _memcpy - a function that copies n bytes from source
* to destination
* @dest: parameter of type char* .
* @src: parameter of type char* .
* @n: parameter of type int .
* Return: char .
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
