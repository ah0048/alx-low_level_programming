#ifndef MAIN
#define MAIN
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_binary_search(int *array, size_t lo, size_t hi);
int jump_search(int *array, size_t size, int value);
#endif
