#ifndef ___SEARCH_ALGOS_
#define ___SEARCH_ALGOS_
#include <stdlib.h>

/* CORE FUNCTIONS */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);

/* UTILITY FUNCTIONS */
#endif/*___SEARCH_ALGOS_*/
