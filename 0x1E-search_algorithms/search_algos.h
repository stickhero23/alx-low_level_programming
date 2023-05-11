#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS
#include <stdio.h>
#include <stddef.h>
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *array, size_t t, size_t size);
#endif
