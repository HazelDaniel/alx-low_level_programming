#include "main.h"
#include <string.h>

/**
* _calloc - the function name
* @nmemb: parameter of type unsigned int .
* @size: parameter of type unsigned int .
* Return: void *.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *temp_ptr = NULL;

	if (nmemb <= 0 || size <= 0)
	{
		return (NULL);
	}
	temp_ptr = (char *)malloc(nmemb * size);
	if (temp_ptr == NULL)
	{
		return (temp_ptr);
	}
	memset(temp_ptr, 0, nmemb * size);
	return (temp_ptr);
}
