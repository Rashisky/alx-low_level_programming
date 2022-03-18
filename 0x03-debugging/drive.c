#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * positive_or_negative - Determines if a number is positive or negative
 * largest_integer - Determines highest integer
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


/**
 * largest_number - Determines highest integer
 * @a: first integer argument
 * @b: second integer argument
 * @c: third integer argument
 * Return: Always 0
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && b > c)
	{
		largest = a;
	}
	else if (a > c && c > b)
	{
		largest = a;
	}
	else if (b > a && a > c)
	{
		largest = b;
	}
	else if (b > c && c > a)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
};


