#include "function_pointers.h"
/**
 * print_name - a function that
 * executes another function parameter
 * @f: the pointer to the function parameter
 * @name: the pointer to char
 * Return: void
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name)
		f(name);
}
