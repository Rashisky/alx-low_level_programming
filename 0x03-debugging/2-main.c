#include <stdio.h>
#include "main.h"

/**
 * main - prints the largest o 3 integer
 * Return: 0
 */

int main(void)
{
	int a, b, c;
	int largest;

	a = 5;
	b = 7;
	c = 5;

	largest = largest_number(a, b, c);

	printf("%d is the largest number\n", largest);

	return (0);
}