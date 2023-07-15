#include "search_algos.h"

/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the Exponential Search Algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: return the first index where value is located, if not present or
 * array is NULL, return -1
*/
int exponential_search(int *array, size_t size, int value)
{
	int n, prev, exp;

	if (array)
	{
		n = 0;
		prev = 0;
		while ((exp = _pow(2, n)) < (int)size)
		{
			if (array[exp] == value)
				return (exp);
			else if (array[exp] > value)
			{
				printf("Value found between indexes [%d] and [%d]\n", prev, exp);
				return (bin_search(array, prev, exp + 1, value));
			}
			prev = exp;
			printf("Value checked array[%d] = [%d]\n", exp, array[exp]);
			n++;
		}
		if ((size_t)prev < size)
		{
			printf("Value found between indexes [%d] and [%d]\n", prev, exp - 1);
			return (bin_search(array, prev, size, value));
		}
		return (-1);
	}
	return (-1);
}

/**
* bin_search - searches for a value in a sorted array of integers using
 * Binary Search Algorithm
 * @array: pointer to the first element of the array to search in
 * @min: value of current minimum index in the array
 * @max: value of current maximum index
 * @value: value to search for
 *
 * Return: The first index where value is located, else -1 if array is NULL
 * or value is not present
*/
int bin_search(int *array, size_t min, size_t max, int value)
{
	int result;
	size_t mid, i;

	if (min == max)
		return (-1);

	printf("Searching in array: ");
	for (i = min; i < max; i++)
		printf("%d%s", array[i], (i + 1 < max) ? ", " : "\n");
	mid = ((max + min) % 2 == 0) ? ((max + min) / 2) - 1 : ((max + min) / 2);

	if (array[mid] == value)
		return (mid);
	result = (array[mid] > value) ? bin_search(array, min, mid, value) :
			bin_search(array, mid + 1, max, value);

	return (result);
}

/**
 * _pow - calculates the exponential power given
 * @base: base number
 * @exponent: the power number
 *
 * Returns: the power of the base
*/
double _pow(double base, int exponent)
{
	double result = 1.0;
	int i;

	if (exponent >= 0)
		for (i = 0; i < exponent; i++)
			result *= base;
	else
		for (i = 0; i > exponent; i--)
			result /= base;
	return (result);
}
