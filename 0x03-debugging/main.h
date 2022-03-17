#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * positive_or_negative - Determines if a number is positive or negative
 * @n: integer argument
 * Return: 0 means Success
 */

int positive_or_negative(int n)
{
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
		printf("%d %s\n", n, "is negative");
	else
		if (n == 0)
			printf("%d %s\n", n, "is zero");
		else
			printf("%d %s\n", n, "is positive");
	return (0);

}
