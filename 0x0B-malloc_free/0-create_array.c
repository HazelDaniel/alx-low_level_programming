#include "main.h"

/**
  * create_array - the function name
  * @size: parameter of type unsigned int .
  * @c: parameter of type char .
  * Return: char *.
 */
char *create_array(unsigned int size, char c)
{
	char *temp_str = NULL;
	int count = 0;

	if (size > 0)
	{
		temp_str = (char *)malloc(size * sizeof(char) + 1);
		for (; count < (int)size; count++)
		{
			*(temp_str + count) = c;
		}
	}
	return (temp_str);
}
