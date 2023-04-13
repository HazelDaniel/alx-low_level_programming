#include "main.h"
#include <string.h>

int find_min(int a, int b);

/**
  * _realloc - the function name
  * @ptr: parameter of type void *.
  * @old_size: parameter of type unsigned int .
  * @new_size: parameter of type unsigned int .
  * Return: void *.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *temp_ptr = NULL;
	unsigned int min_size;

	if (ptr == NULL)
	{
		temp_ptr = malloc(new_size);
		if (temp_ptr == NULL)
		{
			return (temp_ptr);
		}
		free(ptr);
		return (temp_ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	min_size = find_min(old_size, new_size);
	temp_ptr = (void *)malloc(new_size);
	memcpy(temp_ptr, ptr, min_size);
	return (temp_ptr);
}

/**
  * find_min - the function name
  * @a: parameter of type int .
  * @b: parameter of type int .
  * Return: int .
 */
int find_min(int a, int b)
{
	if (a > b)
		return (a);
	return (b);
}
