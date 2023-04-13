#include "main.h"

int get_count(char *s1, char *s2);

int get_count_str(char *s1);
int null_like(char *s1);

/**
 * string_nconcat - A function that concatenates
 * two strings up to n elements
 * @s1: the first string parameter
 * @s2: the second string parameter
 * @n: integer parameter
 * Return: char *
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int count = 0, i = 0, j = 0, lim;
	char *temp_str;

	if (null_like(s1) && null_like(s2))
	{
		temp_str = (char *)malloc(sizeof(char));
	}
	else if (null_like(s1) && !(null_like(s2)))
	{
		count = (int)n <= get_count_str(s2) ? (int)n : get_count_str(s2);
		temp_str = (char *)malloc(count * sizeof(char));
		if (temp_str == NULL)
			return (temp_str);
		for (; j < count; j++)
			*(temp_str + i) = *(s2 + j), i++, j++;
	}
	else if (!(null_like(s1)) && null_like(s2))
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
		count = get_count_str(s1);
		lim = (int)n <= get_count_str(s2) ? (int)n : get_count_str(s2);
		temp_str = (char *)malloc(lim * sizeof(char) + 1);
		if (temp_str == NULL)
			return (temp_str);
		while (*(s1 + i) != '\0')
			*(temp_str + i) = *(s1 + i), i++;
		while (*(s2 + j) != '\0' && j < lim)
			*(temp_str + i) = *(s2 + j), i++, j++;
	}
	*(temp_str + i) = '\0';
	return (temp_str);
}

/**
  * get_count_str - the function name
  * @s1: parameter of type char *.
  * Return: int .
 */
int get_count_str(char *s1)
{
	int count = 0;

	while (*(s1 + count) != '\0')
		count++;
	return (count);
}

/**
  * null_like - the function name
  * @s1: parameter of type char *.
  * Return: int .
 */
int null_like(char *s1)
{
	if (s1 == NULL || *s1 == '\0')
		return (1);
	return (0);
}
