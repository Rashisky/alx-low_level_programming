#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: minimum integer
 * @max: maximum integer
 *
 * Return: the pointer from malloc
 */

int *array_range(int min, int max)
{
	int n, inc = 0;
	int *arr;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(*arr) * (max - min + 1));
	if (arr == NULL)
		return (NULL);
	for (n = min; n <= max; n++, inc++)
	{
		arr[inc] = n;
	}
	return (arr);
}
