#include "main.h"

/**
* _strpbrk - the function name
* @s: parameter of type char*.
* @accept: parameter of type char*.
* Return: char*.
*/
char *_strpbrk(char *s, char *accept)
{
	s += get_first_occurrence(s, accept);
	return (s);
}
/**
* get_first_occurrence - gets the first occurrence
	* of a character form the a string
	* in another string
* @s: parameter of type char* .
* @accept: parameter of type char* .
* Return: int .
*/
int get_first_occurrence(char *s, char *accept)
{
	unsigned int i, index = 0;
	int s_offset = -1;

	while (s[index] != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (s[index] == accept[i])
			{
				s_offset = (int)index;
				break;
			}
		}
		if (s_offset == (int)index)
		{
			break;
		}
		index++;
	}
	return (s_offset);
}
