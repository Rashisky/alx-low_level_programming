#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * using `Linear search algorithm`
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: integer value to search for
 *
 * Return: -1 if value is not present or if array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array)
	{
		for (; i < size; i++) 
		{
			if (value == array[i])
			{
				printf("Value checked array[%ld] = [%d]\n", i, array[i]);
				return (i);
			}
			else
				printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		}
		return (-1);
	}
	return (-1);
}
