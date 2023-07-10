#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers using the
 * Linear Search Algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index where value is located, else -1 if array is NULL or
 * value is not present
*/
int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (array)
	{
		for (index = 0; index < size; index++)
		{
			printf("Value checked array[%ld] = [%d]\n", index, array[index]);
			if (array[index] == value)
				return (index);
		}
		return (-1);
	}
	return (-1);
}
