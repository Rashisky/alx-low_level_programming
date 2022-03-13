#include <stdio.h>

/**
 * main - print single digit numbers
 * of base 10 starting from 0
 * return - always 0 (Success)
 */
int main(void)
{
	int v;

	for (v = '0'; v <= '9'; v++)
		putchar(v);
	putchar('\n');
	return (0);
}
