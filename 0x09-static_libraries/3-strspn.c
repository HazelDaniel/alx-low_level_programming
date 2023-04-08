#include "main.h"

/**
* _strspn - A function that retuns the length of
* progressive occurrences of characters of a string in another
* @s: parameter of type char* .
* @accept: parameter of type char* .
* Return: unsigned int .
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	int s_offset = -1, matched_index = -1, l_index = -1;

	s_offset = get_first_occurrence(s, accept);
	for (l_index = s_offset, matched_index = l_index;
	s[l_index] != '\0'; l_index++)
	{
		if (l_index != matched_index)
		{
			break;
		}
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (s[l_index] == accept[i])
			{
				matched_index++;
			}
		}
	}
	if (s_offset == -1)
	{
		l_index = s_offset;
		return (l_index - s_offset);
	}
	return (l_index - s_offset - 1);
}
/**
* get_first_occurrence - gets the first occurrence
* of a character form the a string
* in another string
* @s: a char array
* @accept: a char array
* Return: integer of the first occurrence
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
