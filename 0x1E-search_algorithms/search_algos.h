#ifndef ___SEARCH_ALGOS_
#define ___SEARCH_ALGOS_
#include <stdlib.h>
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
extern size_t min(size_t a, size_t b);
#endif/*___SEARCH_ALGOS_*/
