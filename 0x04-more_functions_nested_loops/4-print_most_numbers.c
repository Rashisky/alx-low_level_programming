#include "main.h"

/**
 * print_most_numbers - print 0 to 9 but not 2 and 4
 * Return: 0 means success, else
 */

void print_most_numbers(void)
{
	int k;

	for (k = '0'; k <= '9'; k++)
	{
		if (k == '2' || k == '4')
			continue;
		else
			_putchar(k);
	}
	_putchar('\n');
}
