#include "main.h"

/**
 * print_line - draws a straight line in the
 * terminal
 * @n: takes an integer argument
 */

void print_line(int n)
{
	int k;

	k = 0;
	while (k < n)
	{
		_putchar('_');
		k++;
	}
	_putchar('\n');
}
