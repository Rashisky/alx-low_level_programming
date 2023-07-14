#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using the Interpolation Search Algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located. if not present of array is
 * NULL, return -1
*/
int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, pos;

	low = 0;
	high = size - 1;

	if (array)
	{
		pos = position(array, low, high, size, value);
		while (low <= high && (int)pos >= 0)
		{
			if (array[pos] == value)
				return (pos);
			else if (array[pos] > value)
				high = pos - 1;
			else
				low = pos + 1;
			pos = position(array, low, high, size, value);
		}
		return (-1);
	}
	return (-1);
}


/**
 * position - finds a current position
 * @array: pointer to the first element of the array to search in
 * @low: lowest index of the current array range
 * @high: highest index of the current array range
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located. if not present of array is
 * NULL, return -1
*/
size_t position(int *array, int low, int high, size_t size, int value)
{
	size_t pos;

	pos = low + (((double)(high - low) / (array[high] - array[low])) *
	(value - array[low]));
	if (pos >= size)
	{
		printf("Value checked array[%ld] is out of range\n", pos);
		return (-1);
	}
	printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
	return (pos);
}
