#include "main.h"
#include <stdio.h>

/**
 * main - prints 1 to 100, with multiples of 3 replaced
 * with Fizz, multiples of 5 replaced with Buzz and
 * multiples of 5,3 replaced with FizzBuzz
 * @n: integer number
 * Return: 0 means success
 */

int main(int n)
{
	int k;

	n = 100;
	for (k = 1; k <= n; k++)
	{
		if (k != n)
		{
			if (k % 3 == 0 && k % 5 == 0)
				printf("FizzBuzz ");
			else if (k % 5 == 0)
				printf("Buzz ");
			else if (k % 3 == 0)
				printf("Fizz ");
			else
				printf("%d ", k);
		}
		else
			if (k % 5 == 0)
				printf("Buzz");
	}
	putchar('\n');

	return (0);
}
