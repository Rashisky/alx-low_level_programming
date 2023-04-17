#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers
 * using `Jump search algorithm`
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: -1 if value is not present of array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t m = size, s, i = 0, index;
	int cond;

	if (size == 0 || array == NULL)
		return (-1);

	m = (fmod(sqrt(m), 1) > 0) ? sqrt(m) + 1 : sqrt(m);
	for (; i < size; i += m - 1)
	{
		index = (i + m - 1 < size) ? i + m - 1 : size - 1;
		cond = (i + m - 1 >= size) ? 1 : 0;
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[index] >= value || (array[index] < value && cond))
		{
			printf("Value found between indexes [%ld] and [%ld]\n", i, i + m - 1);
			for (s = i; s <= index; s++)
			{
				printf("Value checked array[%ld] = [%d]\n", s, array[s]);
				if (array[s] == value)
					return (s);
			}
			return (-1);
		}
	}
	return (-1);
}
