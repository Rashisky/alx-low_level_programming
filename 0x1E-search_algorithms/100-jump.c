#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers using the
 * Jump Search Algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the first index where the value is located. if not present or the
 * array is NULL, return -1
*/
int jump_search(int *array, size_t size, int value)
{
	size_t blocks, steps, prev;
	int sqr;

	if (array)
	{
		steps = prev = 0;
		sqr = sqrt(size);
		blocks = (sqr * sqr == value) ? sqr - 1 : sqr;
		while (steps < size)
		{
			if (array[steps] < value)
				printf("Value checked array[%ld] = [%d]\n", steps, array[steps]);
			else
				return (value_range(array, prev, steps, size, value));
			prev = steps;
			steps += blocks;
		}
		if (prev < steps)
		{
			return (value_range(array, prev, steps, size, value));
		}
	}
	return (-1);
}


/**
 * value_range - searches for a value in a sorted array of integers linearly
 * @array: pointer to the first element of the array to search in
 * @min: the minimum index in the current block
 * @max: the maximum index in the current block
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the first index where the value is located. if not present or the
 * array is NULL, return -1
*/
int value_range(int *array, int min, int max, int size, int value)
{
	printf("Value found between indexes [%d] and [%d]\n", min, max);
	while (min <= max && min < size)
	{
		printf("Value checked array[%d] = [%d]\n", min, array[min]);
		if (array[min] == value)
			return (min);
		min++;
	}
	return (-1);
}
