#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of
 * integers using the `Binary search algorithm`
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index where the value is located else -1
*/
int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size;
	int i;
	int mid = size / 2;

	if (array == NULL || size == 0)
		return (-1);

	while (left < right)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
		{
			printf("%d", array[i]);
			if (i + 1 < right)
				putchar(',');
		}
		putchar('\n');

		mid = ((left + right) % 2 == 0) ? (left + right) / 2 - 1 :
		(left + right) / 2;
		if (array[mid] == value)
			return (mid);

		else if (array[mid] > value)
			right = mid;

		else
			left = mid + 1;

	}
	return (-1);
}
