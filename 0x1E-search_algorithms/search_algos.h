#ifndef __SEARCHALGORITHM__
#define __SEARCHALGORITHM__

#include <stdio.h>
#include <stdlib.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int bin_search(int *array, size_t min, size_t max, int value);
int jump_search(int *array, size_t size, int value);
int value_range(int *array, int min, int max, int size, int value);
int interpolation_search(int *array, size_t size, int value);
size_t position(int *array, int low, int high, size_t size, int value);
int exponential_search(int *array, size_t size, int value);

#endif
