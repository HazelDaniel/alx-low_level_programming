#ifndef ___VAR_FUNC_
#define ___VAR_FUNC_
#include <stdarg.h>
#define NULL ((void *)0)
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif/*___VAR_FUNC_*/
