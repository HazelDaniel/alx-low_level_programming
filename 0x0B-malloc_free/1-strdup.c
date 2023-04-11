#include "main.h"

/**
  * _strdup - the function name
  * @str: parameter of type char *.
  * Return: char *.
 */
char *_strdup(char *str)
{
	char *temp_str = NULL;
	int count = 0, i = 0;

	if (str != NULL)
	{
		while (*(str + count) != '\0')
			count++;
		temp_str = (char *)malloc(count * sizeof(char) + 1);
		for (; i < count; i++)
		{
			*(temp_str + i) = *(str + i);
		}
		*(temp_str + count) = '\0';
	}
	return (temp_str);
}
