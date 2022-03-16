#include "main.h"

/**
 * main - prints the 9 times table
 * Return: Always 0 Success
 */
int main(void)
{
	int k;
	int u;
	int z;

	for (k = 0; k <= 9; k++)
	{
		for (u = 0; u <= 9; u++)
		{
			z = u * k;
			times_table(z);
			times_table(",");
			times_table(" ");
			times_table(" ");
		}
	}
	times_table('\n');
	return (0);
}
