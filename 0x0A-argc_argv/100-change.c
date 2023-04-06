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
	int coin_vals[] = { 25, 10, 5, 2, 1 }, i, change, curr_val, sum = 0;

	(void)envp;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		if (_atoi(argv[1]) != INT_MIN)
		{
			change = _atoi(argv[1]);
			if (change < 0)
			{
				printf("%d\n", 0);
				return (EXIT_SUCCESS);
			}
			for (i = 0; i < 5; i++)
			{
				curr_val = coin_vals[i];
				if (change >= curr_val)
				{
					sum += change / curr_val;
					if (change % curr_val == 0)
					{
						break;
					}
					change %= curr_val;
				}
			}
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		printf("sum is %d\n", sum);
	}
	return (EXIT_SUCCESS);
}
/**
* _atoi - a function that converts a
* string to an integer
* @s: the string parameter
* Return: integer
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
		else if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
			{
				digit = -digit;
			}
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
			{
				break;
			}
			f = 0;
		}
		else
		{
			return (INT_MIN);
		}
		i++;
	}
	return (n);
}
