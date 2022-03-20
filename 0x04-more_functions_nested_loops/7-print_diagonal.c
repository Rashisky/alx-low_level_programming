#include "main.h"

/**
 * print_diagonal - draws diagonal line on the terminal
 * @n: takes 1 integer argument
 */

void print_diagonal(int n)
{
	int t, k;

	t = 0;
	k = 0;
	if (n <= 0)
		_putchar('\n');
	else
		for (t = 0; t < n; t++)
		{
			while (k < t)
			{
				_putchar(' ');
				k++;
			}
			k = 0;
			_putchar('\\');
			_putchar('\n');
		}
}
