#include <stdio.h>

/**
 * main - prints the alphabet in lowercase and then in uppercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char small;
	char cap;	

	for (small = 'a'; small <= 'z'; small++)
		putchar(small);
	for (cap = 'A'; cap <= 'Z'; cap++)
		putchar(cap);
	putchar('\n');
	return (0);
}
