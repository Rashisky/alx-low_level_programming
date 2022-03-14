#include <stdio.h>

/**
 * main - prints number of base 16
 * in lower case
 * Return: always 0 (Success)
 */
int main(void)
{
	int k;
	char n;

	for (k = '0'; k <= '9'; k++)
		putchar(k);
	for (n = 'a'; n <= 'f'; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
