#include "hash_tables.h"

/**
 * last_oc_of - a function that returns
 * the last occurrence of a character
 * in a string
 * @str: the string
 * @c: the character
 * Return: int
 **/
int last_oc_of(char *str, char c)
{
	int count = _strlen(str) - 1;

	while (count >= 0 && str[count] != c)
		count--;

	if (str[count] == c)
		return (count);
	else
		return (-1);
}

/**
 * _strlen - a function that computes
 * the lenght of a string
 * @str: the string
 * Return: unsigned int
 * description: checked
 **/
unsigned int _strlen(char *str)
{
	int len = 0;

	if (!str)
		return (len);
	while (str[len])
		len++;

	return (len);
}
/**
* _strdcat - A function that concatenates two strings
* dynamically
* @dest: a destination string
* @src: a string to append
* description: the first string and only that needs to be
*     dynamically allocated
*     checked
* Return: Always a string
**/
char *_strdcat(char *dest, char *src)
{
	int  ind = 0;
	unsigned int res_len = 0, i, dest_len, src_len;
	char *res = NULL;

	dest_len = _strlen(dest), src_len = _strlen(src);
	res_len = dest_len + src_len;
	if (null_like(dest))
		return (strdup(src));
	if (null_like(src))
		return (strdup(dest));

	res = malloc((res_len) * sizeof(char) + 1);
	if (!res)
		return (res);
	if (res_len == 0)
		return (NULL);
	res[res_len] = '\0';

	for (ind = 0; ind < (int)dest_len; ind++)
		res[ind] = dest[ind];
	for (i = 0; ind < (int)res_len; ind++)
		res[ind] = src[i++];

	return (res);
}

/**
 * _strvcat - a function that concatenates
 * a variable number of strings
 * @first_str: the first string in the parameter
 * list
 * Return: char *
 **/
char *_strvcat(char *first_str, ...)
{
	va_list arg_list;
	char *curr_str, *acc = NULL, *tmp = NULL;

	va_start(arg_list, first_str);
	curr_str = first_str;
	while (curr_str)
	{
		tmp = acc;
		acc = _strdcat(acc, curr_str);
		free(tmp);
		curr_str = va_arg(arg_list, char *);
	}
	va_end(arg_list);

	return (acc);
}

/**
 * hash_table_print - a function that prints
 * a hash table entries in the order they appear
 * @ht: the hash_table
 * Return: void
 **/
void hash_table_print(const hash_table_t *ht)
{
	char *table_print = NULL, *tmp;
	unsigned long int i;
	hash_node_t *curr;

	if (!ht || !ht->array)
	{
		puts("{}");
		return;
	}

	table_print = _strvcat("{", NULL);
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			curr = ht->array[i];
			while (curr)
			{
				tmp = table_print;
				table_print = _strvcat(table_print, "'", curr->key, "': ", "'", curr->value, "', ", NULL);
				free(tmp), curr = curr->next;
			}
		}
	}
	tmp = table_print, table_print = _strvcat(table_print, "}", NULL);
	free(tmp);
	i = last_oc_of(table_print, ',');
	if ((int)i != -1 && i < ht->size)
		table_print[i] = '}', table_print[i + 1] = '\0';

	printf("%s\n", table_print);
}
