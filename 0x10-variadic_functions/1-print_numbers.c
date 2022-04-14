#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

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

	if (separator)
	{
		va_list nums;
		start(nums, n);
		for (i = 0; i < n; i++)
		{
			if (i)
			{
				printf("%s", separator);
			}
			s = varg(nums, int);
			printf("%d", s);
		}
		end(nums);
		printf("\n");
	}
}
