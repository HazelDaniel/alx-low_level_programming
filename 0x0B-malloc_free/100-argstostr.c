#include "main.h"
#include <stdio.h>

/**
  * argstostr - the function name
  * @ac: parameter of type int .
  * @av: parameter of type char **.
  * Return: char *.
 */
char *argstostr(int ac, char **av)
{
	int i = 0, str_count = 0, s_index;
	char *temp_str = (char *)malloc(sizeof(char)), *arg;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (; i < ac; i++)
	{
		s_index = 0;
		arg = *(av + i);
		while (*(arg + s_index) != '\0')
		{
			if (temp_str == NULL)
				return (temp_str);
			*(temp_str + str_count) = arg[s_index];
			s_index++;
			str_count++;
			temp_str = realloc(temp_str, str_count + 1);
		}
		if (*(arg + (s_index)) == '\0')
		{
			str_count++;
			temp_str = realloc(temp_str, str_count + 1);
			*(temp_str + (str_count - 1)) = '\n';
		}
		if (i == ac - 1)
			temp_str = realloc(temp_str, str_count - 1);
	}
	return (temp_str);
}
