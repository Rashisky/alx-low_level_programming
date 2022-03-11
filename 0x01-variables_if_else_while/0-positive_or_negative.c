#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/**
 * main - calculate if n is positive or negative
 * Result - Always 0 (Success)
 */

/* betty style doc for function main goes there */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
		printf("%d %s\n", n, "is negative");
	else
		if (n==0)
			printf("%d %s\n", n, "is zero");
		else
			printf("%d %s\n", n, "is positive");
	return (0);
}
