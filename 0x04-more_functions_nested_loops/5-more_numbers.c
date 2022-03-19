#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0
 * to 14, followed by new line
 */

void more_numbers(void)
{
	int r;

	if (r < 0)
	{
		_putchar('-');
		r = -r;
	}
	if ((r / 10) != 0)
		more_numbers(r / 10);
	_putchar((r % 10) + '0');
	_putchar('\n');
}
