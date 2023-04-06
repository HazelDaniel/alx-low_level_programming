#include <stdlib.h>
#include <limits.h>
#include "main.h"

/**
* main - The entry point of the program
* @argc: parameter of type int .
* @argv: parameter of type char *.
* @envp: parameter of type char *.
* Return: int .
*/
int main(int argc, char *argv[], char *envp[])
{
	int sum = 0, i;

	(void)envp;
	if (argc < 2)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (_atoi(argv[i]) != INT_MIN)
			{
				sum += _atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d", sum);
	}
	return (EXIT_SUCCESS);
}
/**
* _atoi - the function name
* @s: the string to convert
* to a number
* Return: an integer
*/
int _atoi(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;
	while (s[len] != '\0')
		len++;
	while (i < len && f == 0)
	{
		if (s[i] == '-')
		{
			++d;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
			{
				digit = -digit;
			}
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		else
		{
			return (INT_MIN);
		}
		i++;
	}
	if (f == 0)
		return (0);
	return (n);
}
