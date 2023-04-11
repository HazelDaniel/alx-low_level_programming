#include "main.h"

/**
  * str_concat - the function name
  * @s1: parameter of type char *.
  * @s2: parameter of type char *.
  * Return: char *.
 */
char *str_concat(char *s1, char *s2)
{
	int count = 0, i = 0, j = 0;
	char *temp_str;

	if (s1 == NULL && s2 == NULL)
	{
		temp_str = (char *)malloc(sizeof(char));
	}
	else if (s1 == NULL && s2 != NULL)
	{
		while (*(s2 + count) != '\0')
			count++;
		temp_str = (char *)malloc(count * sizeof(char));
		if (temp_str != NULL)
		{
			while (*(s2 + j) != '\0')
			{
				*(temp_str + i) = *(s2 + j);
				i++, j++;
			}
			*(temp_str + i) = '\0';
		}
	}
	else if (s1 != NULL && s2 == NULL)
	{
		while (*(s1 + count) != '\0')
			count++;
		temp_str = (char *)malloc(count * sizeof(char));
		if (temp_str != NULL)
		{
			while (*(s1 + i) != '\0')
			{
				*(temp_str + i) = *(s1 + i);
				i++;
			}
			*(temp_str + i) = '\0';
		}
	}
	else
	{
		while (*(s1 + count) != '\0' || *(s2 + count) != '\0')
			count++;
		temp_str = (char *)malloc(count * sizeof(char));
		if (temp_str != NULL)
		{
			while (*(s1 + i) != '\0')
			{
				*(temp_str + i) = *(s1 + i);
				i++;
			}
			while (*(s2 + j) != '\0')
			{
				*(temp_str + i) = *(s2 + j);
				i++, j++;
			}
			*(temp_str + i) = '\0';
		}
	}

	return (temp_str);
}
