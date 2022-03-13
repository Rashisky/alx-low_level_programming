#include <stdio.h>

/**
 * main - prints all possible combination
 * of single-digit numbers
 * return - always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
		if (n == '9')
			continue;
		else
			putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
