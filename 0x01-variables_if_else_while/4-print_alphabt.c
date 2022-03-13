#include <stdio.h>

/**
 * main - prints alphabet in lowercase
 * while ommiting e and q
 * return - always 0 (Success)
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x == 'e' || x == 'q')
			continue;
		else
			putchar(x);
	}
	putchar('\n');
	return (0);
}
