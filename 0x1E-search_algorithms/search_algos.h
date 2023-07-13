#ifndef __SEARCHALGORITHM__
#define __SEARCHALGORITHM__

#include <stdio.h>
#include <stdlib.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int bin_search(int *array, size_t min, size_t max, int value);

#endif