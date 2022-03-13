#include <stdio.h>

/**
 * main - prints all possible combination
 * of single-digit numbers
 * result - always 0 (Success)
 */
int main(void)
{
	int n;
	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
		if (n == '9')
			putchar('$');
		else
			putchar(',');
	}
	putchar('\n');
	return (0);
}
