#include "main.h"

/**
 * times_table - prints the 9 times table
 * Return: Always 0 Success
 */
int times_table(void)
{
	int k;
	int u;
	int z;

	for (k = 0; k <= 9; k++)
	{
		for (u = 0; u <= 9; u++)
		{
			z = u * k;
			_putchar(z);
			_putchar(",");
			_putchar(" ");
			_putchar(" ");
		}
	}
	_putchar('\n');
	return (0);
}
