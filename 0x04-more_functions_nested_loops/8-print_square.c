#include "main.h"

/**
 * print_square - prints square
 * @size: integer arg
 */

void print_square(int size)
{
	int k = 0;
	int t = 0;

	while (k < size)
	{
		for (t = 1; t <= size; t++)
			_putchar('#');
		_putchar('\n');
		k++;
	}
	if (size <= 0)
		_putchar('\n');
}
