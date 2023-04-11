#include "main.h"

int get_count(char *s1, char *s2);
int get_count_str(char *s1);
/*apparently, there is no room for function overloading in c.*/

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
		count = get_count_str(s2);
		temp_str = (char *)malloc(count * sizeof(char));
		if (temp_str == NULL)
			return (temp_str);
		while (*(s2 + j) != '\0')
			*(temp_str + i) = *(s2 + j), i++, j++;
	}
	else if (s1 != NULL && s2 == NULL)
	{
		count = get_count_str(s1);
		temp_str = (char *)malloc(count * sizeof(char));
		if (temp_str == NULL)
			return (temp_str);
		while (*(s1 + i) != '\0')
			*(temp_str + i) = *(s1 + i), i++;
	}
	else
	{
		count = get_count(s1, s2);
		temp_str = (char *)malloc(count * sizeof(char));
		if (temp_str != NULL)
			return (temp_str);
		while (*(s1 + i) != '\0')
			*(temp_str + i) = *(s1 + i), i++;
		while (*(s2 + j) != '\0')
			*(temp_str + i) = *(s2 + j), i++, j++;
	}
	*(temp_str + i) = '\0';
	return (temp_str);
}

/**
  * get_count - the function name
  * @s1: parameter of type char *.
  * @s2: parameter of type char *.
  * Return: char *.
 */
int get_count(char *s1, char *s2)
{
	int count = 0;

	while (*(s1 + count) != '\0' || *(s2 + count) != '\0')
		count++;
	return (count);
}
/**
  * get_count_str - the function name
  * @s1: parameter of type char *.
  * Return: char *.
 */
int get_count_str(char *s1)
{
	int count = 0;

	while (*(s1 + count) != '\0')
		count++;
	return (count);
}
