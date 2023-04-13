#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * zero_like - determines if any number is zero
 * @argv: argument vector.
 * Return: no return.
 */
void zero_like(char *argv[])
{
	int i, first_is_num = 1, second_is_num = 1;

	for (i = 0; argv[1][i]; i++)
		if (argv[1][i] != '0')
		{
			first_is_num = 0;
			break;
		}

	for (i = 0; argv[2][i]; i++)
		if (argv[2][i] != '0')
		{
			second_is_num = 0;
			break;
		}

	if (first_is_num == 1 || second_is_num == 1)
	{
		printf("0\n");
		exit(0);
	}
}

/**
 * _reset_to_zero - set memery to zero in a new array
 * @ar: char array.
 * @arr_len: length of the char array.
 * Return: pointer of a char array.
 */
char *_reset_to_zero(char *ar, int arr_len)
{
	int i = 0;

	for (i = 0; i < arr_len; i++)
		ar[i] = '0';
	ar[arr_len] = '\0';
	return (ar);
}

/**
 * check_is_dig - determines length of the number
 * and checks if number is in base 10.
 * @argv: arguments vector.
 * @n: row of the array.
 * Return: length of the number.
 */
int check_is_dig(char *argv[], int n)
{
	int ln;

	for (ln = 0; argv[n][ln]; ln++)
		if (!isdigit(argv[n][ln]))
		{
			printf("Error\n");
			exit(98);
		}

	return (ln);
}

/**
 * main - Entry point.
 * program that multiplies two positive numbers.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int ln1, ln2, lres, add, addl, i, j, k, ca;
	char *res;

	if (argc != 3)
		printf("Error\n"), exit(98);
	ln1 = check_is_dig(argv, 1), ln2 = check_is_dig(argv, 2);
	zero_like(argv), lres = ln1 + ln2, res = malloc(lres + 1);
	if (res == NULL)
		printf("Error\n"), exit(98);
	res = _reset_to_zero(res, lres);
	k = lres - 1, i = ln1 - 1, j = ln2 - 1, ca = addl = 0;
	for (; k >= 0; k--, i--)
	{
		if (i < 0)
		{
			if (addl > 0)
			{
				add = (res[k] - '0') + addl;
				if (add > 9)
					res[k - 1] = (add / 10) + '0';
				res[k] = (add % 10) + '0';
			}
			i = ln1 - 1, j--, addl = 0, ca++, k = lres - (1 + ca);
		}
		if (j < 0)
		{
			if (res[0] != '0')
				break;
			lres--;
			free(res), res = malloc(lres + 1), res = _reset_to_zero(res, lres);
			k = lres - 1, i = ln1 - 1, j = ln2 - 1, ca = addl = 0;
		}
		if (j >= 0)
		{
			add = ((argv[1][i] - '0') * (argv[2][j] - '0')) + (res[k] - '0') + addl;
			addl = add / 10, res[k] = (add % 10) + '0';
		}
	}
	printf("%s\n", res);
	return (0);
}
