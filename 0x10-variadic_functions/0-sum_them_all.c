#include "variadic_functions.h"
#include <stdarg.h>

#define start va_start
#define end va_end
#define varg va_arg
/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: unsigned int that does not vary (constant)
 *
 * Return: if n == 0, return 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	{
		return (0);
	}
	int sum = 0;
	unsigned int k;

	va_list args;
	start(args, n);
	for (k = 0; k < n; k++)
	{
		sum += varg(args, int);
	}
	end(args);

	return(sum);
}
