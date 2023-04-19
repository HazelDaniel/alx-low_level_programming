#include "3-calc.h"

/**
 * get_op_func - a function that returns
 * a pointer to a function based on the
 * input char *
 * @s: the char * parameter
 * Return: int
 **/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op)
	{
		if (*((ops[i]).op) == *s) /* maybe check for strlen */
		{
			return ((ops[i]).f);
		}
		i++;
	}
	return (NULL);
}
