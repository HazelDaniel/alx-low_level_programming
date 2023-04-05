#include "main.h"

/**
  * is_palindrome - recursively checks
	* whether a string is palindrome
  * @s: parameter of type char *.
  * Return: int .
 */
int is_palindrome(char *s)
{
	return (is_palid(s, 0, get_length(s, 0) - 1));
}

/**
  * is_palid - helper function for the
	* is_palindrome function
  * @A: parameter of type char *.
  * @start: parameter of type int .
  * @end: parameter of type int .
  * Return: int .
 */
int is_palid(char *A, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (A[start] == A[end])
	{
		return (is_palid(A, start + 1, end - 1));
	}
	else
	{
		return (0);
	}
}

/**
  * get_length - recursively gets the length of a string
  * @A: parameter of type char *.
  * @count: parameter of type int .
  * Return: int .
 */
int get_length(char *A, int count)
{
	if (A[count] == '\0')
	{
		return (count);
	}
	count++;
	return (get_length(A, count));
}
