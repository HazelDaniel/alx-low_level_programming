#ifndef ___FUNCT_POINT_
#define ___FUNCT_POINT_
#include <stdio.h>
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
#endif/*___FUNCT_POINT_*/
