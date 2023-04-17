#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted arrays
 * of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: -1 if array is NULL or value is not present
*/
int interpolation_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;

	if (array == NULL || size == 0)
		return (-1);

	while (low < high)
	{
		size_t pos = low + (((double)(high - low) / (array[high] - array[low]))
		* (value - array[low]));

		if (pos >= size)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			return (-1);
		}

		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] > value)
			high = pos - 1;
		else
			low = pos + 1;
	}

	return (-1);
}
