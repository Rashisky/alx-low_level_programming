#include <stdio.h>

/**
 * main - prints all single digit
 * Return: always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		printf("%d", n);
	putchar('\n');
	return (0);
}