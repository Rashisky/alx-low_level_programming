#include <stdio.h>

/**
 * main - prints lowercase alphabets
 * in reverse
 * result - always 0 (Success)
 */
int main(void)
{
	char alph;
	for (alph = 'z'; alph >= 'a'; alph--)
		putchar(alph);
	putchar('\n');
	return (0);
}
