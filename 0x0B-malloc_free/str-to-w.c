#include <stdio.h>
#include <stdlib.h>

int null_like(char *s1);
int is_print(char c);
char **strtow(char *str);
/**
 * print_tab - Prints an array of string
 * @tab: The array to print
 *
 * Return: nothing
 */
void print_tab(char **tab)
{
	int i;

	for (i = 0; tab[i] != NULL; ++i)
	{
		printf("%s\n", tab[i]);
	}
}

/**
 * main - check the code for ALX School students.
 *
 * Return: 1 if an error occurred, 0 otherwise
 */
int main(void)
{
	char **tab;

	tab = strtow(" ALX School         #cisfun      ");
	if (tab == NULL)
	{
		printf("Failed\n");
		return (1);
	}
	print_tab(tab);
	return (0);
}

char **strtow(char *str)
{
	char **temp_arr = NULL;
	int str_count = 0, w_count = 0, arr_count = 0, w_index;

	if (null_like(str))
		return NULL;
	while(str[str_count] != '\0')
	{
		if ((str_count == 0 && is_print(str[str_count]) || (!is_print(str[str_count]) && is_print(str[str_count + 1]))))
		{
			w_count++;	
		}
		str_count++;
	}
	temp_arr = (char **)malloc(w_count * sizeof(char *));
		if (temp_arr == NULL)
			return temp_arr;
	for (; arr_count < w_count; arr_count++)
	{
		str_count = 0;
		temp_arr[arr_count] = (char *)malloc(sizeof(char));
		if (temp_arr[arr_count] == NULL)
			return NULL; //TODO: free all allocated memory
		while (str[str_count] != '\0')
		{
			if (is_print(str[str_count]))
			{
				w_index = 0;
				while (is_print(str[str_count]))
				{
					temp_arr[arr_count] = realloc(temp_arr[arr_count], w_index + 1);
					temp_arr[arr_count][w_index] = str[str_count];
					if (!is_print(str[str_count + 1]))
					{
						w_index++;
						temp_arr[arr_count] = realloc(temp_arr[arr_count], w_index + 1);
						temp_arr[arr_count][w_index] = '\0';
						if (arr_count < w_count)
							arr_count++;
					}
					str_count++;
					w_index++;
				}
			}
			str_count++;
		}
	}
	temp_arr[w_count] = NULL;
	return temp_arr;
}

int is_print(char c)
{
	if (c >= 33 && c <= 126)
		return 1;
	return 0;
}

int null_like(char *s1)
{
	if (s1 == NULL || *s1 == 0)
		return (1);
	return (0);
}
