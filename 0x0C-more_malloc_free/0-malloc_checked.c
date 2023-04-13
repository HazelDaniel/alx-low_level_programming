#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - the function name
* @b: parameter of type unsigned int .
* Return: void *.
*/
void *malloc_checked(unsigned int b)
{
	int *temp_ptr = malloc(b);

	if (temp_ptr == NULL)
	{
		exit(98);
	}
	return (temp_ptr);
}
