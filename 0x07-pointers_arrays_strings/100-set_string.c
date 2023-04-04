#include "main.h"
/**
 * set_string - a function that sets the contents of
 * the address of a string to string
 * @s: the address of a string
 * @to: the string to be copied from
 **/
void set_string(char **s, char *to)
{
	*s = to;
}
