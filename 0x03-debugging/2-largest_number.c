#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * positive_or_negative - Determines if a number is positive or negative
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: 0 means Success
 */


int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && b >= c)
	{
		largest = a;
	}
	else if (b >= a && a >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
