#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9
 * followed by a new line
 */

void print_numbers(void)
{
	int k;

	for (k = '0'; k <= '9'; k++)
		_putchar(k);
	_putchar('\n');
}
