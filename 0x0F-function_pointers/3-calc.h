#ifndef ___CALC_
#define ___CALC_
#include <stdio.h>
#include <stdlib.h>
/**
 * struct op - struct op
 * @op: the operator
 * @f: the function associated
 **/
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} opt_t;
int (*get_op_func(char *s))(int, int);
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
#endif/*___CALC_*/
