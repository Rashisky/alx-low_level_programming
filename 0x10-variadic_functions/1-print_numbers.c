#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

#define start va_start
#define end va_end
#define varg va_arg

/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator: A string to be printed between numbers
 * @n: number of integers passed to the fuction
 *
 * Return: if separator is NULL, don't print it.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, s;
	va_list nums;

	if (separator)
	{
		start(nums, n);
		for (i = 0; i < n; i++)
		{
			s = varg(nums, int);
			printf("%d", s);
			if (i != (n - 1) && separator != NULL)
			{
				printf("%s", separator);
			}
		}
		printf("\n");

		end(nums);
	}
}
