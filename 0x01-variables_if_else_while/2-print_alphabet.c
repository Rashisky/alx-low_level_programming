#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * and then in uppercase
 * return - always 0 (Success)
 */
int main(void)
{
	char small;
	
	for (small = 'a'; small <= 'z'; small++)
		putchar(small);
	putchar('\n');
	return (0);
}
