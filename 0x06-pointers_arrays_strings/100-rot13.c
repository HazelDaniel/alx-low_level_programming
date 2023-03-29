#include "main.h"

/**
* rot13 - a function that encodes a string
* using rot13 substitution cypher
* @s: a string parameter
* Return:  a string
**/
char *rot13(char *s)
{
	char *keys = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *vals = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int count = 0, j;

	for (; s[count] != '\0'; count++)
	{
		for (j = 0; keys[j] != '\0'; j++)
		{
			if (s[count] == keys[j])
			{
				s[count] = vals[j];
			}
		}
	}
	return (s);
}
