#include "main.h"

/**
 * print_diagonal - draws diagonal line on the terminal
 * @n: takes 1 integer argument
 */

void print_diagonal(int n)
{
	int sp;
	int t;

	sp = 0;
	while (sp < n)
	{
		_putchar('\\');
		_putchar('\n');
		if (sp < (n - 1))
		{
			for (t = 0; t < (n - 1); t++)
				_putchar(' ');

		sp++;
	}
	_putchar('\n');
}
