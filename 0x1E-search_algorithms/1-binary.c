#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers using
 * Binary Search Algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: The first index where value is located, else -1 if array is NULL
 * or value is not present
*/
int binary_search(int *array, size_t size, int value)
{
	int result;

	if (array)
	{
		result = bin_search(array, 0, size, value);
		return (result);
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
		printf("%ld%s", i, (i + 1 < max) ? "," : "\n");
	mid = ((max + min) % 2 == 0) ? ((max + min) / 2) - 1 : ((max + min) / 2);

	if (array[mid] == value)
		return (mid);
	result = (array[mid] > value) ? bin_search(array, min, mid, value) :
			bin_search(array, mid + 1, max, value);

	return (result);
}
