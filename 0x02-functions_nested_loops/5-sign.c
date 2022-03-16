#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: n is an integer number
 * Return: 1 if Success
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar("+");
		return (1);
	}
	else if (n == 0)
	{
		print_sign(0);
		return (0);
	}
	else
	{
		print_sign("-");
		return (-1);
	}
}
