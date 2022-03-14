#include <stdio.h>

/**
 * main - prints all possible different
 * combinations of two digits
 * Return - Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '1'; b <= '9'; b++)
		{
			if (a == b)
				continue;
			else
			{
				if ('a''b' == 'b''a')
					continue;
				else
				{
					putchar(a);
					putchar(b);
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
